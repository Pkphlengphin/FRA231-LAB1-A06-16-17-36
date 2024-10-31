/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encode_private.h
 *
 * Code generated for Simulink model 'encode'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Oct 31 08:04:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef encode_private_h_
#define encode_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "encode.h"
#include "encode_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern void encode_DigitalPortRead_Init(DW_DigitalPortRead_encode_T *localDW);
extern void encode_DigitalPortRead(B_DigitalPortRead_encode_T *localB);
extern void encode_MATLABFunction_Init(DW_MATLABFunction_encode_T *localDW);
extern void encode_MATLABFunction(real_T rtu_max_cnt, boolean_T rtu_set, real_T
  rtu_curr, real_T *rty_Count, real_T *rty_Pulse, DW_MATLABFunction_encode_T
  *localDW);

#endif                                 /* encode_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
