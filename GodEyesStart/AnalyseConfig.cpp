#define _CRT_SECURE_NO_WARNINGS

#include "AnalyseConfig.h"

void AnalyseConfig::AnalyseConfigCamera0(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera0Function);// printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera0Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera0Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera0Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera0Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera0Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera0Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera0usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera0Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera0Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera0Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera0Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera0Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera0Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera0Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera0Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera0Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera0Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera0Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera0Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera0Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera0Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera0Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera0Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera0Doorin);

	sprintf(cmd, "%s%s%s", cmd, " -s ", "0");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera0Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera0Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera0Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera0Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);	
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera1(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera1Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera1Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera1Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera1Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera1Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera1Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera1Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera1Devid);
	sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera1usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera1Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera1Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera1Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera1Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera1Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera1Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera1Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera1Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera1Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera1Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera1Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera1Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera1Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera1Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera1Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera1Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera1Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "1");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera1Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera1Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera1Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera1Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera2(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera2Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera2Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera2Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera2Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera2Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera2Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera2Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera2usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera2Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera2Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera2Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera2Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera2Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera2Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera2Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera2Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera2Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera2Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera2Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera2Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera2Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera2Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera2Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera2Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera2Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "2");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera2Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera2Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera2Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera2Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera3(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera3Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera3Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera3Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera3Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera3Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera3Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera3Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera3usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera3Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera3Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera3Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera3Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera3Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera3Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera3Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera3Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera3Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera3Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera3Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera3Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera3Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera3Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera3Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera3Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera3Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "3");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera3Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera3Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera3Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera3Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera4(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera4Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera4Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera4Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera4Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera4Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera4Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera4Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera4usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera4Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera4Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera4Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera4Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera4Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera4Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera4Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera4Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera4Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera4Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera4Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera4Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera4Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera4Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera4Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera4Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera4Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "4");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera4Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera4Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera4Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera4Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera5(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera5Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera5Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera5Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera5Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera5Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera5Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera5Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera5usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera5Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera5Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera5Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera5Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera5Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera5Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera5Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera5Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera5Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera5Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera5Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera5Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera5Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera5Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera5Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera5Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera5Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "5");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera5Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera5Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera5Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera5Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera6(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera6Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera6Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera6Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera6Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera6Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera6Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera6Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera6usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera6Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera6Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera6Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera6Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera6Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera6Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera6Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera6Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera6Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera6Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera6Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera6Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera6Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera6Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera6Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera6Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera6Doorin);
	sprintf(cmd, "%s%s%s", cmd, " -s ", "6");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera6Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera6Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera6Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera6Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera7(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera7Function);// printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera7Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera7Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera7Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera7Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera7Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera7Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera7usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera7Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera7Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera7Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera7Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera7Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera7Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera7Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera7Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera7Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera7Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera7Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera7Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera7Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera7Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera7Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera7Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera7Doorin);

	sprintf(cmd, "%s%s%s", cmd, " -s ", "7");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera7Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera7Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera7Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera7Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigCamera8(const char* Appadr, ConfigList *configlist, char* cmd)
{
	sprintf(cmd, "%s%s%s", Appadr, " -f ", configlist->Camera8Function); //printf("%s", cmd);
	sprintf(cmd, "%s%s%s", cmd, " -e ", configlist->Camera8Exptime); //printf("%s", cmd);
	//sprintf(cmd, "%s%s%s", cmd, " --expauto ", configlist->Camera8Expauto);
	sprintf(cmd, "%s%s%s", cmd, " -g ", configlist->Camera8Gain);
	//sprintf(cmd, "%s%s%s", cmd, " --gainauto ", configlist->Camera8Gainauto);
	sprintf(cmd, "%s%s%s", cmd, " -r ", configlist->Camera8Frate);
	sprintf(cmd, "%s%s%s", cmd, " -v ", configlist->Camera8Devid);
	//sprintf(cmd, "%s%s%s", cmd, " --usrid ", configlist->Camera8usrid);
	sprintf(cmd, "%s%s%s", cmd, " --roih ", configlist->Camera8Roih);
	sprintf(cmd, "%s%s%s", cmd, " --roiw ", configlist->Camera8Roiw);
	sprintf(cmd, "%s%s%s", cmd, " --roix ", configlist->Camera8Roix);
	sprintf(cmd, "%s%s%s", cmd, " --roiy ", configlist->Camera8Roiy);
	//sprintf(cmd, "%s%s%s", cmd, " --stampsel ", configlist->Camera8Stampsel);
	//sprintf(cmd, "%s%s%s", cmd, " --stampon ", configlist->Camera8Stampon);
	//sprintf(cmd, "%s%s%s", cmd, " --tsele ", configlist->Camera8Tsele);
	sprintf(cmd, "%s%s%s", cmd, " --tmode ", configlist->Camera8Tmode);
	//sprintf(cmd, "%s%s%s", cmd, " --tsrc ", configlist->Camera8Tsrc);
	//sprintf(cmd, "%s%s%s", cmd, " --tacti ", configlist->Camera8Tacti);
	//sprintf(cmd, "%s%s%s", cmd, " --tdelay ", configlist->Camera8Tdelay);
	//sprintf(cmd, "%s%s%s", cmd, " --tcaen ", configlist->Camera8Tcaen);
	//sprintf(cmd, "%s%s%s", cmd, " -a ", configlist->Camera8Emax);
	//sprintf(cmd, "%s%s%s", cmd, " -i ", configlist->Camera8Emin);
	//sprintf(cmd, "%s%s%s", cmd, " -x ", configlist->Camera8Xr);
	//sprintf(cmd, "%s%s%s", cmd, " -t ", configlist->Camera8Gthread);
	//sprintf(cmd, "%s%s%s", cmd, " -d ", configlist->Camera8Doorin);

	sprintf(cmd, "%s%s%s", cmd, " -s ", "8");
	sprintf(cmd, "%s%s%s", cmd, " --rm ", configlist->RemoteServer);
	sprintf(cmd, "%s%s%s", cmd, " -c ", configlist->Camera8Fcut);
	//sprintf(cmd, "%s%s%s", cmd, " -b ", configlist->Camera8Brate);
	//sprintf(cmd, "%s%s%s", cmd, " -l ", configlist->Camera8Btol);
	//sprintf(cmd, "%s%s%s", cmd, " --ethread ", configlist->Camera8Ethread);
	//sprintf(cmd, "%s%s%s", cmd, " --format ", configlist->Format);
	sprintf(cmd, "%s%s%s", cmd, " --serveraddr ", configlist->ServerAddr);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->Filepath);
}
void AnalyseConfig::AnalyseConfigServer(const char* Serveraddr, ConfigList *configlist, char *cmd)
{

	sprintf(cmd, "%s%s%s", Serveraddr, " -s ", configlist->ServerPort);
	sprintf(cmd, "%s%s%s", cmd, " -p ", configlist->CSVFilepath);
	//sprintf(cmd, "%s%s%s",cmd, " --ssar ", configlist->ServerAddr);
}
