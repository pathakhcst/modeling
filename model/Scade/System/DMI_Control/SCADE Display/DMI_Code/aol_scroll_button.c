/*********************************************************
 **
 ** File  aol_scroll_button.c
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\scroll_button.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:23
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#include "aol_scroll_button.h"
#include "aol_imported_functions.h"
#include "sgl.h"


void aol_scroll_button_init(aol_typ_scroll_button *pContext)
{
  aol_scroll_button_S_buttonType(pContext, 0L);
  aol_scroll_button_S_UpenableType(pContext, 0L);
  aol_scroll_button_S_buttonClicked(pContext, SGL_FALSE);
  aol_scroll_button_S_DownenableType(pContext, 0L);

  pContext->_parentPriority = 0L;

}

void aol_scroll_button_predraw(aol_typ_scroll_button *pContext)
{

}

void aol_scroll_button_draw(aol_typ_scroll_button *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: conditional_group, Type: conditional, OID: 055e1473-4514-48d4-93f2-d70b2a7ffdaf */
    {
      switch (aol_scroll_button_G_buttonType(pContext)) {

      case 1L:

        /* Object: up, Type: conditional, OID: 69b0c120-8781-4851-8d84-5e8cb17b521f */
        {
          switch (aol_scroll_button_G_UpenableType(pContext)) {

          case 1L:

            /* Object: up_aktiviert, Type: container, OID: 0fc777ae-2d1d-4b5b-9ed1-e37cdf51ea46 */
            {

              /* Object: shape_1, Type: shape, OID: 2f9b6825-0ba6-40cf-b533-34daadb31704 */
              {
                if (SGLbool_not(aol_scroll_button_G_buttonClicked(pContext))) {
                  /* filled object part */
                  sglIndexColori(1L);
                  sglDisable(SGL_MODULATE);
                  sglEnable(SGL_POLYGON_SMOOTH);
                  sglTransparency8(255L);
                  sglDisable(SGL_TEXTURE_2D);
                  sglDisable(SGL_TESSELLATION);
                  sglBegin(SGL_POLYGON);
                  sglVertex2f(16.0F, 27.0F);
                  sglVertex2f(5.0F, 5.0F);
                  sglVertex2f(27.0F, 5.0F);
                  sglEnd();
                }
              }
            }
            break;

          default:
          /* case 0L */

            /* Object: up_deaktiviert, Type: container, OID: d28744cc-9599-4204-9b4f-366f487e1f15 */
            {

              /* Object: shape, Type: shape, OID: 790c84d0-9b80-40de-810c-01bf572d9174 */
              {
                /* filled object part */
                sglIndexColori(4L);
                sglDisable(SGL_MODULATE);
                sglEnable(SGL_POLYGON_SMOOTH);
                sglTransparency8(255L);
                sglDisable(SGL_TEXTURE_2D);
                sglDisable(SGL_TESSELLATION);
                sglBegin(SGL_POLYGON);
                sglVertex2f(16.0F, 27.0F);
                sglVertex2f(5.0F, 5.0F);
                sglVertex2f(27.0F, 5.0F);
                sglEnd();
              }
            }
            break;
          }
        }
        break;

      case 2L:

        /* Object: down, Type: conditional, OID: e9114fa9-e1e8-4de0-b9c8-938650ad2c9b */
        {
          switch (aol_scroll_button_G_DownenableType(pContext)) {

          case 1L:

            /* Object: down_aktiviert, Type: container, OID: b682e3c8-cc33-4d27-b11d-2421debe8e37 */
            {

              /* Object: shape_3, Type: shape, OID: 71e7a8fb-d3ba-46be-a1a7-1e2d10ca8f2d */
              {
                if (SGLbool_not(aol_scroll_button_G_buttonClicked(pContext))) {
                  /* filled object part */
                  sglIndexColori(1L);
                  sglDisable(SGL_MODULATE);
                  sglEnable(SGL_POLYGON_SMOOTH);
                  sglTransparency8(255L);
                  sglDisable(SGL_TEXTURE_2D);
                  sglDisable(SGL_TESSELLATION);
                  sglBegin(SGL_POLYGON);
                  sglVertex2f(16.0F, 5.0F);
                  sglVertex2f(5.0F, 27.0F);
                  sglVertex2f(27.0F, 27.0F);
                  sglEnd();
                }
              }
            }
            break;

          default:
          /* case 0L */

            /* Object: down_deaktiviert, Type: container, OID: c9180c42-92ad-41a5-89db-8a8a8c7c6776 */
            {

              /* Object: shape_2, Type: shape, OID: 85e92a8c-fe02-465f-989c-d0a59e8466e9 */
              {
                /* filled object part */
                sglIndexColori(4L);
                sglDisable(SGL_MODULATE);
                sglEnable(SGL_POLYGON_SMOOTH);
                sglTransparency8(255L);
                sglDisable(SGL_TEXTURE_2D);
                sglDisable(SGL_TESSELLATION);
                sglBegin(SGL_POLYGON);
                sglVertex2f(16.0F, 5.0F);
                sglVertex2f(5.0F, 27.0F);
                sglVertex2f(27.0F, 27.0F);
                sglEnd();
              }
            }
            break;
          }
        }
        break;

      default:
        /* Do nothing */
        break;
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:23
 *********************************************************/
