/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: encode2.h
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

#ifndef encode2_h_
#define encode2_h_
#ifndef encode2_COMMON_INCLUDES_
#define encode2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "main.h"
#endif                                 /* encode2_COMMON_INCLUDES_ */

#include "encode2_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals for system '<S19>/Digital Port Read' */
typedef struct {
  boolean_T DigitalPortRead;           /* '<S19>/Digital Port Read' */
} B_DigitalPortRead_encode2_T;

/* Block states (default storage) for system '<S19>/Digital Port Read' */
typedef struct {
  stm32cube_blocks_DigitalPortR_T obj; /* '<S19>/Digital Port Read' */
  boolean_T objisempty;                /* '<S19>/Digital Port Read' */
} DW_DigitalPortRead_encode2_T;

/* Block states (default storage) for system '<S6>/MATLAB Function' */
typedef struct {
  real_T pr;                           /* '<S6>/MATLAB Function' */
  real_T hom;                          /* '<S6>/MATLAB Function' */
  real_T ps;                           /* '<S6>/MATLAB Function' */
  int32_T sfEvent;                     /* '<S6>/MATLAB Function' */
  boolean_T doneDoubleBufferReInit;    /* '<S6>/MATLAB Function' */
  boolean_T pr_not_empty;              /* '<S6>/MATLAB Function' */
  boolean_T hom_not_empty;             /* '<S6>/MATLAB Function' */
  boolean_T ps_not_empty;              /* '<S6>/MATLAB Function' */
} DW_MATLABFunction_encode2_T;

/* Block signals (default storage) */
typedef struct {
  real_T Product1;                     /* '<S8>/Product1' */
  real_T Diff;                         /* '<S29>/Diff' */
  real_T Product1_n;                   /* '<S6>/Product1' */
  real_T Diff_m;                       /* '<S15>/Diff' */
  real_T Product1_g;                   /* '<S7>/Product1' */
  real_T Diff_p;                       /* '<S22>/Diff' */
  real_T p;                            /* '<Root>/Polling x4' */
  real_T p_l;                          /* '<Root>/Polling x2' */
  real_T p_e;                          /* '<Root>/Polling x1' */
  uint32_T Encoder2;                   /* '<Root>/Encoder2' */
  uint32_T Encoder1;                   /* '<Root>/Encoder1' */
  uint32_T Encoder;                    /* '<Root>/Encoder' */
  boolean_T DigitalPortRead;           /* '<S12>/Digital Port Read' */
  boolean_T DigitalPortRead_g;         /* '<S10>/Digital Port Read' */
  B_DigitalPortRead_encode2_T DigitalPortRead_d;/* '<S19>/Digital Port Read' */
  B_DigitalPortRead_encode2_T DigitalPortRead_j;/* '<S19>/Digital Port Read' */
  B_DigitalPortRead_encode2_T DigitalPortRead_f;/* '<S19>/Digital Port Read' */
} B_encode2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_EncoderBlock_T obj; /* '<Root>/Encoder2' */
  stm32cube_blocks_EncoderBlock_T obj_g;/* '<Root>/Encoder1' */
  stm32cube_blocks_EncoderBlock_T obj_p;/* '<Root>/Encoder' */
  real_T UD_DSTATE;                    /* '<S29>/UD' */
  real_T UD_DSTATE_e;                  /* '<S15>/UD' */
  real_T UD_DSTATE_l;                  /* '<S22>/UD' */
  real_T pos;                          /* '<Root>/Polling x4' */
  real_T trigA;                        /* '<Root>/Polling x4' */
  real_T trigB;                        /* '<Root>/Polling x4' */
  real_T ps;                           /* '<Root>/Polling x2' */
  real_T tr;                           /* '<Root>/Polling x2' */
  real_T ps_d;                         /* '<Root>/Polling x1' */
  real_T tr_m;                         /* '<Root>/Polling x1' */
  boolean_T DelayInput1_DSTATE;        /* '<S27>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S13>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S20>/Delay Input1' */
  DW_MATLABFunction_encode2_T sf_MATLABFunction_p;/* '<S8>/MATLAB Function' */
  DW_DigitalPortRead_encode2_T DigitalPortRead_d;/* '<S19>/Digital Port Read' */
  DW_MATLABFunction_encode2_T sf_MATLABFunction_i;/* '<S7>/MATLAB Function' */
  DW_DigitalPortRead_encode2_T DigitalPortRead_j;/* '<S19>/Digital Port Read' */
  DW_MATLABFunction_encode2_T sf_MATLABFunction;/* '<S6>/MATLAB Function' */
  DW_DigitalPortRead_encode2_T DigitalPortRead_f;/* '<S19>/Digital Port Read' */
} DW_encode2_T;

/* Real-time Model Data Structure */
struct tag_RTM_encode2_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_encode2_T encode2_B;

/* Block states (default storage) */
extern DW_encode2_T encode2_DW;

/* Model entry point functions */
extern void encode2_initialize(void);
extern void encode2_step(void);
extern void encode2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_encode2_T *const encode2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S29>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'encode2'
 * '<S1>'   : 'encode2/PA1_ReadA'
 * '<S2>'   : 'encode2/PA4_ReadB'
 * '<S3>'   : 'encode2/Polling x1'
 * '<S4>'   : 'encode2/Polling x2'
 * '<S5>'   : 'encode2/Polling x4'
 * '<S6>'   : 'encode2/QEI x1'
 * '<S7>'   : 'encode2/QEI x2'
 * '<S8>'   : 'encode2/QEI x4'
 * '<S9>'   : 'encode2/PA1_ReadA/ECSoC'
 * '<S10>'  : 'encode2/PA1_ReadA/ECSoC/ECSimCodegen'
 * '<S11>'  : 'encode2/PA4_ReadB/ECSoC'
 * '<S12>'  : 'encode2/PA4_ReadB/ECSoC/ECSimCodegen'
 * '<S13>'  : 'encode2/QEI x1/Detect Rise Positive'
 * '<S14>'  : 'encode2/QEI x1/Digital Port Read'
 * '<S15>'  : 'encode2/QEI x1/Discrete Derivative'
 * '<S16>'  : 'encode2/QEI x1/MATLAB Function'
 * '<S17>'  : 'encode2/QEI x1/Detect Rise Positive/Positive'
 * '<S18>'  : 'encode2/QEI x1/Digital Port Read/ECSoC'
 * '<S19>'  : 'encode2/QEI x1/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S20>'  : 'encode2/QEI x2/Detect Rise Positive'
 * '<S21>'  : 'encode2/QEI x2/Digital Port Read'
 * '<S22>'  : 'encode2/QEI x2/Discrete Derivative'
 * '<S23>'  : 'encode2/QEI x2/MATLAB Function'
 * '<S24>'  : 'encode2/QEI x2/Detect Rise Positive/Positive'
 * '<S25>'  : 'encode2/QEI x2/Digital Port Read/ECSoC'
 * '<S26>'  : 'encode2/QEI x2/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S27>'  : 'encode2/QEI x4/Detect Rise Positive'
 * '<S28>'  : 'encode2/QEI x4/Digital Port Read'
 * '<S29>'  : 'encode2/QEI x4/Discrete Derivative'
 * '<S30>'  : 'encode2/QEI x4/MATLAB Function'
 * '<S31>'  : 'encode2/QEI x4/Detect Rise Positive/Positive'
 * '<S32>'  : 'encode2/QEI x4/Digital Port Read/ECSoC'
 * '<S33>'  : 'encode2/QEI x4/Digital Port Read/ECSoC/ECSimCodegen'
 */
#endif                                 /* encode2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
