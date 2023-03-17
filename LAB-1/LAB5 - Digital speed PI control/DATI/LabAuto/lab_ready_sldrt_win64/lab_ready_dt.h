/*
 * lab_ready_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "lab_ready".
 *
 * Model version              : 2.2
 * Simulink Coder version : 9.4 (R2020b) 29-Jul-2020
 * C source code generated on : Wed May 11 14:41:15 2022
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
  "struct_lpkPxVgZGVy7X9qQljfLuC"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&lab_ready_B.Output), 0, 0, 11 },

  { (char_T *)(&lab_ready_B.FixPtSwitch), 3, 0, 3 }
  ,

  { (char_T *)(&lab_ready_DW.Delay_DSTATE[0]), 0, 0, 10 },

  { (char_T *)(&lab_ready_DW.EncoderInput_PWORK), 11, 0, 12 },

  { (char_T *)(&lab_ready_DW.Output_DSTATE), 3, 0, 3 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&lab_ready_P.degs2rpm), 0, 0, 26 },

  { (char_T *)(&lab_ready_P.EncoderInput_Channels), 6, 0, 8 },

  { (char_T *)(&lab_ready_P.LimitedCounter_uplimit), 3, 0, 3 },

  { (char_T *)(&lab_ready_P.Gain_Gain), 0, 0, 19 },

  { (char_T *)(&lab_ready_P.Constant_Value_l), 3, 0, 9 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] lab_ready_dt.h */
