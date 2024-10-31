/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encode.c
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

#include "encode.h"
#include "rtwtypes.h"
#include "encode_types.h"
#include "encode_private.h"
#include "stm_timer_ll.h"

/* Named constants for MATLAB Function: '<S6>/MATLAB Function' */
#define encode_CALL_EVENT              (-1)

/* Block signals (default storage) */
B_encode_T encode_B;

/* Block states (default storage) */
DW_encode_T encode_DW;

/* Real-time model */
static RT_MODEL_encode_T encode_M_;
RT_MODEL_encode_T *const encode_M = &encode_M_;

/* Forward declaration for local functions */
static void encode_SystemCore_setup_hf(stm32cube_blocks_EncoderBlock_T *obj);
static void encode_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj);
static void encode_SystemCore_setup_h(stm32cube_blocks_EncoderBlock_T *obj);

/* System initialize for atomic system: */
void encode_DigitalPortRead_Init(DW_DigitalPortRead_encode_T *localDW)
{
  /* Start for MATLABSystem: '<S19>/Digital Port Read' */
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
}

/* Output and update for atomic system: */
void encode_DigitalPortRead(B_DigitalPortRead_encode_T *localB)
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
void encode_MATLABFunction_Init(DW_MATLABFunction_encode_T *localDW)
{
  localDW->sfEvent = encode_CALL_EVENT;
}

/*
 * Output and update for atomic system:
 *    '<S6>/MATLAB Function'
 *    '<S7>/MATLAB Function'
 *    '<S8>/MATLAB Function'
 */
void encode_MATLABFunction(real_T rtu_max_cnt, boolean_T rtu_set, real_T
  rtu_curr, real_T *rty_Count, real_T *rty_Pulse, DW_MATLABFunction_encode_T
  *localDW)
{
  real_T delta;
  localDW->sfEvent = encode_CALL_EVENT;
  if (!localDW->prev_not_empty) {
    localDW->prev = rtu_curr;
    localDW->prev_not_empty = true;
    localDW->homing_not_empty = true;
    localDW->pos_not_empty = true;
  }

  delta = rtu_curr - localDW->prev;
  if (delta <= -(rtu_max_cnt / 2.0)) {
    delta = (delta + rtu_max_cnt) + 1.0;
  } else if (delta >= rtu_max_cnt / 2.0) {
    delta = (delta - rtu_max_cnt) - 1.0;
  }

  if (rtu_set) {
    localDW->homing = localDW->pos;
  }

  localDW->pos += delta;
  delta = localDW->pos - localDW->homing;
  localDW->prev = rtu_curr;
  *rty_Pulse = delta;
  *rty_Count = delta;
}

static void encode_SystemCore_setup_hf(stm32cube_blocks_EncoderBlock_T *obj)
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

static void encode_SystemCore_setup(stm32cube_blocks_EncoderBlock_T *obj)
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

static void encode_SystemCore_setup_h(stm32cube_blocks_EncoderBlock_T *obj)
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
void encode_step(void)
{
  real_T Count;
  real_T Pulse;
  real_T Pulse_a;
  real_T Pulse_d;
  int32_T tmp;
  uint32_T pinReadLoc;
  boolean_T tmp_0;
  boolean_T tmp_1;

  /* MATLABSystem: '<S10>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S10>/Digital Port Read' */
  encode_B.DigitalPortRead_g = ((pinReadLoc & 2U) != 0U);

  /* MATLABSystem: '<S12>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S12>/Digital Port Read' */
  encode_B.DigitalPortRead = ((pinReadLoc & 16U) != 0U);

  /* MATLAB Function: '<Root>/Polling x2' incorporates:
   *  MATLAB Function: '<Root>/Polling x1'
   *  MATLAB Function: '<Root>/Polling x4'
   */
  tmp = encode_B.DigitalPortRead_g - encode_B.DigitalPortRead;
  if ((tmp == -1) && (encode_DW.trig != 0.0)) {
    encode_DW.pos_o++;
    encode_DW.trig = 2.0;
  } else if ((tmp == 1) && (encode_DW.trig != 0.0)) {
    encode_DW.pos_o--;
    encode_DW.trig = 2.0;
  }

  tmp_0 = !encode_B.DigitalPortRead_g;
  tmp_1 = !encode_B.DigitalPortRead;
  if (tmp_0 && tmp_1) {
    encode_DW.trig = 0.0;
  }

  if ((tmp == 1) && (encode_DW.trig == 0.0)) {
    encode_DW.pos_o++;
    encode_DW.trig = -1.0;
  } else if ((tmp == -1) && (encode_DW.trig == 0.0)) {
    encode_DW.pos_o--;
    encode_DW.trig = 1.0;
  }

  if (encode_B.DigitalPortRead_g && encode_B.DigitalPortRead) {
    encode_DW.trig = 1.0;
  }

  encode_B.p_l = encode_DW.pos_o;

  /* End of MATLAB Function: '<Root>/Polling x2' */
  /* MATLAB Function: '<Root>/Polling x1' */
  if ((tmp == -1) && (encode_DW.trig_j != 0.0)) {
    encode_DW.pos_k++;
    encode_DW.trig_j = 0.0;
  } else if ((tmp == 1) && (encode_DW.trig_j != 0.0)) {
    encode_DW.pos_k--;
    encode_DW.trig_j = 0.0;
  }

  if (encode_B.DigitalPortRead_g && encode_B.DigitalPortRead) {
    encode_DW.trig_j = 1.0;
  }

  encode_B.p_e = encode_DW.pos_k;

  /* MATLAB Function: '<Root>/Polling x4' */
  if ((tmp == -1) && (encode_DW.trigA != 0.0)) {
    encode_DW.pos++;
    encode_DW.trigA = 2.0;
  } else if ((tmp == 1) && (encode_DW.trigA != 0.0)) {
    encode_DW.pos--;
    encode_DW.trigA = 2.0;
  }

  if ((tmp == -1) && (encode_DW.trigA == 0.0)) {
    encode_DW.pos++;
    encode_DW.trigA = -1.0;
  } else if ((tmp == 1) && (encode_DW.trigA == 0.0)) {
    encode_DW.pos--;
    encode_DW.trigA = -1.0;
  }

  tmp = encode_B.DigitalPortRead - encode_B.DigitalPortRead_g;
  if ((tmp == 1) && (encode_DW.trigB != 0.0)) {
    encode_DW.pos++;
    encode_DW.trigB = 2.0;
  } else if ((tmp == -1) && (encode_DW.trigB != 0.0)) {
    encode_DW.pos--;
    encode_DW.trigB = 2.0;
  }

  if ((tmp == 1) && (encode_DW.trigB == 0.0)) {
    encode_DW.pos++;
    encode_DW.trigB = -1.0;
  } else if ((tmp == -1) && (encode_DW.trigB == 0.0)) {
    encode_DW.pos--;
    encode_DW.trigB = -1.0;
  }

  if (tmp_0 && tmp_1) {
    encode_DW.trigA = 0.0;
    encode_DW.trigB = 0.0;
  }

  if (encode_B.DigitalPortRead_g && encode_B.DigitalPortRead) {
    encode_DW.trigA = 1.0;
    encode_DW.trigB = 1.0;
  }

  encode_B.p = encode_DW.pos;
  encode_DigitalPortRead(&encode_B.DigitalPortRead_k);

  /* MATLABSystem: '<Root>/Encoder2' */
  encode_B.Encoder2 = getTimerCounterValueForG4(encode_DW.obj.TimerHandle, false,
    NULL);

  /* MATLAB Function: '<S8>/MATLAB Function' incorporates:
   *  Constant: '<S8>/Constant1'
   *  DataTypeConversion: '<S8>/Data Type Conversion1'
   *  RelationalOperator: '<S27>/FixPt Relational Operator'
   *  RelationalOperator: '<S31>/Compare'
   *  UnitDelay: '<S27>/Delay Input1'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_MATLABFunction(2048.0, ((int32_T)
    encode_B.DigitalPortRead_k.DigitalPortRead > (int32_T)
    encode_DW.DelayInput1_DSTATE), (real_T)encode_B.Encoder2, &Count, &Pulse,
                        &encode_DW.sf_MATLABFunction_o);

  /* Product: '<S8>/Product1' incorporates:
   *  Constant: '<S8>/Constant'
   */
  encode_B.Product1 = Pulse * 0.26179938779914941;

  /* SampleTimeMath: '<S29>/TSamp'
   *
   * About '<S29>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  Count *= 100.0;

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
  encode_B.Diff = Count - encode_DW.UD_DSTATE;
  encode_DigitalPortRead(&encode_B.DigitalPortRead_f);

  /* MATLABSystem: '<Root>/Encoder' */
  encode_B.Encoder = getTimerCounterValueForG4(encode_DW.obj_p.TimerHandle,
    false, NULL);

  /* MATLAB Function: '<S6>/MATLAB Function' incorporates:
   *  Constant: '<S6>/Constant1'
   *  DataTypeConversion: '<S6>/Data Type Conversion1'
   *  RelationalOperator: '<S13>/FixPt Relational Operator'
   *  RelationalOperator: '<S17>/Compare'
   *  UnitDelay: '<S13>/Delay Input1'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_MATLABFunction(2048.0, ((int32_T)
    encode_B.DigitalPortRead_f.DigitalPortRead > (int32_T)
    encode_DW.DelayInput1_DSTATE_b), (real_T)encode_B.Encoder, &Pulse, &Pulse_a,
                        &encode_DW.sf_MATLABFunction);

  /* Product: '<S6>/Product1' incorporates:
   *  Constant: '<S6>/Constant'
   */
  encode_B.Product1_n = Pulse_a * 0.26179938779914941;

  /* SampleTimeMath: '<S15>/TSamp'
   *
   * About '<S15>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  Pulse *= 100.0;

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
  encode_B.Diff_m = Pulse - encode_DW.UD_DSTATE_e;
  encode_DigitalPortRead(&encode_B.DigitalPortRead_l);

  /* MATLABSystem: '<Root>/Encoder1' */
  encode_B.Encoder1 = getTimerCounterValueForG4(encode_DW.obj_g.TimerHandle,
    false, NULL);

  /* MATLAB Function: '<S7>/MATLAB Function' incorporates:
   *  Constant: '<S7>/Constant1'
   *  DataTypeConversion: '<S7>/Data Type Conversion1'
   *  RelationalOperator: '<S20>/FixPt Relational Operator'
   *  RelationalOperator: '<S24>/Compare'
   *  UnitDelay: '<S20>/Delay Input1'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_MATLABFunction(2048.0, ((int32_T)
    encode_B.DigitalPortRead_l.DigitalPortRead > (int32_T)
    encode_DW.DelayInput1_DSTATE_l), (real_T)encode_B.Encoder1, &Pulse_a,
                        &Pulse_d, &encode_DW.sf_MATLABFunction_d);

  /* Product: '<S7>/Product1' incorporates:
   *  Constant: '<S7>/Constant'
   */
  encode_B.Product1_e = Pulse_d * 0.26179938779914941;

  /* SampleTimeMath: '<S22>/TSamp'
   *
   * About '<S22>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *   */
  Pulse_a *= 100.0;

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
  encode_B.Diff_i = Pulse_a - encode_DW.UD_DSTATE_i;

  /* Update for UnitDelay: '<S27>/Delay Input1' incorporates:
   *  RelationalOperator: '<S31>/Compare'
   *
   * Block description for '<S27>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_DW.DelayInput1_DSTATE = encode_B.DigitalPortRead_k.DigitalPortRead;

  /* Update for UnitDelay: '<S29>/UD'
   *
   * Block description for '<S29>/UD':
   *
   *  Store in Global RAM
   */
  encode_DW.UD_DSTATE = Count;

  /* Update for UnitDelay: '<S13>/Delay Input1' incorporates:
   *  RelationalOperator: '<S17>/Compare'
   *
   * Block description for '<S13>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_DW.DelayInput1_DSTATE_b = encode_B.DigitalPortRead_f.DigitalPortRead;

  /* Update for UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  encode_DW.UD_DSTATE_e = Pulse;

  /* Update for UnitDelay: '<S20>/Delay Input1' incorporates:
   *  RelationalOperator: '<S24>/Compare'
   *
   * Block description for '<S20>/Delay Input1':
   *
   *  Store in Global RAM
   */
  encode_DW.DelayInput1_DSTATE_l = encode_B.DigitalPortRead_l.DigitalPortRead;

  /* Update for UnitDelay: '<S22>/UD'
   *
   * Block description for '<S22>/UD':
   *
   *  Store in Global RAM
   */
  encode_DW.UD_DSTATE_i = Pulse_a;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  encode_M->Timing.taskTime0 =
    ((time_T)(++encode_M->Timing.clockTick0)) * encode_M->Timing.stepSize0;
}

/* Model initialize function */
void encode_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(encode_M, -1);
  encode_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  encode_M->Sizes.checksums[0] = (3837170544U);
  encode_M->Sizes.checksums[1] = (3952086753U);
  encode_M->Sizes.checksums[2] = (206410905U);
  encode_M->Sizes.checksums[3] = (3270835263U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[15];
    encode_M->extModeInfo = (&rt_ExtModeInfo);
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
    rteiSetModelMappingInfoPtr(encode_M->extModeInfo,
      &encode_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(encode_M->extModeInfo, encode_M->Sizes.checksums);
    rteiSetTPtr(encode_M->extModeInfo, rtmGetTPtr(encode_M));
  }

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x2' */
  encode_DW.trig = 1.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x1' */
  encode_DW.trig_j = 1.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Polling x4' */
  encode_DW.trigA = 1.0;
  encode_DW.trigB = 1.0;

  /* SystemInitialize for MATLAB Function: '<S8>/MATLAB Function' */
  encode_MATLABFunction_Init(&encode_DW.sf_MATLABFunction_o);

  /* SystemInitialize for MATLAB Function: '<S6>/MATLAB Function' */
  encode_MATLABFunction_Init(&encode_DW.sf_MATLABFunction);

  /* SystemInitialize for MATLAB Function: '<S7>/MATLAB Function' */
  encode_MATLABFunction_Init(&encode_DW.sf_MATLABFunction_d);
  encode_DigitalPortRead_Init(&encode_DW.DigitalPortRead_k);

  /* Start for MATLABSystem: '<Root>/Encoder2' */
  encode_DW.obj.isInitialized = 0;
  encode_DW.obj.matlabCodegenIsDeleted = false;
  encode_SystemCore_setup_hf(&encode_DW.obj);
  encode_DigitalPortRead_Init(&encode_DW.DigitalPortRead_f);

  /* Start for MATLABSystem: '<Root>/Encoder' */
  encode_DW.obj_p.isInitialized = 0;
  encode_DW.obj_p.matlabCodegenIsDeleted = false;
  encode_SystemCore_setup(&encode_DW.obj_p);
  encode_DigitalPortRead_Init(&encode_DW.DigitalPortRead_l);

  /* Start for MATLABSystem: '<Root>/Encoder1' */
  encode_DW.obj_g.isInitialized = 0;
  encode_DW.obj_g.matlabCodegenIsDeleted = false;
  encode_SystemCore_setup_h(&encode_DW.obj_g);
}

/* Model terminate function */
void encode_terminate(void)
{
  uint8_T ChannelInfo;

  /* Terminate for MATLABSystem: '<Root>/Encoder2' */
  if (!encode_DW.obj.matlabCodegenIsDeleted) {
    encode_DW.obj.matlabCodegenIsDeleted = true;
    if ((encode_DW.obj.isInitialized == 1) && encode_DW.obj.isSetupComplete) {
      disableCounter(encode_DW.obj.TimerHandle);
      disableTimerInterrupts(encode_DW.obj.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode_DW.obj.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode_DW.obj.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder2' */
  /* Terminate for MATLABSystem: '<Root>/Encoder' */
  if (!encode_DW.obj_p.matlabCodegenIsDeleted) {
    encode_DW.obj_p.matlabCodegenIsDeleted = true;
    if ((encode_DW.obj_p.isInitialized == 1) && encode_DW.obj_p.isSetupComplete)
    {
      disableCounter(encode_DW.obj_p.TimerHandle);
      disableTimerInterrupts(encode_DW.obj_p.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode_DW.obj_p.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode_DW.obj_p.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder' */
  /* Terminate for MATLABSystem: '<Root>/Encoder1' */
  if (!encode_DW.obj_g.matlabCodegenIsDeleted) {
    encode_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((encode_DW.obj_g.isInitialized == 1) && encode_DW.obj_g.isSetupComplete)
    {
      disableCounter(encode_DW.obj_g.TimerHandle);
      disableTimerInterrupts(encode_DW.obj_g.TimerHandle, 0);
      ChannelInfo = ENABLE_CH;
      disableTimerChannel1(encode_DW.obj_g.TimerHandle, ChannelInfo);
      disableTimerChannel2(encode_DW.obj_g.TimerHandle, ChannelInfo);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Encoder1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
