clear all;

tr = 0.25;
Mp = 0.2;

wn = 1.8/tr;
delta = (log(1/Mp))/(sqrt(pi^2 + (log(1/Mp))^2));

t5 = 3/(delta*wn);
wb=wn;

T = 0.01;

s = tf('s');
P = 90/(s^2 + (60*s) + 3);
[num, den] = tfdata(P,'v');

A = [0 1; -3 -60];
B = [0;1];
C = [90 0];
D = 0;

sysC = ss(A,B,C,D);
sysC_d = c2d(sysC,T,'zoh');


%% 

J = [sysC_d.A-eye(2) sysC_d.B; sysC_d.C sysC_d.D];
b = [0; 0; 1];

X = J\b;

Nx = X(1:2);
Nu = X(3);

%% INTEGRAL

Ae = [1 sysC_d.C; zeros(2,1) sysC_d.A];
Be = [0; sysC_d.B];
Ce = [0 sysC_d.C];

%p=[exp(-delta*wn+1i*(2))*T exp(-delta*wn-1i*(2))*T exp(-delta*wn)*T];
%p=[-delta*wn+(1i*wn*sqrt(1-delta^2)) -delta*wn-(1i*wn*sqrt(1-delta^2)) -delta*wn];
p=[exp((-delta*wn*3)*T) exp((-delta*wn*3)*T) exp((-delta*wn*3))];

intg.Ke = acker(Ae, Be, p);
intg.Ki = intg.Ke(1);
intg.K = intg.Ke(2:3);

%% OBSERVER

po=exp((-delta*wn*3)*T);
L = place(sysC_d.A(2,2), sysC_d.A(1,2), po);

A0 = sysC_d.A(2,2)-(L*sysC_d.A(1,2));
B0 = [sysC_d.B(2)-(L*sysC_d.B(1)) (A0*L)-sysC_d.A(2,1)-(L*sysC_d.A(1,1))];
C0 = [0;1];
D0 = [0 1; 0 L];








