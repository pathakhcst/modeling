/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _GP_Build_GradientProfile_TA_Gradient_H_
#define _GP_Build_GradientProfile_TA_Gradient_H_

#include "kcg_types.h"
#include "GP_Processing_TA_Gradient.h"
#include "Read_P021_TM.h"
#include "Eval_LRBG_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Build_GradientProfile::GP */ GP;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::updated */ updated;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::available */ available;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L236 */ _L236;
  GradientProfile_t_TrackAtlasTypes /* TA_Gradient::GP_Build_GradientProfile::_L237 */ _L237;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Processing_TA_Gradient /* 1 */ _2_Context_1;
  outC_Eval_LRBG_TA_Lib_internal /* 1 */ _1_Context_1;
  outC_Read_P021_TM /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::GP_Build_GradientProfile::_L1 */ _L1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_Gradient::GP_Build_GradientProfile::_L42 */ _L42;
  P021_OBU_T_TM /* TA_Gradient::GP_Build_GradientProfile::_L60 */ _L60;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L59 */ _L59;
  CompressedPackets_T_Common_Types_Pkg /* TA_Gradient::GP_Build_GradientProfile::_L73 */ _L73;
  ReceivedMessage_T_Common_Types_Pkg /* TA_Gradient::GP_Build_GradientProfile::_L107 */ _L107;
  kcg_int /* TA_Gradient::GP_Build_GradientProfile::_L108 */ _L108;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L109 */ _L109;
  NID_BG /* TA_Gradient::GP_Build_GradientProfile::_L111 */ _L111;
  NID_BG /* TA_Gradient::GP_Build_GradientProfile::_L112 */ _L112;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L113 */ _L113;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Build_GradientProfile::_L193 */ _L193;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Gradient::GP_Build_GradientProfile::_L194 */ _L194;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L202 */ _L202;
  kcg_bool /* TA_Gradient::GP_Build_GradientProfile::_L209 */ _L209;
} outC_GP_Build_GradientProfile_TA_Gradient;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient::GP_Build_GradientProfile */
extern void GP_Build_GradientProfile_TA_Gradient(
  /* TA_Gradient::GP_Build_GradientProfile::reset */kcg_bool reset,
  /* TA_Gradient::GP_Build_GradientProfile::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_Gradient::GP_Build_GradientProfile::train_position */trainPosition_T_TrainPosition_Types_Pck *train_position,
  outC_GP_Build_GradientProfile_TA_Gradient *outC);

extern void GP_Build_GradientProfile_reset_TA_Gradient(
  outC_GP_Build_GradientProfile_TA_Gradient *outC);

#endif /* _GP_Build_GradientProfile_TA_Gradient_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Build_GradientProfile_TA_Gradient.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

