/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encode2.c
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

#include "encode2.h"
#include "rtwtypes.h"
#include "encode2_types.h"
#include "encode2_private.h"
#include "stm_timer_ll.h"

/* Named constants for MATLAB Function: '<S6>/MATLAB Function' */
#define encode2_CALL_EVENT             (-1)

/* Block signals (default storage) */
B_encode2_T encode2_B;

/* Block states (default storage) */
DW_encode2_T encode2_DW;

/* Real-time model */
static RT_MODEL_encode2_T encode2_M_;
RT_MODEL_encode2_T *const encode2_M = &encode2_M_;

/* Forward declaration for local functions */
static void encode2_SystemCore_setup_ed(stm32cube_blocks_EncoderBlock_T *obj);
static void encode2_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void encode2_SystemCore_setup_e(stm32cube_blocks_EncoderBlock_T *obj);

/* System initialize for atomic system: */
void encode2_DigitalPortRead_Init(DW_DigitalPortRead_encode2_T *localDW)
{
  /* Start for MATLABSystem: '<S19>/Digital Port Read' */
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/* Output and update for atomic system: */
void encode2_DigitalPortRead(B_DigitalPortRead_encode2_T *localB)
{
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S19>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S19>/Digital Port Read' */
  localB->DigitalPortRead = ((pinReadLoc & 8192U) != 0U);
}

/*
 * System initialize for atomic system:
 *    '<S6>/MATLAB Function'
 *    '<S7>/MATLAB Function'
 *    '<S8>/MATLAB Function'
 */
void encode2_MATLABFunction_Init(DW_MATLABFunction_encode2_T *localDW)
{
  localDW->sfEvent = encode2_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<S6>/MATLAB Function'
 *    '<S7>/MATLAB Function'
 *    '<S8>/MATLAB Function'
 */
void encode2_MATLABFunction(boolean_T rtu_set, real_T rtu_cr, real_T *rty_C,
  real_T *rty_P, DW_MATLABFunction_encode2_T *localDW)
{
  real_T delta;
  localDW->sfEvent = encode2_CALL_EVENT;
  if (!localDW->pr_not_empty) {
    localDW->pr = rtu_cr;
    localDW->pr_not_empty = true;
    localDW->hom_not_empty = true;
    localDW->ps_not_empty = true;
  }

  delta = rtu_cr - localDW->pr;
  if (delta <= -1024.0) {
    delta = (delta + 2048.0) + 1.0;
  } else if (delta >= 1024.0) {
    delta = (delta - 2048.0) - 1.0;
  }

  if (rtu_set) {
    localDW->hom = localDW->ps;
  }

  localDW->ps += delta;
  delta = localDW->ps - localDW->hom;
  localDW->pr = rtu_cr;
  *rty_P = delta;
  *rty_C = delta;
}

static void encode2_SystemCore_setup_ed(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM3;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder2' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void encode2_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM1;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

static void encode2_SystemCore_setup_e(stm32cube_blocks_EncoderBlock_T *obj)
{
  uint8_T ChannelInfo;
  TIM_Type_T b;
  boolean_T isSlaveModeTriggerEnabled;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  obj->isInitialized = 1;
  b.PeripheralPtr = TIM4;
  b.isCenterAlignedMode = false;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  b.repetitionCounter = 0U;
  obj->TimerHandle = Timer_Handle_Init(&b);
  enableTimerInterrupts(obj->TimerHandle, 0);
  ChannelInfo = ENABLE_CH;

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  enableTimerChannel1(obj->TimerHandle, ChannelInfo);
  enableTimerChannel2(obj->TimerHandle, ChannelInfo);
  isSlaveModeTriggerEnabled = isSlaveTriggerModeEnabled(obj->TimerHandle);
  if (!isSlaveModeTriggerEnabled) {
    /* Start for MATLABSystem: '<Root>/Encoder1' */
    enableCounter(obj->TimerHandle, false);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void encode2_step(void)
{
  real_T C;
  real_T P;
  real_T P_b;
  real_T P_p;
  int32_T tmp;
  uint32_T pinReadLoc;
  boolean_T tmp_0;
  boolean_T tmp_1;

  /* MATLABSystem: '<S10>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S10>/Digital Port Read' */
  encode2_B.DigitalPortRead_g = ((pinReadLoc & 2U) != 0U);

  /* MATLABSystem: '<S12>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S12>/Digital Port Read' */
  encode2_B.DigitalPortRead = ((pinReadLoc & 16U) != 0U);

  /* MATLAB Function: '<Root>/Polling x2' incorporates:
   *  MATLAB Function: '<Root>/Polling x1'
   *  MATLAB Function: '<Root>/Polling x4'
   */
  tmp = encode2_B.DigitalPortRead_g - encode2_B.DigitalPortRead;
  if ((tmp == -1) && (encode2_DW.tr != 0.0)) {
    encode2_DW.ps++;
    encode2_DW.tr = 2.0;
  } else if ((tmp == 1) && (encode2_DW.tr != 0.0)) {
    encode2_DW.ps--;
    encode2_DW.tr = 2.0;
  }

  tmp_0 = !encode2_B.DigitalPortRead_g;
  tmp_1 = !encode2_B.DigitalPortRead;
  if (tmp_0 && tmp_1) {
    encode2_DW.tr = 0.0;
  }

  if ((tmp == 1) && (encode2_DW.tr == 0.0)) {
    encode2_DW.ps++;
    encode2_DW.tr = -1.0;
  } else if ((tmp == -1) && (encode2_DW.tr == 0.0)) {
    encode2_DW.ps--;
    encode2_DW.tr = 1.0;
  }

  if (encode2_B.DigitalPortRead_g && encode2_B.DigitalPortRead) {
    encode2_DW.tr = 1.0;
  }

  encode2_B.p_l = encode2_DW.ps;

  /* End of MATLAB Function: '<Root>/Polling x2' */
  /* MATLAB Function: '<Root>/Polling x1' */
  if (encode2_B.DigitalPortRead_g && encode2_B.DigitalPortRead) {
    encode2_DW.tr_m = 1.0;
  }

  if ((tmp == -1) && (encode2_DW.tr_m != 0.0)) {
    encode2_DW.ps_d++;
    encode2_DW.tr_m = 0.0;
  } else if ((tmp == 1) && (encode2_DW.tr_m != 0.0)) {
    encode2_DW.ps_d--;
    encode2_DW.tr_m = 0.0;
  }

  encode2_B.p_e = encode2_DW.ps_d;

  /* MATLAB Function: '<Root>/Polling x4' */
  if ((tmp == -1) && (encode2_DW.trigA != 0.0)) {
    encode2_DW.pos++;
    encode2_DW.trigA = 2.0;
  } else if ((tmp == 1) && (encode2_DW.trigA != 0.0)) {
    encode2_DW.pos--;
    encode2_DW.trigA = 2.0;
  }

  if ((tmp == -1) && (encode2_DW.trigA == 0.0)) {
    encode2_DW.pos++;
    encode2_DW.trigA = -1.0;
  } else if ((tmp == 1) && (encode2_DW.trigA == 0.0)) {
    encode2_DW.pos--;
    encode2_DW.trigA = -1.0;
  }

  tmp = encode2_B.DigitalPortRead - encode2_B.DigitalPortRead_g;
  if ((tmp == 1) && (encode2_DW.trigB != 0.0)) {
    encode2_DW.pos++;
    encode2_DW.trigB = 2.0;
  } else if ((tmp == -1) && (encode2_DW.trigB != 0.0)) {
    encode2_DW.pos--;
    encode2_DW.trigB = 2.0;
  }

  if ((tmp == 1) && (encode2_DW.trigB == 0.0)) {
    encode2_DW.pos++;
    encode2_DW.trigB = -1.0;
  } else if ((tmp == -1) && (encode2_DW.trigB == 0.0)) {
    encode2_DW.pos--;
    encode2_DW.trigB = -1.0;
  }

  if (tmp_0 && tmp_1) {
    encode2_DW.trigA = 0.0;
    encode2_DW.trigB = 0.0;
  }

  if (encode2_B.DigitalPortRead_g && encode2_B.DigitalPortRead) {
    encode2_DW.trigA = 1.0;
    encode2_DW.trigB = 1.0;
  }

  encode2_B.p = encode2_DW.pos;
  encode2_DigitalPortRead(&encode2_B.DigitalPortRead_d);

  /* MATLABSystem: '<Root>/Encoder2' */
  encode2_B.Encoder2 = getTimerCounterValueForG4(encode2_DW.obj.TimerHandle,
    false, NULL);

  /* MATLAB Function: '<S8>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<S8>/Data Type Conversion1'
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  RelationalOperator: '<S31>/Compare'
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_MATLABFunction(((int32_T)encode2_B.DigitalPortRead_d.DigitalPortRead >
    (int32_T)encode2_DW.DelayInput1_DSTATE), (real_T)encode2_B.Encoder2, &C, &P,
    &encode2_DW.sf_MATLABFunction_p);

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/Constant'
   */
  encode2_B.Product1 = P * 0.26179938779914941;

  /* SampleTimeMath: '<S29>/TSamp'
   *
   * About '<S29>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  C *= 100.0;

  /* Sum: '<S29>/Diff' incorporates:
   *  UnitDelay: '<S29>/UD'
   *
   * Block description for '<S29>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S29>/UD':
   *
   *  Store in Global RAM
   */
  encode2_B.Diff = C - encode2_DW.UD_DSTATE;
  encode2_DigitalPortRead(&encode2_B.DigitalPortRead_f);

  /* MATLABSystem: '<Root>/Encoder' */
  encode2_B.Encoder = getTimerCounterValueForG4(encode2_DW.obj_p.TimerHandle,
    false, NULL);

  /* MATLAB Function: '<S6>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion1'
   *  RelationalOperator: '<S13>/FixPt Relational Operator'
   *  RelationalOperator: '<S17>/Compare'
   *  UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_MATLABFunction(((int32_T)encode2_B.DigitalPortRead_f.DigitalPortRead >
    (int32_T)encode2_DW.DelayInput1_DSTATE_b), (real_T)encode2_B.Encoder, &P,
    &P_b, &encode2_DW.sf_MATLABFunction);

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S6>/Constant'
   */
  encode2_B.Product1_n = P_b * 0.26179938779914941;

  /* SampleTimeMath: '<S15>/TSamp'
   *
   * About '<S15>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  P *= 100.0;

  /* Sum: '<S15>/Diff' incorporates:
   *  UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  encode2_B.Diff_m = P - encode2_DW.UD_DSTATE_e;
  encode2_DigitalPortRead(&encode2_B.DigitalPortRead_j);

  /* MATLABSystem: '<Root>/Encoder1' */
  encode2_B.Encoder1 = getTimerCounterValueForG4(encode2_DW.obj_g.TimerHandle,
    false, NULL);

  /* MATLAB Function: '<S7>/MATLAB Function' incorporates:
   *  DataTypeConversion: '<S7>/Data Type Conversion1'
   *  RelationalOperator: '<S20>/FixPt Relational Operator'
   *  RelationalOperator: '<S24>/Compare'
   *  UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_MATLABFunction(((int32_T)encode2_B.DigitalPortRead_j.DigitalPortRead >
    (int32_T)encode2_DW.DelayInput1_DSTATE_d), (real_T)encode2_B.Encoder1, &P_b,
    &P_p, &encode2_DW.sf_MATLABFunction_i);

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S7>/Constant'
   */
  encode2_B.Product1_g = P_p * 0.26179938779914941;

  /* SampleTimeMath: '<S22>/TSamp'
   *
   * About '<S22>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  P_b *= 100.0;

  /* Sum: '<S22>/Diff' incorporates:
   *  UnitDelay: '<S22>/UD'
   *
   * Block description for '<S22>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S22>/UD':
   *
   *  Store in Global RAM
   */
  encode2_B.Diff_p = P_b - encode2_DW.UD_DSTATE_l;

  /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
   *  RelationalOperator: '<S31>/Compare'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_DW.DelayInput1_DSTATE = encode2_B.DigitalPortRead_d.DigitalPortRead;

  /* Update for UnitDelay: '<S29>/UD'
   *
   * Block description for '<S29>/UD':
   *
   *  Store in Global RAM
   */
  encode2_DW.UD_DSTATE = C;

  /* Update for UnitDelay: '<S13>/Delay Input1' incorporates:
   *  RelationalOperator: '<S17>/Compare'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_DW.DelayInput1_DSTATE_b = encode2_B.DigitalPortRead_f.DigitalPortRead;

  /* Update for UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  encode2_DW.UD_DSTATE_e = P;

  /* Update for UnitDelay: '<S20>/Delay Input1' incorporates:
   *  RelationalOperator: '<S24>/Compare'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode2_DW.DelayInput1_DSTATE_d = encode2_B.DigitalPortRead_j.DigitalPortRead;

  /* Update for UnitDelay: '<S22>/UD'
   *
   * Block description for '<S22>/UD':
   *
   *  Store in Global RAM
   */
  encode2_DW.UD_DSTATE_l = P_b;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  encode2_M->Timing.taskTime0 =
    ((time_T)(++encode2_M->Timing.clockTick0)) * encode2_M->Timing.stepSize0;
}

/* Model initialize function */
void encode2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(encode2_M, -1);
  encode2_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  encode2_M->Sizes.checksums[0] = (1149117460U);
  encode2_M->Sizes.checksums[1] = (1479411079U);
  encode2_M->Sizes.checksums[2] = (4177737873U);
  encode2_M->Sizes.checksums[3] = (767771584U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[15];
    encode2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(encode2_M->extModeInfo,
      &encode2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(encode2_M->extModeInfo, encode2_M->Sizes.checksums);
    rteiSetTPtr(encode2_M->extModeInfo, rtmGetTPtr(encode2_M));
  }

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x2' */
  encode2_DW.tr = 1.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x1' */
  encode2_DW.tr_m = 1.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x4' */
  encode2_DW.trigA = 1.0;
  encode2_DW.trigB = 1.0;

  /* SystemInitialize for MATLAB Function: '<S8>/MATLAB Function' */
  encode2_MATLABFunction_Init(&encode2_DW.sf_MATLABFunction_p);

  /* SystemInitialize for MATLAB Function: '<S6>/MATLAB Function' */
  encode2_MATLABFunction_Init(&encode2_DW.sf_MATLABFunction);

  /* SystemInitialize for MATLAB Function: '<S7>/MATLAB Function' */
  encode2_MATLABFunction_Init(&encode2_DW.sf_MATLABFunction_i);
  encode2_DigitalPortRead_Init(&encode2_DW.DigitalPortRead_d);

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  encode2_DW.obj.isInitialized = 0;
  encode2_DW.obj.matlabCodegenIsDeleted = false;
  encode2_SystemCore_setup_ed(&encode2_DW.obj);
  encode2_DigitalPortRead_Init(&encode2_DW.DigitalPortRead_f);

  /* Start for MATLABSystem: '<Root>/Encoder' */
  encode2_DW.obj_p.isInitialized = 0;
  encode2_DW.obj_p.matlabCodegenIsDeleted = false;
  encode2_SystemCore_setup(&encode2_DW.obj_p);
  encode2_DigitalPortRead_Init(&encode2_DW.DigitalPortRead_j);

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  encode2_DW.obj_g.isInitialized = 0;
  encode2_DW.obj_g.matlabCodegenIsDeleted = false;
  encode2_SystemCore_setup_e(&encode2_DW.obj_g);
}

/* Model terminate function */
void encode2_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder2' */
  if (!encode2_DW.obj.matlabCodegenIsDeleted) {
    encode2_DW.obj.matlabCodegenIsDeleted = true;
    if ((encode2_DW.obj.isInitialized == 1) && encode2_DW.obj.isSetupComplete) {
      disableCounter(encode2_DW.obj.TimerHandle);
      disableTimerInterrupts(encode2_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode2_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode2_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder2' */
  /* Terminate for MATLABSystem: '<Root>/Encoder' */
  if (!encode2_DW.obj_p.matlabCodegenIsDeleted) {
    encode2_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((encode2_DW.obj_p.isInitialized == 1) &&
        encode2_DW.obj_p.isSetupComplete) {
      disableCounter(encode2_DW.obj_p.TimerHandle);
      disableTimerInterrupts(encode2_DW.obj_p.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode2_DW.obj_p.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode2_DW.obj_p.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder' */
  /* Terminate for MATLABSystem: '<Root>/Encoder1' */
  if (!encode2_DW.obj_g.matlabCodegenIsDeleted) {
    encode2_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((encode2_DW.obj_g.isInitialized == 1) &&
        encode2_DW.obj_g.isSetupComplete) {
      disableCounter(encode2_DW.obj_g.TimerHandle);
      disableTimerInterrupts(encode2_DW.obj_g.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode2_DW.obj_g.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode2_DW.obj_g.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
