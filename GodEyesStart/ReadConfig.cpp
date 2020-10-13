
#define _CRT_SECURE_NO_WARNINGS
#include "ReadConfig.h"
#include <iostream>
#include <sstream>
#include <windows.h>
#include <stdio.h>

using namespace std;

#define CONFIG_FILE_NAME ".\\config.ini"

void ReadFile(FILE *configFile, ConfigList *configlist)
{

	char LineBuf[MAX_LEN] = { 0 };

	memset(configlist, 0, sizeof(ConfigList));

//-----------------------------------------------------Read Config------------------------------------------------------
	                                                   //Camera0
//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera0", "CameraFunction", "", configlist->Camera0Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraExptime", "", configlist->Camera0Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraExpauto", "", configlist->Camera0Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraGain", "", configlist->Camera0Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraGainauto", "", configlist->Camera0Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraFrate", "", configlist->Camera0Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraDevid", "", configlist->Camera0Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "Camerausrid", "", configlist->Camera0usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraRoih", "", configlist->Camera0Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraRoiw", "", configlist->Camera0Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraRoix", "", configlist->Camera0Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraRoiy", "", configlist->Camera0Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraStampsel", "", configlist->Camera0Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraStampon", "", configlist->Camera0Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTsele", "", configlist->Camera0Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTmode", "", configlist->Camera0Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTsrc", "", configlist->Camera0Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTacti", "", configlist->Camera0Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTdelay", "", configlist->Camera0Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraTcaen", "", configlist->Camera0Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraEmax", "", configlist->Camera0Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraEmin", "", configlist->Camera0Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraXr", "", configlist->Camera0Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraGthread", "", configlist->Camera0Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraDoorin", "", configlist->Camera0Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraFcut", "", configlist->Camera0Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraBrate", "", configlist->Camera0Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraBtol", "", configlist->Camera0Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera0", "CameraEthread", "", configlist->Camera0Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
													          //Camera1
//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera1", "CameraFunction", "", configlist->Camera1Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraExptime", "", configlist->Camera1Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraExpauto", "", configlist->Camera1Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraGain", "", configlist->Camera1Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraGainauto", "", configlist->Camera1Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraFrate", "", configlist->Camera1Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraDevid", "", configlist->Camera1Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "Camerausrid", "", configlist->Camera1usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraRoih", "", configlist->Camera1Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraRoiw", "", configlist->Camera1Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraRoix", "", configlist->Camera1Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraRoiy", "", configlist->Camera1Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraStampsel", "", configlist->Camera1Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraStampon", "", configlist->Camera1Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTsele", "", configlist->Camera1Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTmode", "", configlist->Camera1Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTsrc", "", configlist->Camera1Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTacti", "", configlist->Camera1Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTdelay", "", configlist->Camera1Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraTcaen", "", configlist->Camera1Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraEmax", "", configlist->Camera1Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraEmin", "", configlist->Camera1Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraXr", "", configlist->Camera1Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraGthread", "", configlist->Camera1Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraDoorin", "", configlist->Camera1Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraFcut", "", configlist->Camera1Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraBrate", "", configlist->Camera1Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraBtol", "", configlist->Camera1Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera1", "CameraEthread", "", configlist->Camera1Ethread, 128, CONFIG_FILE_NAME);
		
		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera2
		//----------------------------------------------------------------------------------------------------------------------
		
		GetPrivateProfileStringA("Camera2", "CameraFunction", "", configlist->Camera2Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraExptime", "", configlist->Camera2Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraExpauto", "", configlist->Camera2Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraGain", "", configlist->Camera2Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraGainauto", "", configlist->Camera2Gainauto, 228, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraFrate", "", configlist->Camera2Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraDevid", "", configlist->Camera2Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "Camerausrid", "", configlist->Camera2usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraRoih", "", configlist->Camera2Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraRoiw", "", configlist->Camera2Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraRoix", "", configlist->Camera2Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraRoiy", "", configlist->Camera2Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraStampsel", "", configlist->Camera2Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraStampon", "", configlist->Camera2Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTsele", "", configlist->Camera2Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTmode", "", configlist->Camera2Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTsrc", "", configlist->Camera2Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTacti", "", configlist->Camera2Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTdelay", "", configlist->Camera2Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraTcaen", "", configlist->Camera2Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraEmax", "", configlist->Camera2Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraEmin", "", configlist->Camera2Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraXr", "", configlist->Camera2Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraGthread", "", configlist->Camera2Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraDoorin", "", configlist->Camera2Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraFcut", "", configlist->Camera2Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraBrate", "", configlist->Camera2Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraBtol", "", configlist->Camera2Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera2", "CameraEthread", "", configlist->Camera2Ethread, 128, CONFIG_FILE_NAME);
		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera3
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera3", "CameraFunction", "", configlist->Camera3Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraExptime", "", configlist->Camera3Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraExpauto", "", configlist->Camera3Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraGain", "", configlist->Camera3Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraGainauto", "", configlist->Camera3Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraFrate", "", configlist->Camera3Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraDevid", "", configlist->Camera3Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "Camerausrid", "", configlist->Camera3usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraRoih", "", configlist->Camera3Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraRoiw", "", configlist->Camera3Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraRoix", "", configlist->Camera3Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraRoiy", "", configlist->Camera3Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraStampsel", "", configlist->Camera3Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraStampon", "", configlist->Camera3Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTsele", "", configlist->Camera3Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTmode", "", configlist->Camera3Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTsrc", "", configlist->Camera3Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTacti", "", configlist->Camera3Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTdelay", "", configlist->Camera3Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraTcaen", "", configlist->Camera3Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraEmax", "", configlist->Camera3Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraEmin", "", configlist->Camera3Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraXr", "", configlist->Camera3Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraGthread", "", configlist->Camera3Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraDoorin", "", configlist->Camera3Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraFcut", "", configlist->Camera3Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraBrate", "", configlist->Camera3Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraBtol", "", configlist->Camera3Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera3", "CameraEthread", "", configlist->Camera3Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera4
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera4", "CameraFunction", "", configlist->Camera4Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraExptime", "", configlist->Camera4Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraExpauto", "", configlist->Camera4Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraGain", "", configlist->Camera4Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraGainauto", "", configlist->Camera4Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraFrate", "", configlist->Camera4Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraDevid", "", configlist->Camera4Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "Camerausrid", "", configlist->Camera4usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraRoih", "", configlist->Camera4Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraRoiw", "", configlist->Camera4Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraRoix", "", configlist->Camera4Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraRoiy", "", configlist->Camera4Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraStampsel", "", configlist->Camera4Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraStampon", "", configlist->Camera4Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTsele", "", configlist->Camera4Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTmode", "", configlist->Camera4Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTsrc", "", configlist->Camera4Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTacti", "", configlist->Camera4Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTdelay", "", configlist->Camera4Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraTcaen", "", configlist->Camera4Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraEmax", "", configlist->Camera4Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraEmin", "", configlist->Camera4Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraXr", "", configlist->Camera4Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraGthread", "", configlist->Camera4Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraDoorin", "", configlist->Camera4Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraFcut", "", configlist->Camera4Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraBrate", "", configlist->Camera4Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraBtol", "", configlist->Camera4Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera4", "CameraEthread", "", configlist->Camera4Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera5
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera5", "CameraFunction", "", configlist->Camera5Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraExptime", "", configlist->Camera5Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraExpauto", "", configlist->Camera5Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraGain", "", configlist->Camera5Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraGainauto", "", configlist->Camera5Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraFrate", "", configlist->Camera5Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraDevid", "", configlist->Camera5Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "Camerausrid", "", configlist->Camera5usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraRoih", "", configlist->Camera5Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraRoiw", "", configlist->Camera5Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraRoix", "", configlist->Camera5Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraRoiy", "", configlist->Camera5Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraStampsel", "", configlist->Camera5Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraStampon", "", configlist->Camera5Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTsele", "", configlist->Camera5Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTmode", "", configlist->Camera5Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTsrc", "", configlist->Camera5Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTacti", "", configlist->Camera5Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTdelay", "", configlist->Camera5Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraTcaen", "", configlist->Camera5Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraEmax", "", configlist->Camera5Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraEmin", "", configlist->Camera5Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraXr", "", configlist->Camera5Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraGthread", "", configlist->Camera5Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraDoorin", "", configlist->Camera5Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraFcut", "", configlist->Camera5Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraBrate", "", configlist->Camera5Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraBtol", "", configlist->Camera5Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera5", "CameraEthread", "", configlist->Camera5Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera6
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera6", "CameraFunction", "", configlist->Camera6Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraExptime", "", configlist->Camera6Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraExpauto", "", configlist->Camera6Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraGain", "", configlist->Camera6Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraGainauto", "", configlist->Camera6Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraFrate", "", configlist->Camera6Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraDevid", "", configlist->Camera6Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "Camerausrid", "", configlist->Camera6usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraRoih", "", configlist->Camera6Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraRoiw", "", configlist->Camera6Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraRoix", "", configlist->Camera6Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraRoiy", "", configlist->Camera6Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraStampsel", "", configlist->Camera6Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraStampon", "", configlist->Camera6Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTsele", "", configlist->Camera6Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTmode", "", configlist->Camera6Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTsrc", "", configlist->Camera6Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTacti", "", configlist->Camera6Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTdelay", "", configlist->Camera6Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraTcaen", "", configlist->Camera6Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraEmax", "", configlist->Camera6Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraEmin", "", configlist->Camera6Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraXr", "", configlist->Camera6Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraGthread", "", configlist->Camera6Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraDoorin", "", configlist->Camera6Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraFcut", "", configlist->Camera6Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraBrate", "", configlist->Camera6Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraBtol", "", configlist->Camera6Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera6", "CameraEthread", "", configlist->Camera6Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera7
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera7", "CameraFunction", "", configlist->Camera7Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraExptime", "", configlist->Camera7Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraExpauto", "", configlist->Camera7Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraGain", "", configlist->Camera7Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraGainauto", "", configlist->Camera7Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraFrate", "", configlist->Camera7Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraDevid", "", configlist->Camera7Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "Camerausrid", "", configlist->Camera7usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraRoih", "", configlist->Camera7Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraRoiw", "", configlist->Camera7Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraRoix", "", configlist->Camera7Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraRoiy", "", configlist->Camera7Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraStampsel", "", configlist->Camera7Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraStampon", "", configlist->Camera7Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTsele", "", configlist->Camera7Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTmode", "", configlist->Camera7Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTsrc", "", configlist->Camera7Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTacti", "", configlist->Camera7Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTdelay", "", configlist->Camera7Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraTcaen", "", configlist->Camera7Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraEmax", "", configlist->Camera7Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraEmin", "", configlist->Camera7Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraXr", "", configlist->Camera7Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraGthread", "", configlist->Camera7Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraDoorin", "", configlist->Camera7Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraFcut", "", configlist->Camera7Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraBrate", "", configlist->Camera7Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraBtol", "", configlist->Camera7Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera7", "CameraEthread", "", configlist->Camera7Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Camera8
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("Camera8", "CameraFunction", "", configlist->Camera8Function, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraExptime", "", configlist->Camera8Exptime, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraExpauto", "", configlist->Camera8Expauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraGain", "", configlist->Camera8Gain, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraGainauto", "", configlist->Camera8Gainauto, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraFrate", "", configlist->Camera8Frate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraDevid", "", configlist->Camera8Devid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "Camerausrid", "", configlist->Camera8usrid, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraRoih", "", configlist->Camera8Roih, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraRoiw", "", configlist->Camera8Roiw, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraRoix", "", configlist->Camera8Roix, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraRoiy", "", configlist->Camera8Roiy, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraStampsel", "", configlist->Camera8Stampsel, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraStampon", "", configlist->Camera8Stampon, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTsele", "", configlist->Camera8Tsele, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTmode", "", configlist->Camera8Tmode, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTsrc", "", configlist->Camera8Tsrc, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTacti", "", configlist->Camera8Tacti, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTdelay", "", configlist->Camera8Tdelay, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraTcaen", "", configlist->Camera8Tcaen, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraEmax", "", configlist->Camera8Emax, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraEmin", "", configlist->Camera8Emin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraXr", "", configlist->Camera8Xr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraGthread", "", configlist->Camera8Gthread, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraDoorin", "", configlist->Camera8Doorin, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraFcut", "", configlist->Camera8Fcut, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraBrate", "", configlist->Camera8Brate, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraBtol", "", configlist->Camera8Btol, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("Camera8", "CameraEthread", "", configlist->Camera8Ethread, 128, CONFIG_FILE_NAME);

		//-----------------------------------------------------Read Config------------------------------------------------------
															   //Global
		//----------------------------------------------------------------------------------------------------------------------
		GetPrivateProfileStringA("GlobalSettings", "AppAddr", "", configlist->AppAddr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "ServerAppAddr", "", configlist->ServerAppAddr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "DeviceNum", "", configlist->DeviceNum, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "Filepath", "", configlist->Filepath, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "Format", "", configlist->Format, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "RemoteServer", "", configlist->RemoteServer, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "ServerPort", "", configlist->ServerPort, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "ServerAddr", "", configlist->ServerAddr, 128, CONFIG_FILE_NAME);
		GetPrivateProfileStringA("GlobalSettings", "CSVFilepath", "", configlist->CSVFilepath, 128, CONFIG_FILE_NAME);
		//----------------------------------------------------------------------------------------------------------------------
	fclose(configFile);
	configFile = NULL;
	return;

}