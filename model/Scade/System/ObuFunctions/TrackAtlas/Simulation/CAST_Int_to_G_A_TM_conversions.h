/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _CAST_Int_to_G_A_TM_conversions_H_
#define _CAST_Int_to_G_A_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  G_A /* TM_conversions::CAST_Int_to_G_A::g_a */ g_a;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_G_A::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_G_A::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_G_A::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_G_A::_L10 */ _L10;
  kcg_int /* TM_conversions::CAST_Int_to_G_A::_L11 */ _L11;
} outC_CAST_Int_to_G_A_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_G_A */
extern void CAST_Int_to_G_A_TM_conversions(
  /* TM_conversions::CAST_Int_to_G_A::g_a_int */kcg_int g_a_int,
  outC_CAST_Int_to_G_A_TM_conversions *outC);

extern void CAST_Int_to_G_A_reset_TM_conversions(
  outC_CAST_Int_to_G_A_TM_conversions *outC);

#endif /* _CAST_Int_to_G_A_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_G_A_TM_conversions.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
