/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */
#ifndef _CAST_Int_to_Q_GDIR_TM_conversions_H_
#define _CAST_Int_to_Q_GDIR_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_GDIR /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir */ q_gdir;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::then::_L5 */ _L5_IfBlock1;
  Q_GDIR /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else::else::_L2 */ _L2_IfBlock1;
  Q_GDIR /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else::else::_L1 */ _L1_IfBlock1;
  Q_GDIR /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::IfBlock1::else::then::_L5 */ _L51_IfBlock1;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::error */ error;
  kcg_int /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir_in */ q_gdir_in;
  kcg_bool /* TM_conversions::CAST_Int_to_Q_GDIR::_L13 */ _L13;
  kcg_int /* TM_conversions::CAST_Int_to_Q_GDIR::_L12 */ _L12;
} outC_CAST_Int_to_Q_GDIR_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_Q_GDIR */
extern void CAST_Int_to_Q_GDIR_TM_conversions(
  /* TM_conversions::CAST_Int_to_Q_GDIR::q_gdir_int */kcg_int q_gdir_int,
  outC_CAST_Int_to_Q_GDIR_TM_conversions *outC);

extern void CAST_Int_to_Q_GDIR_reset_TM_conversions(
  outC_CAST_Int_to_Q_GDIR_TM_conversions *outC);

#endif /* _CAST_Int_to_Q_GDIR_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_Q_GDIR_TM_conversions.h
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

