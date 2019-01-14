/*********************************************************
 **
 ** File  aol_LevelSymbols.h
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\Symbols\LevelSymbols.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:23
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#ifndef _AOL_LEVELSYMBOLS_H
#define _AOL_LEVELSYMBOLS_H

#include "sgl_types.h"


/* Accessors */
#define aol_LevelSymbols_G_LevelSymbol(_C_) (_C_)->LevelSymbol
#define aol_LevelSymbols_S_LevelSymbol(_C_,_V_) (_C_)->LevelSymbol = (_V_)
#define aol_LevelSymbols_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct aol_typ_LevelSymbols_ {
  /* ------------------------- inputs --------------------------- */
  SGLint32 LevelSymbol;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} aol_typ_LevelSymbols;

/* Associated functions */
extern void aol_LevelSymbols_init(aol_typ_LevelSymbols *pContext);
extern void aol_LevelSymbols_predraw(aol_typ_LevelSymbols *pContext);
extern void aol_LevelSymbols_draw(aol_typ_LevelSymbols *pContext, SGLint32 pPriority);

#endif /* _AOL_LEVELSYMBOLS_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:23
 *********************************************************/
