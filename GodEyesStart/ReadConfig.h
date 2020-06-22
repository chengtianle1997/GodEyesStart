#pragma once


#include "string.h"
#include "stdio.h"
#include "iostream"
#include "fstream"



const size_t MAX_LEN = 128;

typedef struct {

	char AppAddr[MAX_LEN];
	char ServerAppAddr[MAX_LEN];
	char DeviceNum[MAX_LEN];

	char Camera0Function[MAX_LEN];
	char Camera0Exptime[MAX_LEN];
	char Camera0Expauto[MAX_LEN];
	char Camera0Gain[MAX_LEN];
	char Camera0Gainauto[MAX_LEN];
	char Camera0Frate[MAX_LEN];
	char Camera0Devid[MAX_LEN];
	char Camera0usrid[MAX_LEN];
	char Camera0Roih[MAX_LEN];
	char Camera0Roiw[MAX_LEN];
	char Camera0Roix[MAX_LEN];
	char Camera0Roiy[MAX_LEN];
	char Camera0Stampsel[MAX_LEN];
	char Camera0Stampon[MAX_LEN];
	char Camera0Tsele[MAX_LEN];
	char Camera0Tmode[MAX_LEN];
	char Camera0Tsrc[MAX_LEN];
	char Camera0Tacti[MAX_LEN];
	char Camera0Tdelay[MAX_LEN];
	char Camera0Tcaen[MAX_LEN];
	char Camera0Bmm[MAX_LEN];
	char Camera0Phi[MAX_LEN];
	char Camera0Uo[MAX_LEN];
	char Camera0Vo[MAX_LEN];
	char Camera0Fx[MAX_LEN];
	char Camera0Fy[MAX_LEN];
	char Camera0K1[MAX_LEN];
	char Camera0K2[MAX_LEN];
	char Camera0P1[MAX_LEN];
	char Camera0P2[MAX_LEN];
	char Camera0Emax[MAX_LEN];
	char Camera0Emin[MAX_LEN];
	char Camera0Xr[MAX_LEN];;
	char Camera0Gthread[MAX_LEN];
	char Camera0Doorin[MAX_LEN];
	char Camera0Fcut[MAX_LEN];
	char Camera0Brate[MAX_LEN];
	char Camera0Btol[MAX_LEN];
	char Camera0Ethread[MAX_LEN];

	char Camera1Function[MAX_LEN];
	char Camera1Exptime[MAX_LEN];
	char Camera1Expauto[MAX_LEN];
	char Camera1Gain[MAX_LEN];
	char Camera1Gainauto[MAX_LEN];
	char Camera1Frate[MAX_LEN];
	char Camera1Devid[MAX_LEN];
	char Camera1usrid[MAX_LEN];
	char Camera1Roih[MAX_LEN];
	char Camera1Roiw[MAX_LEN];
	char Camera1Roix[MAX_LEN];
	char Camera1Roiy[MAX_LEN];
	char Camera1Stampsel[MAX_LEN];
	char Camera1Stampon[MAX_LEN];
	char Camera1Tsele[MAX_LEN];
	char Camera1Tmode[MAX_LEN];
	char Camera1Tsrc[MAX_LEN];
	char Camera1Tacti[MAX_LEN];
	char Camera1Tdelay[MAX_LEN];
	char Camera1Tcaen[MAX_LEN];
	char Camera1Bmm[MAX_LEN];
	char Camera1Phi[MAX_LEN];
	char Camera1Uo[MAX_LEN];
	char Camera1Vo[MAX_LEN];
	char Camera1Fx[MAX_LEN];
	char Camera1Fy[MAX_LEN];
	char Camera1K1[MAX_LEN];
	char Camera1K2[MAX_LEN];
	char Camera1P1[MAX_LEN];
	char Camera1P2[MAX_LEN];
	char Camera1Emax[MAX_LEN];
	char Camera1Emin[MAX_LEN];
	char Camera1Xr[MAX_LEN];;
	char Camera1Gthread[MAX_LEN];
	char Camera1Doorin[MAX_LEN];
	char Camera1Fcut[MAX_LEN];
	char Camera1Brate[MAX_LEN];
	char Camera1Btol[MAX_LEN];
	char Camera1Ethread[MAX_LEN];

	char Camera2Function[MAX_LEN];
	char Camera2Exptime[MAX_LEN];
	char Camera2Expauto[MAX_LEN];
	char Camera2Gain[MAX_LEN];
	char Camera2Gainauto[MAX_LEN];
	char Camera2Frate[MAX_LEN];
	char Camera2Devid[MAX_LEN];
	char Camera2usrid[MAX_LEN];
	char Camera2Roih[MAX_LEN];
	char Camera2Roiw[MAX_LEN];
	char Camera2Roix[MAX_LEN];
	char Camera2Roiy[MAX_LEN];
	char Camera2Stampsel[MAX_LEN];
	char Camera2Stampon[MAX_LEN];
	char Camera2Tsele[MAX_LEN];
	char Camera2Tmode[MAX_LEN];
	char Camera2Tsrc[MAX_LEN];
	char Camera2Tacti[MAX_LEN];
	char Camera2Tdelay[MAX_LEN];
	char Camera2Tcaen[MAX_LEN];
	char Camera2Bmm[MAX_LEN];
	char Camera2Phi[MAX_LEN];
	char Camera2Uo[MAX_LEN];
	char Camera2Vo[MAX_LEN];
	char Camera2Fx[MAX_LEN];
	char Camera2Fy[MAX_LEN];
	char Camera2K1[MAX_LEN];
	char Camera2K2[MAX_LEN];
	char Camera2P1[MAX_LEN];
	char Camera2P2[MAX_LEN];
	char Camera2Emax[MAX_LEN];
	char Camera2Emin[MAX_LEN];
	char Camera2Xr[MAX_LEN];;
	char Camera2Gthread[MAX_LEN];
	char Camera2Doorin[MAX_LEN];
	char Camera2Fcut[MAX_LEN];
	char Camera2Brate[MAX_LEN];
	char Camera2Btol[MAX_LEN];
	char Camera2Ethread[MAX_LEN];

	char Camera3Function[MAX_LEN];
	char Camera3Exptime[MAX_LEN];
	char Camera3Expauto[MAX_LEN];
	char Camera3Gain[MAX_LEN];
	char Camera3Gainauto[MAX_LEN];
	char Camera3Frate[MAX_LEN];
	char Camera3Devid[MAX_LEN];
	char Camera3usrid[MAX_LEN];
	char Camera3Roih[MAX_LEN];
	char Camera3Roiw[MAX_LEN];
	char Camera3Roix[MAX_LEN];
	char Camera3Roiy[MAX_LEN];
	char Camera3Stampsel[MAX_LEN];
	char Camera3Stampon[MAX_LEN];
	char Camera3Tsele[MAX_LEN];
	char Camera3Tmode[MAX_LEN];
	char Camera3Tsrc[MAX_LEN];
	char Camera3Tacti[MAX_LEN];
	char Camera3Tdelay[MAX_LEN];
	char Camera3Tcaen[MAX_LEN];
	char Camera3Bmm[MAX_LEN];
	char Camera3Phi[MAX_LEN];
	char Camera3Uo[MAX_LEN];
	char Camera3Vo[MAX_LEN];
	char Camera3Fx[MAX_LEN];
	char Camera3Fy[MAX_LEN];
	char Camera3K1[MAX_LEN];
	char Camera3K2[MAX_LEN];
	char Camera3P1[MAX_LEN];
	char Camera3P2[MAX_LEN];
	char Camera3Emax[MAX_LEN];
	char Camera3Emin[MAX_LEN];
	char Camera3Xr[MAX_LEN];;
	char Camera3Gthread[MAX_LEN];
	char Camera3Doorin[MAX_LEN];
	char Camera3Fcut[MAX_LEN];
	char Camera3Brate[MAX_LEN];
	char Camera3Btol[MAX_LEN];
	char Camera3Ethread[MAX_LEN];

	char Camera4Function[MAX_LEN];
	char Camera4Exptime[MAX_LEN];
	char Camera4Expauto[MAX_LEN];
	char Camera4Gain[MAX_LEN];
	char Camera4Gainauto[MAX_LEN];
	char Camera4Frate[MAX_LEN];
	char Camera4Devid[MAX_LEN];
	char Camera4usrid[MAX_LEN];
	char Camera4Roih[MAX_LEN];
	char Camera4Roiw[MAX_LEN];
	char Camera4Roix[MAX_LEN];
	char Camera4Roiy[MAX_LEN];
	char Camera4Stampsel[MAX_LEN];
	char Camera4Stampon[MAX_LEN];
	char Camera4Tsele[MAX_LEN];
	char Camera4Tmode[MAX_LEN];
	char Camera4Tsrc[MAX_LEN];
	char Camera4Tacti[MAX_LEN];
	char Camera4Tdelay[MAX_LEN];
	char Camera4Tcaen[MAX_LEN];
	char Camera4Bmm[MAX_LEN];
	char Camera4Phi[MAX_LEN];
	char Camera4Uo[MAX_LEN];
	char Camera4Vo[MAX_LEN];
	char Camera4Fx[MAX_LEN];
	char Camera4Fy[MAX_LEN];
	char Camera4K1[MAX_LEN];
	char Camera4K2[MAX_LEN];
	char Camera4P1[MAX_LEN];
	char Camera4P2[MAX_LEN];
	char Camera4Emax[MAX_LEN];
	char Camera4Emin[MAX_LEN];
	char Camera4Xr[MAX_LEN];;
	char Camera4Gthread[MAX_LEN];
	char Camera4Doorin[MAX_LEN];
	char Camera4Fcut[MAX_LEN];
	char Camera4Brate[MAX_LEN];
	char Camera4Btol[MAX_LEN];
	char Camera4Ethread[MAX_LEN];

	char Camera5Function[MAX_LEN];
	char Camera5Exptime[MAX_LEN];
	char Camera5Expauto[MAX_LEN];
	char Camera5Gain[MAX_LEN];
	char Camera5Gainauto[MAX_LEN];
	char Camera5Frate[MAX_LEN];
	char Camera5Devid[MAX_LEN];
	char Camera5usrid[MAX_LEN];
	char Camera5Roih[MAX_LEN];
	char Camera5Roiw[MAX_LEN];
	char Camera5Roix[MAX_LEN];
	char Camera5Roiy[MAX_LEN];
	char Camera5Stampsel[MAX_LEN];
	char Camera5Stampon[MAX_LEN];
	char Camera5Tsele[MAX_LEN];
	char Camera5Tmode[MAX_LEN];
	char Camera5Tsrc[MAX_LEN];
	char Camera5Tacti[MAX_LEN];
	char Camera5Tdelay[MAX_LEN];
	char Camera5Tcaen[MAX_LEN];
	char Camera5Bmm[MAX_LEN];
	char Camera5Phi[MAX_LEN];
	char Camera5Uo[MAX_LEN];
	char Camera5Vo[MAX_LEN];
	char Camera5Fx[MAX_LEN];
	char Camera5Fy[MAX_LEN];
	char Camera5K1[MAX_LEN];
	char Camera5K2[MAX_LEN];
	char Camera5P1[MAX_LEN];
	char Camera5P2[MAX_LEN];
	char Camera5Emax[MAX_LEN];
	char Camera5Emin[MAX_LEN];
	char Camera5Xr[MAX_LEN];;
	char Camera5Gthread[MAX_LEN];
	char Camera5Doorin[MAX_LEN];
	char Camera5Fcut[MAX_LEN];
	char Camera5Brate[MAX_LEN];
	char Camera5Btol[MAX_LEN];
	char Camera5Ethread[MAX_LEN];

	char Camera6Function[MAX_LEN];
	char Camera6Exptime[MAX_LEN];
	char Camera6Expauto[MAX_LEN];
	char Camera6Gain[MAX_LEN];
	char Camera6Gainauto[MAX_LEN];
	char Camera6Frate[MAX_LEN];
	char Camera6Devid[MAX_LEN];
	char Camera6usrid[MAX_LEN];
	char Camera6Roih[MAX_LEN];
	char Camera6Roiw[MAX_LEN];
	char Camera6Roix[MAX_LEN];
	char Camera6Roiy[MAX_LEN];
	char Camera6Stampsel[MAX_LEN];
	char Camera6Stampon[MAX_LEN];
	char Camera6Tsele[MAX_LEN];
	char Camera6Tmode[MAX_LEN];
	char Camera6Tsrc[MAX_LEN];
	char Camera6Tacti[MAX_LEN];
	char Camera6Tdelay[MAX_LEN];
	char Camera6Tcaen[MAX_LEN];
	char Camera6Bmm[MAX_LEN];
	char Camera6Phi[MAX_LEN];
	char Camera6Uo[MAX_LEN];
	char Camera6Vo[MAX_LEN];
	char Camera6Fx[MAX_LEN];
	char Camera6Fy[MAX_LEN];
	char Camera6K1[MAX_LEN];
	char Camera6K2[MAX_LEN];
	char Camera6P1[MAX_LEN];
	char Camera6P2[MAX_LEN];
	char Camera6Emax[MAX_LEN];
	char Camera6Emin[MAX_LEN];
	char Camera6Xr[MAX_LEN];;
	char Camera6Gthread[MAX_LEN];
	char Camera6Doorin[MAX_LEN];
	char Camera6Fcut[MAX_LEN];
	char Camera6Brate[MAX_LEN];
	char Camera6Btol[MAX_LEN];
	char Camera6Ethread[MAX_LEN];

	char Camera7Function[MAX_LEN];
	char Camera7Exptime[MAX_LEN];
	char Camera7Expauto[MAX_LEN];
	char Camera7Gain[MAX_LEN];
	char Camera7Gainauto[MAX_LEN];
	char Camera7Frate[MAX_LEN];
	char Camera7Devid[MAX_LEN];
	char Camera7usrid[MAX_LEN];
	char Camera7Roih[MAX_LEN];
	char Camera7Roiw[MAX_LEN];
	char Camera7Roix[MAX_LEN];
	char Camera7Roiy[MAX_LEN];
	char Camera7Stampsel[MAX_LEN];
	char Camera7Stampon[MAX_LEN];
	char Camera7Tsele[MAX_LEN];
	char Camera7Tmode[MAX_LEN];
	char Camera7Tsrc[MAX_LEN];
	char Camera7Tacti[MAX_LEN];
	char Camera7Tdelay[MAX_LEN];
	char Camera7Tcaen[MAX_LEN];
	char Camera7Bmm[MAX_LEN];
	char Camera7Phi[MAX_LEN];
	char Camera7Uo[MAX_LEN];
	char Camera7Vo[MAX_LEN];
	char Camera7Fx[MAX_LEN];
	char Camera7Fy[MAX_LEN];
	char Camera7K1[MAX_LEN];
	char Camera7K2[MAX_LEN];
	char Camera7P1[MAX_LEN];
	char Camera7P2[MAX_LEN];
	char Camera7Emax[MAX_LEN];
	char Camera7Emin[MAX_LEN];
	char Camera7Xr[MAX_LEN];;
	char Camera7Gthread[MAX_LEN];
	char Camera7Doorin[MAX_LEN];
	char Camera7Fcut[MAX_LEN];
	char Camera7Brate[MAX_LEN];
	char Camera7Btol[MAX_LEN];
	char Camera7Ethread[MAX_LEN];

	char Camera8Function[MAX_LEN];
	char Camera8Exptime[MAX_LEN];
	char Camera8Expauto[MAX_LEN];
	char Camera8Gain[MAX_LEN];
	char Camera8Gainauto[MAX_LEN];
	char Camera8Frate[MAX_LEN];
	char Camera8Devid[MAX_LEN];
	char Camera8usrid[MAX_LEN];
	char Camera8Roih[MAX_LEN];
	char Camera8Roiw[MAX_LEN];
	char Camera8Roix[MAX_LEN];
	char Camera8Roiy[MAX_LEN];
	char Camera8Stampsel[MAX_LEN];
	char Camera8Stampon[MAX_LEN];
	char Camera8Tsele[MAX_LEN];
	char Camera8Tmode[MAX_LEN];
	char Camera8Tsrc[MAX_LEN];
	char Camera8Tacti[MAX_LEN];
	char Camera8Tdelay[MAX_LEN];
	char Camera8Tcaen[MAX_LEN];
	char Camera8Bmm[MAX_LEN];
	char Camera8Phi[MAX_LEN];
	char Camera8Uo[MAX_LEN];
	char Camera8Vo[MAX_LEN];
	char Camera8Fx[MAX_LEN];
	char Camera8Fy[MAX_LEN];
	char Camera8K1[MAX_LEN];
	char Camera8K2[MAX_LEN];
	char Camera8P1[MAX_LEN];
	char Camera8P2[MAX_LEN];
	char Camera8Emax[MAX_LEN];
	char Camera8Emin[MAX_LEN];
	char Camera8Xr[MAX_LEN];;
	char Camera8Gthread[MAX_LEN];
	char Camera8Doorin[MAX_LEN];
	char Camera8Fcut[MAX_LEN];
	char Camera8Brate[MAX_LEN];
	char Camera8Btol[MAX_LEN];
	char Camera8Ethread[MAX_LEN];
	char Filepath[MAX_LEN];
	char CSVFilepath[MAX_LEN];
	char Format[MAX_LEN];
	char RemoteServer[MAX_LEN];
	char ServerPort[MAX_LEN];
	char ServerAddr[MAX_LEN];

}ConfigList;


void ReadFile(FILE *configFile, ConfigList *configlist);

