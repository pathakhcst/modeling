/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasNextGen_TrackAtlas.h"

void TrackAtlasNextGen_reset_TrackAtlas(outC_TrackAtlasNextGen_TrackAtlas *outC)
{
  /* 1 */ Build_MRSP_reset_TA_MRSP(&outC->_5_Context_1);
  /* 1 */ GradientProfile_to_DMI_reset_TA_Export(&outC->_4_Context_1);
  /* 1 */ Build_GradientProfile_reset_TA_Gradient(&outC->_3_Context_1);
  /* 1 */ Manage_MA_Request_reset_MA_Request(&outC->_2_Context_1);
  /* 1 */ Build_MA_reset_TA_MA(&outC->_1_Context_1);
  /* 2 */
  C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(&outC->Context_2);
  /* 1 */ StoreRaw_NV_reset_TA_Storage(&outC->Context_1);
}

/* TrackAtlas::TrackAtlasNextGen */
void TrackAtlasNextGen_TrackAtlas(
  inC_TrackAtlasNextGen_TrackAtlas *inC,
  outC_TrackAtlasNextGen_TrackAtlas *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  FromTIU_t_TrackAtlasTypes _2_noname;
  T_Mode_Level_Level_And_Mode_Types_Pkg _3_noname;
  kcg_bool _4_noname;
  
  kcg_copy_P003_permanent_data_T_TM_baseline2(
    &outC->_L52,
    &inC->PermanentDataP003);
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L51, &inC->P203V1_onboard);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, &inC->MessageIn);
  /* 1 */ StoreRaw_NV_TA_Storage(&outC->_L23, &outC->Context_1);
  outC->_L20 = outC->Context_1.vald_NV;
  outC->_L22 = outC->Context_1.new_NV;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L21,
    &outC->Context_1.NV_onboard_out);
  /* 2 */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &outC->_L21,
    &outC->_L51,
    &outC->_L52,
    &outC->Context_2);
  kcg_copy_P003_OBU_T_TM(&outC->_L50, &outC->Context_2.P003_onbaord_out);
  outC->_L48 = kcg_false;
  outC->_L47 = inC->t_train;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L46,
    &inC->packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L45,
    &inC->packet0);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L44,
    &inC->trainProps);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L42, &inC->fromDriverToMA_R);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L41, &inC->odometry);
  outC->_L40 = inC->preindicationLocation;
  outC->_L38 = inC->SystemTime;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L25,
    &inC->TrainPositionIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L24, &inC->MessageIn);
  /* 1 */ Build_MA_TA_MA(&outC->_L24, &outC->_L21, &outC->_1_Context_1);
  outC->_L16 = outC->_1_Context_1.new_MA;
  outC->_L17 = outC->_1_Context_1.vald_MA;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L18,
    &outC->_1_Context_1.MA_onboard_out);
  /* 1 */
  Manage_MA_Request_MA_Request(
    &outC->_L25,
    outC->_L38,
    &outC->_L24,
    outC->_L40,
    &outC->_L41,
    &outC->_L18,
    &outC->_L42,
    outC->_L48,
    &outC->_L44,
    &outC->_L45,
    &outC->_L46,
    outC->_L47,
    &outC->_2_Context_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L37,
    &outC->_2_Context_1.message_out);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->MA_request_out,
    &outC->_L37);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L36,
    (DataForModeAndLevel_t_TrackAtlasTypes *) &DEFAULT_to_ML_TA_Export);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    &outC->_L36);
  /* 1 */
  Build_GradientProfile_TA_Gradient(
    &outC->_L24,
    &outC->_L25,
    &outC->_3_Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->_3_Context_1.GP);
  outC->_L15 = outC->_3_Context_1.updated;
  /* 1 */ GradientProfile_to_DMI_TA_Export(&outC->_L14, &outC->_4_Context_1);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L31,
    &outC->_4_Context_1.Gradient_Profile_for_DMI_out);
  outC->_L28 = 0;
  outC->_L29 = kcg_false;
  outC->_L30 = inC->train_length_TOBEREPLACED;
  /* 1 */
  Build_MRSP_TA_MRSP(
    &outC->_L24,
    outC->_L28,
    outC->_L29,
    outC->_L30,
    &outC->_L25,
    &outC->_5_Context_1);
  outC->_L32 = outC->_5_Context_1.newMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L19,
    &outC->_5_Context_1.MRSP);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L35.GradientProfile,
    &outC->_L31);
  outC->_L35.Gradient_profile_updated = outC->_L15;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L35.MRSP, &outC->_L19);
  outC->_L35.MRSP_updated = outC->_L32;
  outC->_L34.freshMA = outC->_L16;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L34.MA, &outC->_L18);
  outC->_L34.freshGradientProfile = outC->_L15;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L34.GradientProfile,
    &outC->_L14);
  outC->_L34.freshMRSP = outC->_L32;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L34.MRSP, &outC->_L19);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L34);
  _4_noname = outC->_L17;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L19);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->_L18);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->_L50);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->_L35);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L26,
    &inC->ModeAndLevel_in);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_3_noname, &outC->_L26);
  outC->_L27 = inC->TrainData_in;
  _2_noname = outC->_L27;
  _1_noname = outC->_L22;
  noname = outC->_L20;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrackAtlasNextGen_TrackAtlas.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
