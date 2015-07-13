#include "TrackAtlas_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "a51b092a8706dde7fe919bc2d263b31e";
const char* _SCSIM_SmuTypesCheckSum = "f79c40cc4a28a84eb05b013596813063";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
	return 1;
}
int notvalid(void * pHandle) {
	return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_Convert_P27_to_DistancePr_TA_SSP inputs_ctx;
static inC_Convert_P27_to_DistancePr_TA_SSP inputs_ctx_restore;
static inC_Convert_P27_to_DistancePr_TA_SSP inputs_ctx_execute;
outC_Convert_P27_to_DistancePr_TA_SSP outputs_ctx;
static outC_Convert_P27_to_DistancePr_TA_SSP outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_struct__476(&(inputs_ctx.Packet_in), &(inputs_ctx_restore.Packet_in));
	inputs_ctx.TrainLength = inputs_ctx_restore.TrainLength;
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_struct__476(&(inputs_ctx_execute.Packet_in), &(inputs_ctx.Packet_in));
	inputs_ctx_execute.TrainLength = inputs_ctx.TrainLength;
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Init/Reset function encapsulation
 *******************************/
int SimInit(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	nRet=0;
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

int SimReset(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
	Convert_P27_to_DistancePr_reset_TA_SSP(&outputs_ctx);
	nRet=1;
#else /* KCG_NO_EXTERN_CALL_TO_RESET */
	nRet=0;
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
/*******************************
 * Cyclic function encapsulation
 *******************************/
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	Convert_P27_to_DistancePr_TA_SSP(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
	return 1;
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(inC_Convert_P27_to_DistancePr_TA_SSP);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_Convert_P27_to_DistancePr_TA_SSP);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_Convert_P27_to_DistancePr_TA_SSP));
	pCurrent += sizeof(inC_Convert_P27_to_DistancePr_TA_SSP);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_Convert_P27_to_DistancePr_TA_SSP));
	pCurrent += sizeof(outC_Convert_P27_to_DistancePr_TA_SSP);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_Convert_P27_to_DistancePr_TA_SSP));
	pCurrent += sizeof(inC_Convert_P27_to_DistancePr_TA_SSP);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_Convert_P27_to_DistancePr_TA_SSP));
	pCurrent += sizeof(outC_Convert_P27_to_DistancePr_TA_SSP);
#ifdef EXTENDED_SIM
	ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

const char * SsmGetCheckSum() {
	return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
	return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
	UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
	GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

