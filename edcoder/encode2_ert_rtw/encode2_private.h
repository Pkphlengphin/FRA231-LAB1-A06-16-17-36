/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encode2_private.h
 *
 * Code generated for Simulink model 'encode2'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Nov  1 00:22:41 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef encode2_private_h_
#define encode2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "encode2.h"
#include "encode2_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern void encode2_DigitalPortRead_Init(DW_DigitalPortRead_encode2_T *localDW);
extern void encode2_DigitalPortRead(B_DigitalPortRead_encode2_T *localB);
extern void encode2_MATLABFunction_Init(DW_MATLABFunction_encode2_T *localDW);
extern void encode2_MATLABFunction(boolean_T rtu_set, real_T rtu_cr, real_T
  *rty_C, real_T *rty_P, DW_MATLABFunction_encode2_T *localDW);

#endif                                 /* encode2_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
