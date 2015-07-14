/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:50
*************************************************************$ */
#ifndef _Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_
#define _Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_

#include "kcg_types.h"
#include "Balise_362_0_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"
#include "Balise_362_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h"
#include "Balise_Group_Init_InfraLib.h"
#include "Balise_Group_Close_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::BG_message_out */ BG_message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_Close_InfraLib /* 1 */ _3_Context_1;
  outC_Balise_362_0_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises /* 1 */ _2_Context_1;
  outC_Balise_362_1_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises /* 1 */ _1_Context_1;
  outC_Balise_Group_Init_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::BaliseDataIn */ BaliseDataIn;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::BaliseDataOut */ BaliseDataOut;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L7 */ _L7;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L9 */ _L9;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L11 */ _L11;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L13 */ _L13;
  kcg_bool /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L14 */ _L14;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L16 */ _L16;
  BaliseGroupData_TM /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L19 */ _L19;
  kcg_int /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L20 */ _L20;
  kcg_int /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L21 */ _L21;
  B_data_internal_T_InfraLib /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L8 */ _L8;
  kcg_real /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L28 */ _L28;
  CompressedBaliseMessage_TM /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::_L29 */ _L29;
} outC_Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362 */
extern void Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::BG_message_in */CompressedBaliseMessage_TM *BG_message_in,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::TrainPos */kcg_real _1_TrainPos,
  /* AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balise_Group_362::Engineering_Data */BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC);

extern void Balise_Group_362_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
  outC_Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises *outC);

#endif /* _Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Balise_Group_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises.h
** Generation date: 2015-07-12T22:54:50
*************************************************************$ */
