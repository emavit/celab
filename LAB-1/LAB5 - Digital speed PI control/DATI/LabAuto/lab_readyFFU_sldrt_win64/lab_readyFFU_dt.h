/*
 * lab_readyFFU_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "lab_readyFFU".
 *
 * Model version              : 2.5
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed May 25 15:21:36 2022
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(struct_tqEcQv8wI4rPb7WqAAnbuH),
  sizeof(struct_nnCjMXbWD7yQ89bIE3kkEH),
  sizeof(struct_vHPMdAr9HfDgWNbG6U3SfC),
  sizeof(struct_nZqFUEOh71pPhzsMP64FWD),
  sizeof(struct_DqRrFctOcoTwJhkxMXTGZG),
  sizeof(struct_t4jfYKvXkqvqbOrnXV9flF),
  sizeof(struct_8LnTg2HasR61N4e63tMdJ),
  sizeof(struct_vSWhg1oY4dvIzNJev85gsH),
  sizeof(struct_lpkPxVgZGVy7X9qQljfLuC)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "struct_tqEcQv8wI4rPb7WqAAnbuH",
  "struct_nnCjMXbWD7yQ89bIE3kkEH",
  "struct_vHPMdAr9HfDgWNbG6U3SfC",
  "struct_nZqFUEOh71pPhzsMP64FWD",
  "struct_DqRrFctOcoTwJhkxMXTGZG",
  "struct_t4jfYKvXkqvqbOrnXV9flF",
  "struct_8LnTg2HasR61N4e63tMdJ",
  "struct_vSWhg1oY4dvIzNJev85gsH",
  "struct_lpkPxVgZGVy7X9qQljfLuC"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&lab_readyFFU_B.ia), 0, 0, 10 },

  { (char_T *)(&lab_readyFFU_B.FixPtSwitch), 3, 0, 1 }
  ,

  { (char_T *)(&lab_readyFFU_DW.Delay_DSTATE[0]), 0, 0, 10 },

  { (char_T *)(&lab_readyFFU_DW.AnalogInput_PWORK), 11, 0, 9 },

  { (char_T *)(&lab_readyFFU_DW.Output_DSTATE), 3, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&lab_readyFFU_P.sens), 20, 0, 1 },

  { (char_T *)(&lab_readyFFU_P.mot), 15, 0, 1 },

  { (char_T *)(&lab_readyFFU_P.gbox), 14, 0, 1 },

  { (char_T *)(&lab_readyFFU_P.drv), 21, 0, 1 },

  { (char_T *)(&lab_readyFFU_P.B_eq), 0, 0, 20 },

  { (char_T *)(&lab_readyFFU_P.AnalogInput_Channels[0]), 6, 0, 8 },

  { (char_T *)(&lab_readyFFU_P.LimitedCounter_uplimit), 3, 0, 1 },

  { (char_T *)(&lab_readyFFU_P.Gain_Gain), 0, 0, 19 },

  { (char_T *)(&lab_readyFFU_P.Constant_Value_m), 3, 0, 3 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  9U,
  rtPTransitions
};

/* [EOF] lab_readyFFU_dt.h */
