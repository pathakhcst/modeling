/*********************************************************
 **
 ** File  aol_StatusSymbols.c
 **
 ** Specification File:  P:\modeling\model\Scade\System\DMI_Control\SCADE Display\Widgets\Symbols\StatusSymbols.ogfx
 **
 ** Automatically generated by SCADE Display KCG
 ** Version 6.6.3 (build i10)
 **
 ** Date of generation: 2017-05-30T13:27:23
 ** Command line: ScadeDisplayKCG.exe -outdir P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI_Code P:\modeling\model\Scade\System\DMI_Control\SCADE Display\DMI.sgfx
 *********************************************************/

#include "aol_StatusSymbols.h"
#include "aol_imported_functions.h"
#include "sgl.h"


void aol_StatusSymbols_init(aol_typ_StatusSymbols *pContext)
{
  aol_StatusSymbols_S_StatusSymbol(pContext, 0L);

  pContext->_parentPriority = 0L;

}

void aol_StatusSymbols_predraw(aol_typ_StatusSymbols *pContext)
{

}

void aol_StatusSymbols_draw(aol_typ_StatusSymbols *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: conditional_group, Type: conditional, OID: 1c6907ae-e2c3-437f-aa61-060c6038b24c */
    {
      sglPushMatrixAndTranslate(3.0F, 0.0F);
      switch (aol_StatusSymbols_G_StatusSymbol(pContext)) {

      case 1L:

        /* Object: ST01, Type: container, OID: 3005bf93-7241-4dc5-afad-18e25ae567b2 */
        {

          /* Object: ServiceBrake, Type: container, OID: 221549b3-1c5c-46fb-8807-525bbc635e25 */
          {
            sglPushMatrixAndTranslate(-3.0F, 0.0F);

            /* Object: panel_group, Type: panel, OID: 5f23cc90-3cb3-4cca-9ff3-5c66738bc2cb */
            {
              sglPushMatrixAndTranslate(-26.0F, -10.5F);
              sglBeginScissor(53.0F, 22.0F);

              /* Object: rectangle, Type: rectangle, OID: d760ae73-fe3d-4c78-834e-bb6c41f0f957 */
              {
                /* filled object part */
                sglIndexColori(10L);
                sglDisable(SGL_MODULATE);
                sglEnable(SGL_POLYGON_SMOOTH);
                sglTransparency8(255L);
                sglDisable(SGL_TEXTURE_2D);
                sglDisable(SGL_TESSELLATION);
                sglBegin(SGL_POLYGON);
                sglVertex2f(4.0F, 19.5F);
                sglVertex2f(48.0F, 19.5F);
                sglVertex2f(48.0F, 1.5F);
                sglVertex2f(4.0F, 1.5F);
                sglEnd();
              }

              /* Object: line, Type: line, OID: d0837d39-f692-4678-a04b-130424c07f37 */
              {
                /* outlined object part */
                sglIndexColori(3L);
                sglIndexHaloColori(-1L);
                sglIndexLineWidthi(5L);
                sglIndexLineStipplei(0L);
                sglDisable(SGL_LINE_HALOING);
                sglSetLineCaps(SGL_ROUNDED_CAPS);
                sglBegin(SGL_LINES);
                sglVertex2f(50.0F, 19.5F);
                sglVertex2f(50.0F, 1.5F);
              }

              /* Object: line_1, Type: line, OID: 83c5bdcd-054c-4781-85c0-8e07ae5af1e8 */
              {
                /* outlined object part */
                sglVertex2f(2.0F, 19.5F);
                sglVertex2f(2.0F, 1.5F);
                sglEnd();
              }

              /* Object: circle, Type: circle, OID: 73131ad1-0bd8-4638-8882-69c62fc5b3ae */
              {
                /* filled object part */
                sglIndexColori(10L);
                sgluArcSector2f(26.0F, 10.5F, 11.424F, 0.0F, 360.0F, SGL_TRUE, SGL_ARC_FILLED);
                /* outlined object part */
                sglIndexColori(3L);
                sglIndexLineWidthi(4L);
                sgluArcSector2f(26.0F, 10.5F, 11.424F, 0.0F, 360.0F, SGL_TRUE, SGL_ARC_CIRCLE_LINE);
              }
              sglEndScissor();
              sglPopMatrixAndTranslate();
            }
            sglPopMatrixAndTranslate();
          }
        }
        break;

      case 2L:

        /* Object: ST02, Type: container, OID: 67abb65b-dfb3-435e-9311-ac47d43b8f1f */
        {

          /* Object: SlipperyRail, Type: container, OID: f52c748e-490a-47c1-8f77-41858457e7dc */
          {

            /* Object: circle_1, Type: circle, OID: 48bb9f30-8ff3-427a-8c20-82dea3b07cee */
            {
              /* outlined object part */
              sglDisable(SGL_TEXTURE_2D);
              sglIndexColori(3L);
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(2L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglTransparency8(255L);
              sgluArcSector2f(0.0F, 7.0F, 7.0F, 0.0F, 360.0F, SGL_TRUE, SGL_ARC_CIRCLE_LINE);
            }

            /* Object: line_2, Type: line, OID: 71cb4306-c77f-4a1e-9da2-4bbba3f4c0f6 */
            {
              /* outlined object part */
              sglIndexLineWidthi(0L);
              sglBegin(SGL_LINES);
              sglVertex2f(-15.0F, 0.0F);
              sglVertex2f(15.0F, 0.0F);
              sglEnd();
            }

            /* Object: shape, Type: shape, OID: e83bc895-f75e-4c01-a2b7-525a481b751f */
            {
              /* filled object part */
              sglDisable(SGL_MODULATE);
              sglEnable(SGL_POLYGON_SMOOTH);
              sglDisable(SGL_TESSELLATION);
              sglBegin(SGL_POLYGON);
              sglVertex2f(20.0F, 0.0F);
              sglVertex2f(15.0F, -5.0F);
              sglVertex2f(15.0F, 5.0F);
              sglEnd();
              /* outlined object part */
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(20.0F, 0.0F);
              sglVertex2f(15.0F, -5.0F);
              sglVertex2f(15.0F, 5.0F);
              sglEnd();
            }

            /* Object: shape_1, Type: shape, OID: 33048a8a-967c-4047-9ef8-1de53e8c7813 */
            {
              /* filled object part */
              sglBegin(SGL_POLYGON);
              sglVertex2f(-20.0F, 0.0F);
              sglVertex2f(-15.0F, 5.0F);
              sglVertex2f(-15.0F, -5.0F);
              sglEnd();
              /* outlined object part */
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(-20.0F, 0.0F);
              sglVertex2f(-15.0F, 5.0F);
              sglVertex2f(-15.0F, -5.0F);
              sglEnd();
            }

            /* Object: line_3, Type: line, OID: 3b6ab0d1-6d8f-4d77-b914-157b4ac3db13 */
            {
              /* outlined object part */
              sglIndexLineWidthi(3L);
              sglBegin(SGL_LINES);
              sglVertex2f(-25.0F, -6.0F);
              sglVertex2f(25.0F, -6.0F);
              sglEnd();
            }
          }
        }
        break;

      case 3L:

        /* Object: ST03, Type: container, OID: 77a6c7a9-415b-4007-8e89-a28a5cc52e97 */
        {

          /* Object: SafeRadioConnectionUp, Type: container, OID: 429b753c-6e5b-4d6f-a7ce-9b864d8b1160 */
          {

            /* Object: line_4, Type: line, OID: c4db1e26-374a-4373-ad38-54e5fab01450 */
            {
              /* outlined object part */
              sglDisable(SGL_TEXTURE_2D);
              sglIndexColori(3L);
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(4L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglTransparency8(255L);
              sglBegin(SGL_LINES);
              sglVertex2f(-12.0F, 0.0F);
              sglVertex2f(13.0F, 0.0F);
            }

            /* Object: line_5, Type: line, OID: 519f0112-5621-4268-9bde-d351546da7e7 */
            {
              /* outlined object part */
              sglVertex2f(13.0F, 9.0F);
              sglVertex2f(13.0F, -9.0F);
              sglEnd();
            }

            /* Object: line_6, Type: line, OID: c8d776cb-e23a-4d90-9bf5-f428ba109924 */
            {
              /* outlined object part */
              sglBegin(SGL_LINE_STRIP);
              sglVertex2f(-17.0F, 9.0F);
              sglVertex2f(-12.0F, 6.0F);
              sglVertex2f(-12.0F, -6.0F);
              sglVertex2f(-17.0F, -9.0F);
              sglEnd();
            }
          }
        }
        break;

      case 7L:

        /* Object: ST_DB, Type: container, OID: 2e7a8f98-9354-482f-aa4a-16b7c000bfd1 */
        {

          /* Object: RadioConnectionEstabilishing, Type: container, OID: 2581e23d-8f5d-415b-8122-243f162e673c */
          {

            /* Object: line_7, Type: line, OID: c78146c5-69b8-46de-a4bd-2dee7ba3a91e */
            {
              /* outlined object part */
              sglDisable(SGL_TEXTURE_2D);
              sglIndexColori(3L);
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(1L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglTransparency8(255L);
              sglBegin(SGL_LINES);
              sglVertex2f(-12.0F, 0.0F);
              sglVertex2f(13.0F, 0.0F);
              sglEnd();
            }

            /* Object: line_8, Type: line, OID: 9b8f374f-4f9c-4104-b29b-bdbb01eae030 */
            {
              /* outlined object part */
              sglIndexLineWidthi(4L);
              sglBegin(SGL_LINES);
              sglVertex2f(13.0F, 9.0F);
              sglVertex2f(13.0F, -9.0F);
              sglEnd();
            }

            /* Object: line_9, Type: line, OID: 0c088941-8e92-4af4-884c-5f17cc6b3798 */
            {
              /* outlined object part */
              sglBegin(SGL_LINE_STRIP);
              sglVertex2f(-17.0F, 9.0F);
              sglVertex2f(-12.0F, 6.0F);
              sglVertex2f(-12.0F, -6.0F);
              sglVertex2f(-17.0F, -9.0F);
              sglEnd();
            }

            /* Object: shape_2, Type: shape, OID: 6e2beed5-8b33-49bf-aed6-529c19ddc47d */
            {
              /* filled object part */
              sglDisable(SGL_MODULATE);
              sglEnable(SGL_POLYGON_SMOOTH);
              sglDisable(SGL_TESSELLATION);
              sglBegin(SGL_POLYGON);
              sglVertex2f(2.0F, 4.0F);
              sglVertex2f(2.0F, -4.0F);
              sglVertex2f(7.0F, 0.0F);
              sglEnd();
              /* outlined object part */
              sglIndexLineWidthi(1L);
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(2.0F, 4.0F);
              sglVertex2f(2.0F, -4.0F);
              sglVertex2f(7.0F, 0.0F);
              sglEnd();
            }

            /* Object: line_10, Type: line, OID: a1bd8bb6-4057-460d-baa2-db2fe3e2a754 */
            {
              /* outlined object part */
              sglBegin(SGL_LINES);
              sglVertex2f(3.0F, 3.0F);
              sglVertex2f(-1.0F, 7.0F);
            }

            /* Object: line_11, Type: line, OID: 6f5b7b3b-3159-469c-b0a2-c55a47088a26 */
            {
              /* outlined object part */
              sglVertex2f(3.0F, -3.0F);
              sglVertex2f(-1.0F, -7.0F);
              sglEnd();
            }
          }
        }
        break;

      case 4L:

        /* Object: ST04, Type: container, OID: 2741e7ac-4510-45a9-a660-5817c523d5a5 */
        {

          /* Object: SafeRadioConnectionLost, Type: container, OID: 521cafdf-6634-46f3-8b89-da63598b9a60 */
          {

            /* Object: rectangle_2, Type: rectangle, OID: 4c40469e-070c-47f2-a28c-34b217b86046 */
            {
              /* filled object part */
              sglIndexColori(3L);
              sglDisable(SGL_MODULATE);
              sglEnable(SGL_POLYGON_SMOOTH);
              sglTransparency8(255L);
              sglDisable(SGL_TEXTURE_2D);
              sglDisable(SGL_TESSELLATION);
              sglBegin(SGL_POLYGON);
              sglVertex2f(-26.0F, -10.5F);
              sglVertex2f(26.0F, -10.5F);
              sglVertex2f(26.0F, 10.5F);
              sglVertex2f(-26.0F, 10.5F);
              sglEnd();
            }

            /* Object: line_12, Type: line, OID: 60934787-23d8-49b3-83de-b62aed172668 */
            {
              /* outlined object part */
              sglIndexColori(10L);
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(4L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglBegin(SGL_LINES);
              sglVertex2f(-12.0F, 0.0F);
              sglVertex2f(13.0F, 0.0F);
            }

            /* Object: line_13, Type: line, OID: 5584193a-dfbb-461c-9705-da215a8de1bd */
            {
              /* outlined object part */
              sglVertex2f(13.0F, 9.0F);
              sglVertex2f(13.0F, -9.0F);
              sglEnd();
            }

            /* Object: line_14, Type: line, OID: 588293ee-302f-45ed-940f-ef25724be85b */
            {
              /* outlined object part */
              sglBegin(SGL_LINE_STRIP);
              sglVertex2f(-17.0F, 9.0F);
              sglVertex2f(-12.0F, 6.0F);
              sglVertex2f(-12.0F, -6.0F);
              sglVertex2f(-17.0F, -9.0F);
              sglEnd();
            }

            /* Object: line_15, Type: line, OID: 8e8f503c-a507-44c6-8ce7-637ac03d8f30 */
            {
              /* outlined object part */
              sglIndexColori(3L);
              sglIndexLineWidthi(5L);
              sglBegin(SGL_LINES);
              sglVertex2f(-8.0F, 8.0F);
              sglVertex2f(8.0F, -8.0F);
              sglEnd();
            }
          }
        }
        break;

      case 5L:

        /* Object: ST05, Type: container, OID: d727dada-34ed-48a3-9513-bbfff97b50e3 */
        {

          /* Object: HourGlass, Type: container, OID: 3ccbe8f4-c893-49d8-beed-e7eb25b32675 */
          {

            /* Object: shape_3, Type: shape, OID: 022f28cb-307f-4f28-b7aa-b8a65b06e7eb */
            {
              /* filled object part */
              sglIndexColori(3L);
              sglDisable(SGL_MODULATE);
              sglEnable(SGL_POLYGON_SMOOTH);
              sglTransparency8(255L);
              sglDisable(SGL_TEXTURE_2D);
              sglDisable(SGL_TESSELLATION);
              sglBegin(SGL_POLYGON);
              sglVertex2f(-6.0F, 4.0F);
              sglVertex2f(6.0F, 4.0F);
              sglVertex2f(0.0F, -2.0F);
              sglEnd();
              /* outlined object part */
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(0L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(-6.0F, 4.0F);
              sglVertex2f(6.0F, 4.0F);
              sglVertex2f(0.0F, -2.0F);
              sglEnd();
            }

            /* Object: shape_4, Type: shape, OID: c7bb54c9-832a-4cde-8400-9abf875a2950 */
            {
              /* filled object part */
              sglBegin(SGL_POLYGON);
              sglVertex2f(-3.0F, -9.0F);
              sglVertex2f(3.0F, -9.0F);
              sglVertex2f(0.0F, -7.0F);
              sglEnd();
              /* outlined object part */
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(-3.0F, -9.0F);
              sglVertex2f(3.0F, -9.0F);
              sglVertex2f(0.0F, -7.0F);
              sglEnd();
            }

            /* Object: shape_5, Type: shape, OID: 09dce17c-37ea-49be-b61d-176cbd6e36a6 */
            {
              /* outlined object part */
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(3.0F, 0.0F);
              sglVertex2f(10.0F, -7.0F);
              sglVertex2f(10.0F, -10.0F);
              sglVertex2f(-10.0F, -10.0F);
              sglVertex2f(-10.0F, -7.0F);
              sglVertex2f(-3.0F, 0.0F);
              sglVertex2f(-10.0F, 7.0F);
              sglVertex2f(-10.0F, 10.0F);
              sglVertex2f(10.0F, 10.0F);
              sglVertex2f(10.0F, 7.0F);
              sglEnd();
            }
          }
        }
        break;

      case 6L:

        /* Object: ST06, Type: container, OID: d266c86d-6728-4015-bcfc-2662b39433e5 */
        {

          /* Object: ReversingPermitted, Type: container, OID: 82e1ffe6-7e13-4927-9dba-28a1c032e700 */
          {

            /* Object: shape_6, Type: shape, OID: a7a8b6d6-3424-4ae9-b558-3554587c08dc */
            {
              /* filled object part */
              sglIndexColori(3L);
              sglDisable(SGL_MODULATE);
              sglEnable(SGL_POLYGON_SMOOTH);
              sglTransparency8(255L);
              sglDisable(SGL_TEXTURE_2D);
              sglDisable(SGL_TESSELLATION);
              sglBegin(SGL_POLYGON);
              sglVertex2f(-12.0F, 6.0F);
              sglVertex2f(-6.0F, 0.0F);
              sglVertex2f(-12.0F, 0.0F);
              sglEnd();
            }

            /* Object: line_16, Type: line, OID: bfa6c284-bcb4-42bc-9e70-c50eab2ea406 */
            {
              /* outlined object part */
              sglIndexHaloColori(-1L);
              sglIndexLineWidthi(1L);
              sglIndexLineStipplei(0L);
              sglDisable(SGL_LINE_HALOING);
              sglSetLineCaps(SGL_ROUNDED_CAPS);
              sglBegin(SGL_LINE_STRIP);
              sglVertex2f(-15.0F, 12.0F);
              sglVertex2f(-13.0F, 12.0F);
              sglVertex2f(-2.0F, 3.0F);
              sglVertex2f(-2.0F, -6.5F);
              sglVertex2f(-7.5F, -11.5F);
              sglEnd();
            }

            /* Object: line_17, Type: line, OID: 1e0fb68f-cd9a-48be-b3d5-e62b24c3c6a7 */
            {
              /* outlined object part */
              sglBegin(SGL_LINE_STRIP);
              sglVertex2f(10.0F, -1.0F);
              sglVertex2f(13.0F, -1.0F);
              sglVertex2f(15.0F, 1.0F);
              sglVertex2f(15.0F, 4.0F);
              sglVertex2f(13.0F, 6.0F);
              sglVertex2f(9.75F, 6.0F);
              sglEnd();
            }

            /* Object: shape_7, Type: shape, OID: 62e2eccc-8e49-433f-ab31-30e9ad353fe7 */
            {
              /* filled object part */
              sglBegin(SGL_POLYGON);
              sglVertex2f(4.0F, 10.0F);
              sglVertex2f(0.0F, 6.0F);
              sglVertex2f(4.0F, 2.0F);
              sglEnd();
              /* outlined object part */
              sglBegin(SGL_LINE_LOOP);
              sglVertex2f(4.0F, 10.0F);
              sglVertex2f(0.0F, 6.0F);
              sglVertex2f(4.0F, 2.0F);
              sglEnd();
            }

            /* Object: line_18, Type: line, OID: b42ec874-ce71-49d3-8788-02b4a3f783c0 */
            {
              /* outlined object part */
              sglIndexLineWidthi(3L);
              sglBegin(SGL_LINES);
              sglVertex2f(5.0F, 6.0F);
              sglVertex2f(12.0F, 6.0F);
              sglEnd();
            }
          }
        }
        break;

      default:
        /* Do nothing */
        break;
      }
      sglPopMatrixAndTranslate();
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-05-30T13:27:23
 *********************************************************/
