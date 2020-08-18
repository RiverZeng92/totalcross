#include "nm/NativeMethods.h"
#include "tcvm.h"
#include "utils.h"

void
fillNativeProcAddressesTC()
{
  htPutPtr(&htNativeProcAddresses, hashCode("jlC_forName_s"), &jlC_forName_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_newInstance"), &jlC_newInstance);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_isInstance_o"), &jlC_isInstance_o);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_isAssignableFrom_c"),
           &jlC_isAssignableFrom_c);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_isInterface"), &jlC_isInterface);
  htPutPtr(&htNativeProcAddresses, hashCode("jlC_isArray"), &jlC_isArray);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_isPrimitive"), &jlC_isPrimitive);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_getSuperclass"), &jlC_getSuperclass);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_getInterfaces"), &jlC_getInterfaces);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getComponentType"),
           &jlC_getComponentType);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_getModifiers"), &jlC_getModifiers);
  htPutPtr(&htNativeProcAddresses, hashCode("jlC_getFields"), &jlC_getFields);
  htPutPtr(&htNativeProcAddresses, hashCode("jlC_getMethods"), &jlC_getMethods);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getConstructors"),
           &jlC_getConstructors);
  htPutPtr(&htNativeProcAddresses, hashCode("jlC_getField_s"), &jlC_getField_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlC_getMethod_sC"), &jlC_getMethod_sC);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getConstructor_C"),
           &jlC_getConstructor_C);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredFields"),
           &jlC_getDeclaredFields);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredMethods"),
           &jlC_getDeclaredMethods);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredConstructors"),
           &jlC_getDeclaredConstructors);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredField_s"),
           &jlC_getDeclaredField_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredMethod_sC"),
           &jlC_getDeclaredMethod_sC);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlC_getDeclaredConstructor_C"),
           &jlC_getDeclaredConstructor_C);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrA_newInstance_ci"),
           &jlrA_newInstance_ci);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrA_newInstance_cI"),
           &jlrA_newInstance_cI);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getLength_o"), &jlrA_getLength_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrA_get_oi"), &jlrA_get_oi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrA_getBoolean_oi"),
           &jlrA_getBoolean_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getByte_oi"), &jlrA_getByte_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getChar_oi"), &jlrA_getChar_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getShort_oi"), &jlrA_getShort_oi);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrA_getInt_oi"), &jlrA_getInt_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getLong_oi"), &jlrA_getLong_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getFloat_oi"), &jlrA_getFloat_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_getDouble_oi"), &jlrA_getDouble_oi);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrA_set_oio"), &jlrA_set_oio);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrA_setBoolean_oib"),
           &jlrA_setBoolean_oib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setByte_oib"), &jlrA_setByte_oib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setChar_oic"), &jlrA_setChar_oic);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setShort_ois"), &jlrA_setShort_ois);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setInt_oii"), &jlrA_setInt_oii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setLong_oil"), &jlrA_setLong_oil);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrA_setFloat_oid"), &jlrA_setFloat_oid);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrA_setDouble_oid"),
           &jlrA_setDouble_oid);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrM_invoke_oO"), &jlrM_invoke_oO);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrC_newInstance_O"),
           &jlrC_newInstance_O);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_get_o"), &jlrF_get_o);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_getBoolean_o"), &jlrF_getBoolean_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_getByte_o"), &jlrF_getByte_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_getChar_o"), &jlrF_getChar_o);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_getShort_o"), &jlrF_getShort_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_getInt_o"), &jlrF_getInt_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_getLong_o"), &jlrF_getLong_o);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_getFloat_o"), &jlrF_getFloat_o);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_getDouble_o"), &jlrF_getDouble_o);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_set_oo"), &jlrF_set_oo);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlrF_setBoolean_ob"),
           &jlrF_setBoolean_ob);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setByte_ob"), &jlrF_setByte_ob);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setChar_oc"), &jlrF_setChar_oc);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setShort_os"), &jlrF_setShort_os);
  htPutPtr(&htNativeProcAddresses, hashCode("jlrF_setInt_oi"), &jlrF_setInt_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setLong_ol"), &jlrF_setLong_ol);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setFloat_od"), &jlrF_setFloat_od);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlrF_setDouble_od"), &jlrF_setDouble_od);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tmGM_showAddress_sb"),
           &tmGM_showAddress_sb);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tmGM_showRoute_sssi"),
           &tmGM_showRoute_sssi);
  htPutPtr(&htNativeProcAddresses, hashCode("tucL_create"), &tucL_create);
  htPutPtr(&htNativeProcAddresses, hashCode("tucL_destroy"), &tucL_destroy);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZL_deflate_ssiib"),
           &tuzZL_deflate_ssiib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZL_inflate_ssib"),
           &tuzZL_inflate_ssib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuzZE_setTime_l"), &tuzZE_setTime_l);
  htPutPtr(&htNativeProcAddresses, hashCode("tuzZE_getTime"), &tuzZE_getTime);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZF_createZipFile_f"),
           &tuzZF_createZipFile_f);
  htPutPtr(&htNativeProcAddresses, hashCode("tuzZF_close"), &tuzZF_close);
  htPutPtr(&htNativeProcAddresses, hashCode("tuzZF_entries"), &tuzZF_entries);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuzZF_getEntry_s"), &tuzZF_getEntry_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZF_getEntryStream_s"),
           &tuzZF_getEntryStream_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumS_fromText_s"), &tumS_fromText_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumYP_play_scbii"), &tumYP_play_scbii);
  htPutPtr(&htNativeProcAddresses, hashCode("tumS_toText_s"), &tumS_toText_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tumS_play_s"), &tumS_play_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tumS_beep"), &tumS_beep);
  htPutPtr(&htNativeProcAddresses, hashCode("tumS_tone_ii"), &tumS_tone_ii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumS_setEnabled_b"), &tumS_setEnabled_b);
  htPutPtr(&htNativeProcAddresses, hashCode("tumMC_create"), &tumMC_create);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumMC_nativeStart"), &tumMC_nativeStart);
  htPutPtr(&htNativeProcAddresses, hashCode("tumMC_stop"), &tumMC_stop);
  htPutPtr(&htNativeProcAddresses, hashCode("tumMC_reset"), &tumMC_reset);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumMC_nativeClose"), &tumMC_nativeClose);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumMC_record_iib"), &tumMC_record_iib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tumC_nativeClick"), &tumC_nativeClick);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tumC_nativeFinalize"),
           &tumC_nativeFinalize);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tumC_getNativeResolutions"),
           &tumC_getNativeResolutions);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_applyChanges"), &tuiI_applyChanges);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_imageLoad_s"), &tuiI_imageLoad_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_imageParse_sB"),
           &tuiI_imageParse_sB);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_changeColors_ii"),
           &tuiI_changeColors_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_getPixelRow_Bi"),
           &tuiI_getPixelRow_Bi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_getModifiedInstance_iiiiiii"),
           &tuiI_getModifiedInstance_iiiiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_setCurrentFrame_i"),
           &tuiI_setCurrentFrame_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_applyColor_i"), &tuiI_applyColor_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_nativeEquals_i"),
           &tuiI_nativeEquals_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_applyColor2_i"),
           &tuiI_applyColor2_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_setTransparentColor_i"),
           &tuiI_setTransparentColor_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_freeTexture"), &tuiI_freeTexture);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_applyFade_i"), &tuiI_applyFade_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuiI_createJpg_si"), &tuiI_createJpg_si);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_nativeResizeJpeg_ssi"),
           &tuiI_nativeResizeJpeg_ssi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_getJpegBestFit_sii"),
           &tuiI_getJpegBestFit_sii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuiI_getJpegScaled_sii"),
           &tuiI_getJpegScaled_sii);
  htPutPtr(&htNativeProcAddresses, hashCode("tugG_create_g"), &tugG_create_g);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tugG_dither_iiii"), &tugG_dither_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawEllipse_iiii"),
           &tugG_drawEllipse_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillEllipse_iiii"),
           &tugG_fillEllipse_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawArc_iiidd"),
           &tugG_drawArc_iiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawPie_iiidd"),
           &tugG_drawPie_iiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillPie_iiidd"),
           &tugG_fillPie_iiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawEllipticalArc_iiiidd"),
           &tugG_drawEllipticalArc_iiiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawEllipticalPie_iiiidd"),
           &tugG_drawEllipticalPie_iiiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillEllipticalPie_iiiidd"),
           &tugG_fillEllipticalPie_iiiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawCircle_iii"),
           &tugG_drawCircle_iii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillCircle_iii"),
           &tugG_fillCircle_iii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tugG_getPixel_ii"), &tugG_getPixel_ii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tugG_setPixel_ii"), &tugG_setPixel_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawLine_iiii"),
           &tugG_drawLine_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawLine_iiiii"),
           &tugG_drawLine_iiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawDots_iiii"),
           &tugG_drawDots_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawRect_iiii"),
           &tugG_drawRect_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillRect_iiii"),
           &tugG_fillRect_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillPolygon_IIi"),
           &tugG_fillPolygon_IIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawPolygon_IIi"),
           &tugG_drawPolygon_IIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawPolyline_IIi"),
           &tugG_drawPolyline_IIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawText_siii"),
           &tugG_drawText_siii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawRoundRect_iiiii"),
           &tugG_drawRoundRect_iiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillRoundRect_iiiii"),
           &tugG_fillRoundRect_iiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_copyRect_giiiiii"),
           &tugG_copyRect_giiiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawRoundGradient_iiiiiiiii"),
           &tugG_drawRoundGradient_iiiiiiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawImage_iiib"),
           &tugG_drawImage_iiib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_copyImageRect_iiiiib"),
           &tugG_copyImageRect_iiiiib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_setPixels_IIi"),
           &tugG_setPixels_IIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_refresh_iiiiiif"),
           &tugG_refresh_iiiiiif);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_drawImage_iii"),
           &tugG_drawImage_iii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillEllipseGradient_iiii"),
           &tugG_fillEllipseGradient_iiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillPieGradient_iiidd"),
           &tugG_fillPieGradient_iiidd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillEllipticalPieGradient_i"),
           &tugG_fillEllipticalPieGradient_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillCircleGradient_iii"),
           &tugG_fillCircleGradient_iii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_fillPolygonGradient_IIi"),
           &tugG_fillPolygonGradient_IIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_getRGB_Iiiiii"),
           &tugG_getRGB_Iiiiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tugG_setRGB_Iiiiii"),
           &tugG_setRGB_Iiiiii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tugG_fadeScreen_i"), &tugG_fadeScreen_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tufF_fontCreate"), &tufF_fontCreate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tufFM_fontMetricsCreate"),
           &tufFM_fontMetricsCreate);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tufFM_charWidth_c"), &tufFM_charWidth_c);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tufFM_stringWidth_s"),
           &tufFM_stringWidth_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tufFM_stringWidth_Cii"),
           &tufFM_stringWidth_Cii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tufFM_sbWidth_s"), &tufFM_sbWidth_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tufFM_sbWidth_sii"), &tufFM_sbWidth_sii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tufFM_charWidth_si"),
           &tufFM_charWidth_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tueE_isAvailable"), &tueE_isAvailable);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuC_updateScreen"), &tuC_updateScreen);
  htPutPtr(&htNativeProcAddresses, hashCode("tuMW_exit_i"), &tuMW_exit_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuMW_setTimerInterval_i"),
           &tuMW_setTimerInterval_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tuMW_minimize"), &tuMW_minimize);
  htPutPtr(&htNativeProcAddresses, hashCode("tuMW_restore"), &tuMW_restore);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuMW_getCommandLine"),
           &tuMW_getCommandLine);
  htPutPtr(&htNativeProcAddresses, hashCode("tuW_pumpEvents"), &tuW_pumpEvents);
  htPutPtr(&htNativeProcAddresses, hashCode("tuW_setSIP_icb"), &tuW_setSIP_icb);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuW_setDeviceTitle_s"),
           &tuW_setDeviceTitle_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuW_setOrientation_i"),
           &tuW_setOrientation_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tuW_isSipShown"), &tuW_isSipShown);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsCC_bytes2chars_Bii"),
           &tsCC_bytes2chars_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsCC_chars2bytes_Cii"),
           &tsCC_chars2bytes_Cii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsUTF8CC_bytes2chars_Bii"),
           &tsUTF8CC_bytes2chars_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsUTF8CC_chars2bytes_Cii"),
           &tsUTF8CC_chars2bytes_Cii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_equals_BB"), &tsC_equals_BB);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toInt_s"), &tsC_toInt_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toString_c"), &tsC_toString_c);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_doubleToIntBits_d"),
           &tsC_doubleToIntBits_d);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_intBitsToDouble_i"),
           &tsC_intBitsToDouble_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toString_i"), &tsC_toString_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_toString_di"), &tsC_toString_di);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toDouble_s"), &tsC_toDouble_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_toString_si"), &tsC_toString_si);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_doubleToLongBits_d"),
           &tsC_doubleToLongBits_d);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_longBitsToDouble_l"),
           &tsC_longBitsToDouble_l);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_toLowerCase_c"), &tsC_toLowerCase_c);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_toUpperCase_c"), &tsC_toUpperCase_c);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_unsigned2hex_ii"),
           &tsC_unsigned2hex_ii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_hashCode_s"), &tsC_hashCode_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsC_getBreakPos_fsiib"),
           &tsC_getBreakPos_fsiib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_insertAt_sic"), &tsC_insertAt_sic);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_append_sci"), &tsC_append_sci);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toString_l"), &tsC_toString_l);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_toLong_s"), &tsC_toLong_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Ciic"), &tsC_fill_Ciic);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Biib"), &tsC_fill_Biib);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Iiii"), &tsC_fill_Iiii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Diid"), &tsC_fill_Diid);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Siii"), &tsC_fill_Siii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Biii"), &tsC_fill_Biii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Liil"), &tsC_fill_Liil);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_fill_Oiio"), &tsC_fill_Oiio);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_replace_sss"), &tsC_replace_sss);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_getBytes_s"), &tsC_getBytes_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_numberOf_sc"), &tsC_numberOf_sc);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_zeroPad_si"), &tsC_zeroPad_si);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_zeroPad_ii"), &tsC_zeroPad_ii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsC_dup_ci"), &tsC_dup_ci);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_spacePad_sib"), &tsC_spacePad_sib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_numberPad_si"), &tsC_numberPad_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsC_numberPad_ii"), &tsC_numberPad_ii);
  htPutPtr(&htNativeProcAddresses, hashCode("tsT_update"), &tsT_update);
  htPutPtr(&htNativeProcAddresses, hashCode("tsS_refresh"), &tsS_refresh);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_arrayCopy_oioii"),
           &tsV_arrayCopy_oioii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_preallocateArray_oi"),
           &tsV_preallocateArray_oi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsV_getTimeStamp"), &tsV_getTimeStamp);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_setTime_t"), &tsV_setTime_t);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsV_exitAndReboot"), &tsV_exitAndReboot);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_exec_ssib"), &tsV_exec_ssib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsV_setAutoOff_b"), &tsV_setAutoOff_b);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_sleep_i"), &tsV_sleep_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsV_getFreeMemory"), &tsV_getFreeMemory);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_gc"), &tsV_gc);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_interceptSpecialKeys_I"),
           &tsV_interceptSpecialKeys_I);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_debug_s"), &tsV_debug_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_alert_s"), &tsV_alert_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_clipboardCopy_s"),
           &tsV_clipboardCopy_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_clipboardPaste"),
           &tsV_clipboardPaste);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_attachLibrary_s"),
           &tsV_attachLibrary_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_privateAttachNativeLibrary_s"),
           &tsV_privateAttachNativeLibrary_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsV_isKeyDown_i"), &tsV_isKeyDown_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_getFile_s"), &tsV_getFile_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_getRemainingBattery"),
           &tsV_getRemainingBattery);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_tweak_ib"), &tsV_tweak_ib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_getStackTrace_t"),
           &tsV_getStackTrace_t);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_showKeyCodes_b"),
           &tsV_showKeyCodes_b);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_turnScreenOn_b"),
           &tsV_turnScreenOn_b);
  htPutPtr(&htNativeProcAddresses, hashCode("tsV_vibrate_i"), &tsV_vibrate_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tsV_identityHashCode_o"),
           &tsV_identityHashCode_o);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_getInt_iss"), &tsR_getInt_iss);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsR_getString_iss"), &tsR_getString_iss);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tsR_getBlob_iss"), &tsR_getBlob_iss);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_set_issi"), &tsR_set_issi);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_set_isss"), &tsR_set_isss);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_set_issB"), &tsR_set_issB);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_delete_iss"), &tsR_delete_iss);
  htPutPtr(&htNativeProcAddresses, hashCode("tsR_list_is"), &tsR_list_is);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_NewContact"),
           &tpcbIPOIC_NewContact);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_GetAllContacts"),
           &tpcbIPOIC_GetAllContacts);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_ViewAllContacts"),
           &tpcbIPOIC_ViewAllContacts);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_getIContactString_s"),
           &tpcbIPOIC_getIContactString_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_removeIContact_s"),
           &tpcbIPOIC_removeIContact_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_editIContact_sssssssss"),
           &tpcbIPOIC_editIContact_sssssssss);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_newAppointment"),
           &tpcbIPOIC_newAppointment);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_GetAllAppointments"),
           &tpcbIPOIC_GetAllAppointments);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_ViewAllAppointments"),
           &tpcbIPOIC_ViewAllAppointments);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_getIAppointmentString_"),
           &tpcbIPOIC_getIAppointmentString_);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_removeIAppointment_s"),
           &tpcbIPOIC_removeIAppointment_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_editIAppointment_sssss"),
           &tpcbIPOIC_editIAppointment_sssss);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_ViewAllTasks"),
           &tpcbIPOIC_ViewAllTasks);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_GetAllTasks"),
           &tpcbIPOIC_GetAllTasks);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tpcbIPOIC_newTask"), &tpcbIPOIC_newTask);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_getITaskString_s"),
           &tpcbIPOIC_getITaskString_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_removeITask_s"),
           &tpcbIPOIC_removeITask_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpcbIPOIC_editITask_ssssssssssss"),
           &tpcbIPOIC_editITask_ssssssssssss);
  htPutPtr(&htNativeProcAddresses, hashCode("tnsSSL_dispose"), &tnsSSL_dispose);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_handshakeStatus"),
           &tnsSSL_handshakeStatus);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_getCipherId"),
           &tnsSSL_getCipherId);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_getSessionId"),
           &tnsSSL_getSessionId);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_getCertificateDN_i"),
           &tnsSSL_getCertificateDN_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tnsSSL_read_s"), &tnsSSL_read_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnsSSL_write_Bi"), &tnsSSL_write_Bi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_verifyCertificate"),
           &tnsSSL_verifyCertificate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSL_renegotiate"),
           &tnsSSL_renegotiate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLCTX_create_ii"),
           &tnsSSLCTX_create_ii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnsSSLCTX_dispose"), &tnsSSLCTX_dispose);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnsSSLCTX_find_s"), &tnsSSLCTX_find_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLCTX_objLoad_iss"),
           &tnsSSLCTX_objLoad_iss);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLCTX_objLoad_iBis"),
           &tnsSSLCTX_objLoad_iBis);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLCTX_newClient_sB"),
           &tnsSSLCTX_newClient_sB);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLCTX_newServer_s"),
           &tnsSSLCTX_newServer_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLU_getConfig_i"),
           &tnsSSLU_getConfig_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnsSSLU_displayError_i"),
           &tnsSSLU_displayError_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnsSSLU_version"), &tnsSSLU_version);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_loadResources"),
           &tnCM_loadResources);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_setDefaultConfiguration_is"),
           &tnCM_setDefaultConfiguration_is);
  htPutPtr(&htNativeProcAddresses, hashCode("tnCM_open"), &tnCM_open);
  htPutPtr(&htNativeProcAddresses, hashCode("tnCM_open_i"), &tnCM_open_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnCM_nativeClose"), &tnCM_nativeClose);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_getHostAddress_s"),
           &tnCM_getHostAddress_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_getHostName_s"),
           &tnCM_getHostName_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnCM_getLocalHost"), &tnCM_getLocalHost);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_getLocalHostName"),
           &tnCM_getLocalHostName);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_isAvailable_i"),
           &tnCM_isAvailable_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnCM_releaseResources"),
           &tnCM_releaseResources);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnS_socketCreate_siib"),
           &tnS_socketCreate_siib);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnS_nativeClose"), &tnS_nativeClose);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnS_readWriteBytes_Biib"),
           &tnS_readWriteBytes_Biib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tnSS_serversocketCreate_iiis"),
           &tnSS_serversocketCreate_iiis);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tnSS_nativeClose"), &tnSS_nativeClose);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpCI_loadResources"),
           &tpCI_loadResources);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tpCI_releaseResources"),
           &tpCI_releaseResources);
  htPutPtr(&htNativeProcAddresses, hashCode("tpCI_update"), &tpCI_update);
  htPutPtr(&htNativeProcAddresses, hashCode("tpD_number_s"), &tpD_number_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tpD_hangup"), &tpD_hangup);
  htPutPtr(&htNativeProcAddresses, hashCode("tpSMS_send_ss"), &tpSMS_send_ss);
  htPutPtr(&htNativeProcAddresses, hashCode("tpSMS_receive"), &tpSMS_receive);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlO_toStringNative"),
           &jlO_toStringNative);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlO_nativeHashCode"),
           &jlO_nativeHashCode);
  htPutPtr(&htNativeProcAddresses, hashCode("jlO_getClass"), &jlO_getClass);
  htPutPtr(&htNativeProcAddresses, hashCode("jlO_clone"), &jlO_clone);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_toUpperCase"), &jlS_toUpperCase);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_toLowerCase"), &jlS_toLowerCase);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_valueOf_d"), &jlS_valueOf_d);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_valueOf_c"), &jlS_valueOf_c);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_valueOf_i"), &jlS_valueOf_i);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_indexOf_i"), &jlS_indexOf_i);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_indexOf_ii"), &jlS_indexOf_ii);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_equals_o"), &jlS_equals_o);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_compareTo_s"), &jlS_compareTo_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlS_copyChars_CiCii"),
           &jlS_copyChars_CiCii);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_indexOf_si"), &jlS_indexOf_si);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_indexOf_s"), &jlS_indexOf_s);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_hashCode"), &jlS_hashCode);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_startsWith_si"), &jlS_startsWith_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_startsWith_s"), &jlS_startsWith_s);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_endsWith_s"), &jlS_endsWith_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlS_equalsIgnoreCase_s"),
           &jlS_equalsIgnoreCase_s);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_replace_cc"), &jlS_replace_cc);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlS_lastIndexOf_ii"),
           &jlS_lastIndexOf_ii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_lastIndexOf_i"), &jlS_lastIndexOf_i);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_trim"), &jlS_trim);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_valueOf_l"), &jlS_valueOf_l);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlS_lastIndexOf_s"), &jlS_lastIndexOf_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlS_lastIndexOf_si"),
           &jlS_lastIndexOf_si);
  htPutPtr(&htNativeProcAddresses, hashCode("jlS_getBytes"), &jlS_getBytes);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlSB_ensureCapacity_i"),
           &jlSB_ensureCapacity_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlSB_setLength_i"), &jlSB_setLength_i);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_s"), &jlSB_append_s);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_C"), &jlSB_append_C);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlSB_append_Cii"), &jlSB_append_Cii);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_c"), &jlSB_append_c);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_i"), &jlSB_append_i);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_l"), &jlSB_append_l);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_append_d"), &jlSB_append_d);
  htPutPtr(&htNativeProcAddresses, hashCode("jlSB_delete_ii"), &jlSB_delete_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jlT_printStackTraceNative"),
           &jlT_printStackTraceNative);
  htPutPtr(&htNativeProcAddresses, hashCode("jlT_yield"), &jlT_yield);
  htPutPtr(&htNativeProcAddresses, hashCode("jlT_start"), &jlT_start);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jlT_currentThread"), &jlT_currentThread);
  htPutPtr(&htNativeProcAddresses, hashCode("jlR_exec_SSs"), &jlR_exec_SSs);
  htPutPtr(&htNativeProcAddresses, hashCode("jlPI_waitFor"), &jlPI_waitFor);
  htPutPtr(&htNativeProcAddresses, hashCode("jlPI_exitValue"), &jlPI_exitValue);
  htPutPtr(&htNativeProcAddresses, hashCode("jlPI_destroy"), &jlPI_destroy);
  htPutPtr(&htNativeProcAddresses, hashCode("jncFCI_read"), &jncFCI_read);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jncFCI_read_Bii"), &jncFCI_read_Bii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("jncFCI_write_Bii"), &jncFCI_write_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("jncFCI_implCloseChannel"),
           &jncFCI_implCloseChannel);
  htPutPtr(&htNativeProcAddresses,
           hashCode("juL_getDefaultToString"),
           &juL_getDefaultToString);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidRD_isSupported_i"),
           &tidRD_isSupported_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidRD_getState_i"), &tidRD_getState_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidRD_setState_ii"), &tidRD_setState_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidPC_create_iiiii"),
           &tidPC_create_iiiii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidPC_nativeClose"), &tidPC_nativeClose);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidPC_setFlowControl_b"),
           &tidPC_setFlowControl_b);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidPC_readCheck"), &tidPC_readCheck);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidPC_readWriteBytes_Biib"),
           &tidPC_readWriteBytes_Biib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_nativeDiscoveryAgent"),
           &tidbDA_nativeDiscoveryAgent);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_cancelInquiry_d"),
           &tidbDA_cancelInquiry_d);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_cancelServiceSearch_i"),
           &tidbDA_cancelServiceSearch_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_retrieveDevices_i"),
           &tidbDA_retrieveDevices_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_nativeSearchServices_IUrd"),
           &tidbDA_nativeSearchServices_IUrd);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_selectService_uib"),
           &tidbDA_selectService_uib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbDA_startInquiry_id"),
           &tidbDA_startInquiry_id);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbSPS_createSerialPortServer_s"),
           &tidbSPS_createSerialPortServer_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tidbSPS_accept"), &tidbSPS_accept);
  htPutPtr(&htNativeProcAddresses, hashCode("tidbSPS_close"), &tidbSPS_close);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbSPC_createSerialPortClient_s"),
           &tidbSPC_createSerialPortClient_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbSPC_readBytes_Bii"),
           &tidbSPC_readBytes_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidbSPC_writeBytes_Bii"),
           &tidbSPC_writeBytes_Bii);
  htPutPtr(&htNativeProcAddresses, hashCode("tidbSPC_close"), &tidbSPC_close);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidgGPS_startGPS"), &tidgGPS_startGPS);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidgGPS_updateLocation"),
           &tidgGPS_updateLocation);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidgGPS_stopGPS"), &tidgGPS_stopGPS);
  htPutPtr(&htNativeProcAddresses, hashCode("tidgGC_open_i"), &tidgGC_open_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tidgGL_open_gi"), &tidgGL_open_gi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidgGL_requestOutput_si"),
           &tidgGL_requestOutput_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidgGL_setValue_i"), &tidgGL_setValue_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidgGL_requestInput_s"),
           &tidgGL_requestInput_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidgGL_getValue"), &tidgGL_getValue);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_create_sssi"),
           &tiPDBF_create_sssi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tiPDBF_rename_s"), &tiPDBF_rename_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_addRecord_i"),
           &tiPDBF_addRecord_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_addRecord_ii"),
           &tiPDBF_addRecord_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_resizeRecord_i"),
           &tiPDBF_resizeRecord_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_nativeClose"),
           &tiPDBF_nativeClose);
  htPutPtr(&htNativeProcAddresses, hashCode("tiPDBF_delete"), &tiPDBF_delete);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_listPDBs_ii"),
           &tiPDBF_listPDBs_ii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_deleteRecord"),
           &tiPDBF_deleteRecord);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_getRecordCount"),
           &tiPDBF_getRecordCount);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_setRecordPos_i"),
           &tiPDBF_setRecordPos_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_readWriteBytes_Biib"),
           &tiPDBF_readWriteBytes_Biib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_inspectRecord_Bii"),
           &tiPDBF_inspectRecord_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_getRecordAttributes_i"),
           &tiPDBF_getRecordAttributes_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_setRecordAttributes_ib"),
           &tiPDBF_setRecordAttributes_ib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_getAttributes"),
           &tiPDBF_getAttributes);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_setAttributes_i"),
           &tiPDBF_setAttributes_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiPDBF_searchBytes_Bii"),
           &tiPDBF_searchBytes_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiF_getDeviceAlias"),
           &tiF_getDeviceAlias);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_create_sii"), &tiF_create_sii);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_close"), &tiF_close);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiF_isCardInserted_i"),
           &tiF_isCardInserted_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_createDir"), &tiF_createDir);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_delete"), &tiF_delete);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_exists"), &tiF_exists);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_getSize"), &tiF_getSize);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_isDir"), &tiF_isDir);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_listFiles"), &tiF_listFiles);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tiF_readBytes_Bii"), &tiF_readBytes_Bii);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_rename_s"), &tiF_rename_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_setPos_i"), &tiF_setPos_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiF_writeBytes_Bii"),
           &tiF_writeBytes_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiF_setAttributes_i"),
           &tiF_setAttributes_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tiF_getAttributes"), &tiF_getAttributes);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_setTime_bt"), &tiF_setTime_bt);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_getTime_b"), &tiF_getTime_b);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_setSize_i"), &tiF_setSize_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tiF_getCardSerialNumber_i"),
           &tiF_getCardSerialNumber_i);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_flush"), &tiF_flush);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_listRoots"), &tiF_listRoots);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_isEmpty"), &tiF_isEmpty);
  htPutPtr(&htNativeProcAddresses, hashCode("tiF_chmod_i"), &tiF_chmod_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzCS_createInflate_s"),
           &tuzCS_createInflate_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzCS_createDeflate_si"),
           &tuzCS_createDeflate_si);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzCS_readBytes_Bii"),
           &tuzCS_readBytes_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzCS_writeBytes_Bii"),
           &tuzCS_writeBytes_Bii);
  htPutPtr(&htNativeProcAddresses, hashCode("tuzCS_close"), &tuzCS_close);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_createInflate_s"),
           &tuzZS_createInflate_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_createDeflate_si"),
           &tuzZS_createDeflate_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuzZS_available"), &tuzZS_available);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_getNextEntry"),
           &tuzZS_getNextEntry);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_putNextEntry_z"),
           &tuzZS_putNextEntry_z);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuzZS_closeEntry"), &tuzZS_closeEntry);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_readBytes_Bii"),
           &tuzZS_readBytes_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuzZS_writeBytes_Bii"),
           &tuzZS_writeBytes_Bii);
  htPutPtr(&htNativeProcAddresses, hashCode("tuzZS_close"), &tuzZS_close);
  htPutPtr(&htNativeProcAddresses,
           hashCode("txXT_resolveCharacterReference_B"),
           &txXT_resolveCharacterReference_B);
  htPutPtr(&htNativeProcAddresses,
           hashCode("txXT_setCdataContents_Bii"),
           &txXT_setCdataContents_Bii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("txXT_tokenizeBytes_B"),
           &txXT_tokenizeBytes_B);
  htPutPtr(&htNativeProcAddresses,
           hashCode("txXT_endTokenize_B"),
           &txXT_endTokenize_B);
  htPutPtr(
    &htNativeProcAddresses, hashCode("txXT_nativeCreate"), &txXT_nativeCreate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcpPBKDF2WHSHA1F_generateSecretI"),
           &tcpPBKDF2WHSHA1F_generateSecretI);
  htPutPtr(&htNativeProcAddresses, hashCode("tcdMD5D_init"), &tcdMD5D_init);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tcdMD5D_process_B"), &tcdMD5D_process_B);
  htPutPtr(&htNativeProcAddresses, hashCode("tcdSHA1D_init"), &tcdSHA1D_init);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcdSHA1D_process_B"),
           &tcdSHA1D_process_B);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tcdSHA256D_init"), &tcdSHA256D_init);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcdSHA256D_process_B"),
           &tcdSHA256D_process_B);
  htPutPtr(&htNativeProcAddresses, hashCode("tccAESC_init"), &tccAESC_init);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tccAESC_doReset"), &tccAESC_doReset);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tccAESC_process_B"), &tccAESC_process_B);
  htPutPtr(&htNativeProcAddresses, hashCode("tccRSAC_init"), &tccRSAC_init);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tccRSAC_finalize"), &tccRSAC_finalize);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tccRSAC_doReset"), &tccRSAC_doReset);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tccRSAC_process_B"), &tccRSAC_process_B);
  htPutPtr(&htNativeProcAddresses, hashCode("tcsPKCS1S_init"), &tcsPKCS1S_init);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcsPKCS1S_finalize"),
           &tcsPKCS1S_finalize);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tcsPKCS1S_doReset"), &tcsPKCS1S_doReset);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcsPKCS1S_doSign_B"),
           &tcsPKCS1S_doSign_B);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcsPKCS1S_doVerify_BB"),
           &tcsPKCS1S_doVerify_BB);
  htPutPtr(
    &htNativeProcAddresses, hashCode("rU_getConfigInfo"), &rU_getConfigInfo);
  htPutPtr(
    &htNativeProcAddresses, hashCode("rU_getProductInfo"), &rU_getProductInfo);
  htPutPtr(
    &htNativeProcAddresses, hashCode("rU_getDeviceInfo"), &rU_getDeviceInfo);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_add_1_IIii"), &tuBI_add_1_IIii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_add_n_IIIi"), &tuBI_add_n_IIIi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_sub_n_IIIi"), &tuBI_sub_n_IIIi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_mul_1_IIii"), &tuBI_mul_1_IIii);
  htPutPtr(&htNativeProcAddresses, hashCode("tuBI_mul_IIiIi"), &tuBI_mul_IIiIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_udiv_qrnnd_li"),
           &tuBI_udiv_qrnnd_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_divmod_1_IIii"),
           &tuBI_divmod_1_IIii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_submul_1_IiIii"),
           &tuBI_submul_1_IiIii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_divide_IiIi"), &tuBI_divide_IiIi);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_chars_per_word_i"),
           &tuBI_chars_per_word_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_count_leading_zeros_i"),
           &tuBI_count_leading_zeros_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_set_str_IBii"), &tuBI_set_str_IBii);
  htPutPtr(&htNativeProcAddresses, hashCode("tuBI_cmp_IIi"), &tuBI_cmp_IIi);
  htPutPtr(&htNativeProcAddresses, hashCode("tuBI_cmp_IiIi"), &tuBI_cmp_IiIi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_rshift_IIiii"), &tuBI_rshift_IIiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_rshift0_IIiii"),
           &tuBI_rshift0_IIiii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_rshift_long_Iii"),
           &tuBI_rshift_long_Iii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_lshift_IiIii"), &tuBI_lshift_IiIii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_findLowestBit_i"),
           &tuBI_findLowestBit_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tuBI_findLowestBit_I"),
           &tuBI_findLowestBit_I);
  htPutPtr(&htNativeProcAddresses, hashCode("tuBI_gcd_IIi"), &tuBI_gcd_IIi);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_intLength_i"), &tuBI_intLength_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tuBI_intLength_Ii"), &tuBI_intLength_Ii);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB__open_si"), &tdsNDB__open_si);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB__close"), &tdsNDB__close);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB__exec_s"), &tdsNDB__exec_s);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_shared_cache_b"),
           &tdsNDB_shared_cache_b);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_enable_load_extension_b"),
           &tdsNDB_enable_load_extension_b);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB_interrupt"), &tdsNDB_interrupt);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_busy_timeout_i"),
           &tdsNDB_busy_timeout_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB_prepare_s"), &tdsNDB_prepare_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB_errmsg"), &tdsNDB_errmsg);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB_libversion"), &tdsNDB_libversion);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB_changes"), &tdsNDB_changes);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_total_changes"),
           &tdsNDB_total_changes);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB_finalize_l"), &tdsNDB_finalize_l);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB_step_l"), &tdsNDB_step_l);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB_reset_l"), &tdsNDB_reset_l);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_clear_bindings_l"),
           &tdsNDB_clear_bindings_l);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_parameter_count_l"),
           &tdsNDB_bind_parameter_count_l);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_count_l"),
           &tdsNDB_column_count_l);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_type_li"),
           &tdsNDB_column_type_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_decltype_li"),
           &tdsNDB_column_decltype_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_table_name_li"),
           &tdsNDB_column_table_name_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_name_li"),
           &tdsNDB_column_name_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_text_li"),
           &tdsNDB_column_text_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_blob_li"),
           &tdsNDB_column_blob_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_double_li"),
           &tdsNDB_column_double_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_long_li"),
           &tdsNDB_column_long_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_int_li"),
           &tdsNDB_column_int_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_null_li"),
           &tdsNDB_bind_null_li);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_int_lii"),
           &tdsNDB_bind_int_lii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_long_lil"),
           &tdsNDB_bind_long_lil);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_double_lid"),
           &tdsNDB_bind_double_lid);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_text_lis"),
           &tdsNDB_bind_text_lis);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_bind_blob_liB"),
           &tdsNDB_bind_blob_liB);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_null_l"),
           &tdsNDB_result_null_l);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_text_ls"),
           &tdsNDB_result_text_ls);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_blob_lB"),
           &tdsNDB_result_blob_lB);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_double_ld"),
           &tdsNDB_result_double_ld);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_long_ll"),
           &tdsNDB_result_long_ll);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_result_int_li"),
           &tdsNDB_result_int_li);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tdsNDB_backup_ssp"), &tdsNDB_backup_ssp);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_restore_ssp"),
           &tdsNDB_restore_ssp);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tdsNDB_column_metadata_l"),
           &tdsNDB_column_metadata_l);
  htPutPtr(&htNativeProcAddresses, hashCode("tdsNDB_load"), &tdsNDB_load);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tmA_getHeightD_i"), &tmA_getHeightD_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tmA_configureD_s"), &tmA_configureD_s);
  htPutPtr(&htNativeProcAddresses, hashCode("tmA_setSizeD_i"), &tmA_setSizeD_i);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tmA_setPositionD_i"),
           &tmA_setPositionD_i);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tmA_setVisibleD_b"), &tmA_setVisibleD_b);
  htPutPtr(&htNativeProcAddresses, hashCode("tmA_isVisibleD"), &tmA_isVisibleD);
  htPutPtr(&htNativeProcAddresses,
           hashCode("ttSM_sendTextMessage_sss"),
           &ttSM_sendTextMessage_sss);
  htPutPtr(&htNativeProcAddresses,
           hashCode("ttSM_sendDataMessage_ssiB"),
           &ttSM_sendDataMessage_ssiB);
  htPutPtr(&htNativeProcAddresses,
           hashCode("ttSM_registerSmsReceiver_si"),
           &ttSM_registerSmsReceiver_si);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tfiFII_getToken"), &tfiFII_getToken);
  htPutPtr(&htNativeProcAddresses, hashCode("tnNM_notify_n"), &tnNM_notify_n);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tcspPM_internalPrintText_ssp"),
           &tcspPM_internalPrintText_ssp);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tqQRC_nativeGetBytes_sii"),
           &tqQRC_nativeGetBytes_sii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_scannerActivate"),
           &tidsS_scannerActivate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_setBarcodeParam_ib"),
           &tidsS_setBarcodeParam_ib);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_setParam_iii"),
           &tidsS_setParam_iii);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_commitBarcodeParams"),
           &tidsS_commitBarcodeParams);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_setBarcodeLength_iiii"),
           &tidsS_setBarcodeLength_iiii);
  htPutPtr(&htNativeProcAddresses, hashCode("tidsS_getData"), &tidsS_getData);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_getScanManagerVersion"),
           &tidsS_getScanManagerVersion);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_getScanPortDriverVersion"),
           &tidsS_getScanPortDriverVersion);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidsS_deactivate"), &tidsS_deactivate);
  htPutPtr(&htNativeProcAddresses,
           hashCode("tidsS_readBarcode_s"),
           &tidsS_readBarcode_s);
  htPutPtr(
    &htNativeProcAddresses, hashCode("tidsS_setParam_ss"), &tidsS_setParam_ss);
  htPutPtr(&htNativeProcAddresses, hashCode("getMainContext"), &getMainContext);
}
