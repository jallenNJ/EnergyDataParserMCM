#include "EnumResolver.h"


int EnumResolver::stateNameToEnum(std::string input) {
	if (input.length() == 2) {
		input[0] = toupper(input[0]);
	}

	if (input == "AZ" || input == "Arizona") {
		return AZ;
	}
	else if (input == "CA") {
		return CA;
	}
	else if (input == "NM") {
		return NM;
	}
	else if (input == "TX") {
		return TX;
	}
	else {
		std::cerr << "INVALID PASS TO STATE NAME TO ENUM, input was " << input << std::endl;
		system("pause");
		exit(-98);

	}

}

std::string EnumResolver::stateEnumToName(int input) {
	switch (input) {
	case AZ:
		return "AZ";
	case CA:
		return "CA";
	case NM:
		return "NM";
	case TX:
		return "TX";
	default:
		std::cerr << "INVALID PASS TO ENUM TO STATE, input was " << input << std::endl;
		system("pause");
		exit(-96);
	}
}

int EnumResolver::codeNameToEnum(std::string input) {
	if (input == "ABICB") {
		return ABICB;
	}
	else if (input == "ABICP") {
		return ABICP;
	}
	else if (input == "ARICB") {
		return ARICB;
	}
	else if (input == "ARICD") {
		return ARICD;
	}
	else if (input == "ARICP") {
		return ARICP;
	}
	else if (input == "ARICV") {
		return ARICV;
	}
	else if (input == "ARTCB") {
		return ARTCB;
	}
	else if (input == "ARTCD") {
		return ARTCD;
	}
	else if (input == "ARTCP") {
		return ARTCP;
	}
	else if (input == "ARTCV") {
		return ARTCV;
	}
	else if (input == "ARTXB") {
		return ARTXB;
	}
	else if (input == "ARTXD") {
		return ARTXD;
	}
	else if (input == "ARTXP") {
		return ARTXP;
	}
	else if (input == "ARTXV") {
		return ARTXV;
	}
	else if (input == "AVACB") {
		return AVACB;
	}
	else if (input == "AVACD") {
		return AVACD;
	}
	else if (input == "AVACP") {
		return AVACP;
	}
	else if (input == "AVACV") {
		return AVACV;
	}
	else if (input == "AVTCB") {
		return AVTCB;
	}
	else if (input == "AVTCD") {
		return AVTCD;
	}
	else if (input == "AVTCP") {
		return AVTCP;
	}
	else if (input == "AVTCV") {
		return AVTCV;
	}
	else if (input == "AVTXB") {
		return AVTXB;
	}
	else if (input == "AVTXD") {
		return AVTXD;
	}
	else if (input == "AVTXP") {
		return AVTXP;
	}
	else if (input == "AVTXV") {
		return AVTXV;
	}
	else if (input == "BMTCB") {
		return BMTCB;
	}
	else if (input == "CLACB") {
		return CLACB;
	}
	else if (input == "CLACD") {
		return CLACD;
	}
	else if (input == "CLACK") {
		return CLACK;
	}
	else if (input == "CLACP") {
		return CLACP;
	}
	else if (input == "CLACV") {
		return CLACV;
	}
	else if (input == "CLCCB") {
		return CLCCB;
	}
	else if (input == "CLCCD") {
		return CLCCD;
	}
	else if (input == "CLCCP") {
		return CLCCP;
	}
	else if (input == "CLCCV") {
		return CLCCV;
	}
	else if (input == "CLEIB") {
		return CLEIB;
	}
	else if (input == "CLEID") {
		return CLEID;
	}
	else if (input == "CLEIK") {
		return CLEIK;
	}
	else if (input == "CLEIP") {
		return CLEIP;
	}
	else if (input == "CLEIV") {
		return CLEIV;
	}
	else if (input == "CLHCK") {
		return CLHCK;
	}
	else if (input == "CLICB") {
		return CLICB;
	}
	else if (input == "CLICD") {
		return CLICD;
	}
	else if (input == "CLICP") {
		return CLICP;
	}
	else if (input == "CLICV") {
		return CLICV;
	}
	else if (input == "CLKCB") {
		return CLKCB;
	}
	else if (input == "CLKCD") {
		return CLKCD;
	}
	else if (input == "CLKCK") {
		return CLKCK;
	}
	else if (input == "CLKCP") {
		return CLKCP;
	}
	else if (input == "CLKCV") {
		return CLKCV;
	}
	else if (input == "CLOCB") {
		return CLOCB;
	}
	else if (input == "CLOCD") {
		return CLOCD;
	}
	else if (input == "CLOCK") {
		return CLOCK;
	}
	else if (input == "CLOCP") {
		return CLOCP;
	}
	else if (input == "CLOCV") {
		return CLOCV;
	}
	else if (input == "CLOSB") {
		return CLOSB;
	}
	else if (input == "CLPRB") {
		return CLPRB;
	}
	else if (input == "CLPRK") {
		return CLPRK;
	}
	else if (input == "CLPRP") {
		return CLPRP;
	}
	else if (input == "CLRCB") {
		return CLRCB;
	}
	else if (input == "CLRCD") {
		return CLRCD;
	}
	else if (input == "CLRCP") {
		return CLRCP;
	}
	else if (input == "CLRCV") {
		return CLRCV;
	}
	else if (input == "CLRFB") {
		return CLRFB;
	}
	else if (input == "CLTCB") {
		return CLTCB;
	}
	else if (input == "CLTCD") {
		return CLTCD;
	}
	else if (input == "CLTCP") {
		return CLTCP;
	}
	else if (input == "CLTCV") {
		return CLTCV;
	}
	else if (input == "CLTXB") {
		return CLTXB;
	}
	else if (input == "CLTXD") {
		return CLTXD;
	}
	else if (input == "CLTXP") {
		return CLTXP;
	}
	else if (input == "CLTXV") {
		return CLTXV;
	}
	else if (input == "CLXCD") {
		return CLXCD;
	}
	else if (input == "CLXCV") {
		return CLXCV;
	}
	else if (input == "COICB") {
		return COICB;
	}
	else if (input == "COICP") {
		return COICP;
	}
	else if (input == "COPRK") {
		return COPRK;
	}
	else if (input == "DFACB") {
		return DFACB;
	}
	else if (input == "DFACD") {
		return DFACD;
	}
	else if (input == "DFACP") {
		return DFACP;
	}
	else if (input == "DFACV") {
		return DFACV;
	}
	else if (input == "DFCCB") {
		return DFCCB;
	}
	else if (input == "DFCCD") {
		return DFCCD;
	}
	else if (input == "DFCCP") {
		return DFCCP;
	}
	else if (input == "DFCCV") {
		return DFCCV;
	}
	else if (input == "DFEID") {
		return DFEID;
	}
	else if (input == "DFEIV") {
		return DFEIV;
	}
	else if (input == "DFICB") {
		return DFICB;
	}
	else if (input == "DFICD") {
		return DFICD;
	}
	else if (input == "DFICP") {
		return DFICP;
	}
	else if (input == "DFICV") {
		return DFICV;
	}
	else if (input == "DFISB") {
		return DFISB;
	}
	else if (input == "DFRCB") {
		return DFRCB;
	}
	else if (input == "DFRCD") {
		return DFRCD;
	}
	else if (input == "DFRCP") {
		return DFRCP;
	}
	else if (input == "DFRCV") {
		return DFRCV;
	}
	else if (input == "DFRFB") {
		return DFRFB;
	}
	else if (input == "DFTCB") {
		return DFTCB;
	}
	else if (input == "DFTCD") {
		return DFTCD;
	}
	else if (input == "DFTCP") {
		return DFTCP;
	}
	else if (input == "DFTCV") {
		return DFTCV;
	}
	else if (input == "DFTXB") {
		return DFTXB;
	}
	else if (input == "DFTXD") {
		return DFTXD;
	}
	else if (input == "DFTXP") {
		return DFTXP;
	}
	else if (input == "DFTXV") {
		return DFTXV;
	}
	else if (input == "DKEIB") {
		return DKEIB;
	}
	else if (input == "DKEID") {
		return DKEID;
	}
	else if (input == "DKEIP") {
		return DKEIP;
	}
	else if (input == "DKEIV") {
		return DKEIV;
	}
	else if (input == "ELEXB") {
		return ELEXB;
	}
	else if (input == "ELEXD") {
		return ELEXD;
	}
	else if (input == "ELEXP") {
		return ELEXP;
	}
	else if (input == "ELEXV") {
		return ELEXV;
	}
	else if (input == "ELIMB") {
		return ELIMB;
	}
	else if (input == "ELIMD") {
		return ELIMD;
	}
	else if (input == "ELIMP") {
		return ELIMP;
	}
	else if (input == "ELIMV") {
		return ELIMV;
	}
	else if (input == "ELISB") {
		return ELISB;
	}
	else if (input == "ELNIB") {
		return ELNIB;
	}
	else if (input == "ELNIP") {
		return ELNIP;
	}
	else if (input == "EMACB") {
		return EMACB;
	}
	if (input == "EMACV") {
		return EMACV;
	}
	else if (input == "EMCCB") {
		return EMCCB;
	}
	else if (input == "EMCCV") {
		return EMCCV;
	}
	else if (input == "EMFDB") {
		return EMFDB;
	}
	else if (input == "EMICB") {
		return EMICB;
	}
	else if (input == "EMICV") {
		return EMICV;
	}
	else if (input == "EMLCB") {
		return EMLCB;
	}
	else if (input == "EMTCB") {
		return EMTCB;
	}
	else if (input == "EMTCV") {
		return EMTCV;
	}
	else if (input == "ENACP") {
		return ENACP;
	}
	else if (input == "ENCCP") {
		return ENCCP;
	}
	else if (input == "ENICP") {
		return ENICP;
	}
	else if (input == "ENPRP") {
		return ENPRP;
	}
	else if (input == "ENTCP") {
		return ENTCP;
	}
	else if (input == "ESACB") {
		return ESACB;
	}
	else if (input == "ESACD") {
		return ESACD;
	}
	else if (input == "ESACP") {
		return ESACP;
	}
	else if (input == "ESACV") {
		return ESACV;
	}
	else if (input == "ESCCB") {
		return ESCCB;
	}
	else if (input == "ESCCD") {
		return ESCCD;
	}
	else if (input == "ESCCP") {
		return ESCCP;
	}
	else if (input == "ESCCV") {
		return ESCCV;
	}
	else if (input == "ESICB") {
		return ESICB;
	}
	else if (input == "ESICD") {
		return ESICD;
	}
	else if (input == "ESICP") {
		return ESICP;
	}
	else if (input == "ESICV") {
		return ESICV;
	}
	else if (input == "ESISB") {
		return ESISB;
	}
	else if (input == "ESRCB") {
		return ESRCB;
	}
	else if (input == "ESRCD") {
		return ESRCD;
	}
	else if (input == "ESRCP") {
		return ESRCP;
	}
	else if (input == "ESRCV") {
		return ESRCV;
	}
	else if (input == "ESRFB") {
		return ESRFB;
	}
	else if (input == "ESTCB") {
		return ESTCB;
	}
	else if (input == "ESTCD") {
		return ESTCD;
	}
	else if (input == "ESTCP") {
		return ESTCP;
	}
	else if (input == "ESTCV") {
		return ESTCV;
	}
	else if (input == "ESTXB") {
		return ESTXB;
	}
	else if (input == "ESTXD") {
		return ESTXD;
	}
	else if (input == "ESTXP") {
		return ESTXP;
	}
	else if (input == "ESTXV") {
		return ESTXV;
	}
	else if (input == "FFTCB") {
		return FFTCB;
	}
	else if (input == "FNICB") {
		return FNICB;
	}
	else if (input == "FNICD") {
		return FNICD;
	}
	else if (input == "FNICP") {
		return FNICP;
	}
	else if (input == "FNICV") {
		return FNICV;
	}
	else if (input == "FOICB") {
		return FOICB;
	}
	else if (input == "FOICD") {
		return FOICD;
	}
	else if (input == "FOICP") {
		return FOICP;
	}
	else if (input == "FOICV") {
		return FOICV;
	}
	else if (input == "FSICB") {
		return FSICB;
	}
	else if (input == "FSICD") {
		return FSICD;
	}
	else if (input == "FSICP") {
		return FSICP;
	}
	else if (input == "FSICV") {
		return FSICV;
	}
	else if (input == "GDPRV") {
		return GDPRV;
	}
	else if (input == "GDPRX") {
		return GDPRX;
	}
	else if (input == "GECCB") {
		return GECCB;
	}
	else if (input == "GEEGB") {
		return GEEGB;
	}
	else if (input == "GEEGP") {
		return GEEGP;
	}
	else if (input == "GEICB") {
		return GEICB;
	}
	else if (input == "GERCB") {
		return GERCB;
	}
	else if (input == "GETCB") {
		return GETCB;
	}
	else if (input == "GETXB") {
		return GETXB;
	}
	else if (input == "GETXV") {
		return GETXV;
	}
	else if (input == "GOCCB") {
		return GOCCB;
	}
	else if (input == "GORCB") {
		return GORCB;
	}
	else if (input == "HYCCB") {
		return HYCCB;
	}
	else if (input == "HYCCP") {
		return HYCCP;
	}
	else if (input == "HYEGB") {
		return HYEGB;
	}
	else if (input == "HYEGP") {
		return HYEGP;
	}
	else if (input == "HYICB") {
		return HYICB;
	}
	else if (input == "HYICP") {
		return HYICP;
	}
	else if (input == "HYTCB") {
		return HYTCB;
	}
	else if (input == "HYTCP") {
		return HYTCP;
	}
	else if (input == "HYTXB") {
		return HYTXB;
	}
	else if (input == "HYTXP") {
		return HYTXP;
	}
	else if (input == "HYTXV") {
		return HYTXV;
	}
	else if (input == "JFACB") {
		return JFACB;
	}
	else if (input == "JFACD") {
		return JFACD;
	}
	else if (input == "JFACP") {
		return JFACP;
	}
	else if (input == "JFACV") {
		return JFACV;
	}
	else if (input == "JFTCB") {
		return JFTCB;
	}
	else if (input == "JFTCD") {
		return JFTCD;
	}
	else if (input == "JFTCP") {
		return JFTCP;
	}
	else if (input == "JFTCV") {
		return JFTCV;
	}
	else if (input == "JFTXB") {
		return JFTXB;
	}
	else if (input == "JFTXD") {
		return JFTXD;
	}
	else if (input == "JFTXP") {
		return JFTXP;
	}
	else if (input == "JFTXV") {
		return JFTXV;
	}
	else if (input == "JKACB") {
		return JKACB;
	}
	else if (input == "JKACP") {
		return JKACP;
	}
	else if (input == "JKTCB") {
		return JKTCB;
	}
	else if (input == "JKTCP") {
		return JKTCP;
	}
	else if (input == "JNACB") {
		return JNACB;
	}
	else if (input == "JNACP") {
		return JNACP;
	}
	else if (input == "JNTCB") {
		return JNTCB;
	}
	else if (input == "JNTCP") {
		return JNTCP;
	}
	else if (input == "KSCCB") {
		return KSCCB;
	}
	else if (input == "KSCCD") {
		return KSCCD;
	}
	else if (input == "KSCCP") {
		return KSCCP;
	}
	else if (input == "KSCCV") {
		return KSCCV;
	}
	else if (input == "KSICB") {
		return KSICB;
	}
	else if (input == "KSICD") {
		return KSICD;
	}
	else if (input == "KSICP") {
		return KSICP;
	}
	else if (input == "KSICV") {
		return KSICV;
	}
	else if (input == "KSRCB") {
		return KSRCB;
	}
	else if (input == "KSRCD") {
		return KSRCD;
	}
	else if (input == "KSRCP") {
		return KSRCP;
	}
	else if (input == "KSRCV") {
		return KSRCV;
	}
	else if (input == "KSTCB") {
		return KSTCB;
	}
	else if (input == "KSTCD") {
		return KSTCD;
	}
	else if (input == "KSTCP") {
		return KSTCP;
	}
	else if (input == "KSTCV") {
		return KSTCV;
	}
	else if (input == "KSTXB") {
		return KSTXB;
	}
	else if (input == "KSTXD") {
		return KSTXD;
	}
	else if (input == "KSTXP") {
		return KSTXP;
	}
	else if (input == "KSTXV") {
		return KSTXV;
	}
	else if (input == "LGACB") {
		return LGACB;
	}
	else if (input == "LGACD") {
		return LGACD;
	}
	else if (input == "LGACP") {
		return LGACP;
	}
	else if (input == "LGACV") {
		return LGACV;
	}
	else if (input == "LGCCB") {
		return LGCCB;
	}
	else if (input == "LGCCD") {
		return LGCCD;
	}
	if (input == "LGCCP") {
		return LGCCP;
	}
	else if (input == "LGCCV") {
		return LGCCV;
	}
	else if (input == "LGICB") {
		return LGICB;
	}
	else if (input == "LGICD") {
		return LGICD;
	}
	else if (input == "LGICP") {
		return LGICP;
	}
	else if (input == "LGICV") {
		return LGICV;
	}
	else if (input == "LGISB") {
		return LGISB;
	}
	else if (input == "LGRCB") {
		return LGRCB;
	}
	else if (input == "LGRCD") {
		return LGRCD;
	}
	else if (input == "LGRCP") {
		return LGRCP;
	}
	else if (input == "LGRCV") {
		return LGRCV;
	}
	else if (input == "LGRFB") {
		return LGRFB;
	}
	else if (input == "LGTCB") {
		return LGTCB;
	}
	else if (input == "LGTCD") {
		return LGTCD;
	}
	else if (input == "LGTCP") {
		return LGTCP;
	}
	else if (input == "LGTCV") {
		return LGTCV;
	}
	else if (input == "LGTXB") {
		return LGTXB;
	}
	else if (input == "LGTXD") {
		return LGTXD;
	}
	else if (input == "LGTXP") {
		return LGTXP;
	}
	else if (input == "LGTXV") {
		return LGTXV;
	}
	else if (input == "LOACB") {
		return LOACB;
	}
	else if (input == "LOCCB") {
		return LOCCB;
	}
	else if (input == "LOICB") {
		return LOICB;
	}
	else if (input == "LORCB") {
		return LORCB;
	}
	else if (input == "LOTCB") {
		return LOTCB;
	}
	else if (input == "LOTXB") {
		return LOTXB;
	}
	else if (input == "LUACB") {
		return LUACB;
	}
	else if (input == "LUACD") {
		return LUACD;
	}
	else if (input == "LUACP") {
		return LUACP;
	}
	else if (input == "LUACV") {
		return LUACV;
	}
	else if (input == "LUICB") {
		return LUICB;
	}
	else if (input == "LUICD") {
		return LUICD;
	}
	else if (input == "LUICP") {
		return LUICP;
	}
	else if (input == "LUICV") {
		return LUICV;
	}
	else if (input == "LUTCB") {
		return LUTCB;
	}
	else if (input == "LUTCD") {
		return LUTCD;
	}
	else if (input == "LUTCP") {
		return LUTCP;
	}
	else if (input == "LUTCV") {
		return LUTCV;
	}
	else if (input == "LUTXB") {
		return LUTXB;
	}
	else if (input == "LUTXD") {
		return LUTXD;
	}
	else if (input == "LUTXP") {
		return LUTXP;
	}
	else if (input == "LUTXV") {
		return LUTXV;
	}
	else if (input == "MBICB") {
		return MBICB;
	}
	else if (input == "MBICP") {
		return MBICP;
	}
	else if (input == "MGACB") {
		return MGACB;
	}
	else if (input == "MGACD") {
		return MGACD;
	}
	else if (input == "MGACP") {
		return MGACP;
	}
	else if (input == "MGACV") {
		return MGACV;
	}
	else if (input == "MGCCB") {
		return MGCCB;
	}
	else if (input == "MGCCD") {
		return MGCCD;
	}
	else if (input == "MGCCP") {
		return MGCCP;
	}
	else if (input == "MGCCV") {
		return MGCCV;
	}
	else if (input == "MGICB") {
		return MGICB;
	}
	else if (input == "MGICD") {
		return MGICD;
	}
	else if (input == "MGICP") {
		return MGICP;
	}
	else if (input == "MGICV") {
		return MGICV;
	}
	else if (input == "MGTCB") {
		return MGTCB;
	}
	else if (input == "MGTCD") {
		return MGTCD;
	}
	else if (input == "MGTCP") {
		return MGTCP;
	}
	else if (input == "MGTCV") {
		return MGTCV;
	}
	else if (input == "MGTXB") {
		return MGTXB;
	}
	else if (input == "MGTXD") {
		return MGTXD;
	}
	else if (input == "MGTXP") {
		return MGTXP;
	}
	else if (input == "MGTXV") {
		return MGTXV;
	}
	else if (input == "MMTCB") {
		return MMTCB;
	}
	else if (input == "MSICB") {
		return MSICB;
	}
	else if (input == "MSICD") {
		return MSICD;
	}
	else if (input == "MSICP") {
		return MSICP;
	}
	else if (input == "MSICV") {
		return MSICV;
	}
	else if (input == "NAICB") {
		return NAICB;
	}
	else if (input == "NAICP") {
		return NAICP;
	}
	else if (input == "NGACB") {
		return NGACB;
	}
	else if (input == "NGACD") {
		return NGACD;
	}
	else if (input == "NGACP") {
		return NGACP;
	}
	else if (input == "NGACV") {
		return NGACV;
	}
	else if (input == "NGCCB") {
		return NGCCB;
	}
	else if (input == "NGCCD") {
		return NGCCD;
	}
	else if (input == "NGCCP") {
		return NGCCP;
	}
	else if (input == "NGCCV") {
		return NGCCV;
	}
	else if (input == "NGEIB") {
		return NGEIB;
	}
	else if (input == "NGEID") {
		return NGEID;
	}
	else if (input == "NGEIK") {
		return NGEIK;
	}
	else if (input == "NGEIP") {
		return NGEIP;
	}
	else if (input == "NGEIV") {
		return NGEIV;
	}
	else if (input == "NGICB") {
		return NGICB;
	}
	else if (input == "NGICD") {
		return NGICD;
	}
	else if (input == "NGICP") {
		return NGICP;
	}
	else if (input == "NGICV") {
		return NGICV;
	}
	else if (input == "NGISB") {
		return NGISB;
	}
	else if (input == "NGLPB") {
		return NGLPB;
	}
	else if (input == "NGLPP") {
		return NGLPP;
	}
	else if (input == "NGMPB") {
		return NGMPB;
	}
	else if (input == "NGMPK") {
		return NGMPK;
	}
	else if (input == "NGMPP") {
		return NGMPP;
	}
	else if (input == "NGPZB") {
		return NGPZB;
	}
	else if (input == "NGPZP") {
		return NGPZP;
	}
	else if (input == "NGRCB") {
		return NGRCB;
	}
	else if (input == "NGRCD") {
		return NGRCD;
	}
	else if (input == "NGRCP") {
		return NGRCP;
	}
	else if (input == "NGRCV") {
		return NGRCV;
	}
	else if (input == "NGRFB") {
		return NGRFB;
	}
	else if (input == "NGTCB") {
		return NGTCB;
	}
	else if (input == "NGTCD") {
		return NGTCD;
	}
	else if (input == "NGTCK") {
		return NGTCK;
	}
	else if (input == "NGTCP") {
		return NGTCP;
	}
	else if (input == "NGTCV") {
		return NGTCV;
	}
	else if (input == "NGTXB") {
		return NGTXB;
	}
	else if (input == "NGTXD") {
		return NGTXD;
	}
	else if (input == "NGTXK") {
		return NGTXK;
	}
	else if (input == "NGTXP") {
		return NGTXP;
	}
	else if (input == "NGTXV") {
		return NGTXV;
	}
	else if (input == "NGVHB") {
		return NGVHB;
	}
	else if (input == "NGVHP") {
		return NGVHP;
	}
	else if (input == "NNACB") {
		return NNACB;
	}
	else if (input == "NNCCB") {
		return NNCCB;
	}
	else if (input == "NNEIB") {
		return NNEIB;
	}
	else if (input == "NNICB") {
		return NNICB;
	}
	else if (input == "NNRCB") {
		return NNRCB;
	}
	else if (input == "NNTCB") {
		return NNTCB;
	}
	else if (input == "NUEGB") {
		return NUEGB;
	}
	else if (input == "NUEGD") {
		return NUEGD;
	}
	else if (input == "NUEGP") {
		return NUEGP;
	}
	if (input == "NUEGV") {
		return NUEGV;
	}
	else if (input == "NUETB") {
		return NUETB;
	}
	else if (input == "NUETD") {
		return NUETD;
	}
	else if (input == "NUETP") {
		return NUETP;
	}
	else if (input == "NUETV") {
		return NUETV;
	}
	else if (input == "P1ICB") {
		return P1ICB;
	}
	else if (input == "P1ICD") {
		return P1ICD;
	}
	else if (input == "P1ICP") {
		return P1ICP;
	}
	else if (input == "P1ICV") {
		return P1ICV;
	}
	else if (input == "P1TCB") {
		return P1TCB;
	}
	else if (input == "P1TCD") {
		return P1TCD;
	}
	else if (input == "P1TCP") {
		return P1TCP;
	}
	else if (input == "P1TCV") {
		return P1TCV;
	}
	else if (input == "P1TXB") {
		return P1TXB;
	}
	else if (input == "P1TXD") {
		return P1TXD;
	}
	else if (input == "P1TXP") {
		return P1TXP;
	}
	else if (input == "P1TXV") {
		return P1TXV;
	}
	else if (input == "P5RFB") {
		return P5RFB;
	}
	else if (input == "PAACB") {
		return PAACB;
	}
	else if (input == "PAACD") {
		return PAACD;
	}
	else if (input == "PAACP") {
		return PAACP;
	}
	else if (input == "PAACV") {
		return PAACV;
	}
	else if (input == "PACCB") {
		return PACCB;
	}
	else if (input == "PACCD") {
		return PACCD;
	}
	else if (input == "PACCP") {
		return PACCP;
	}
	else if (input == "PACCV") {
		return PACCV;
	}
	else if (input == "PAEIB") {
		return PAEIB;
	}
	else if (input == "PAEID") {
		return PAEID;
	}
	else if (input == "PAEIP") {
		return PAEIP;
	}
	else if (input == "PAEIV") {
		return PAEIV;
	}
	else if (input == "PAICB") {
		return PAICB;
	}
	else if (input == "PAICD") {
		return PAICD;
	}
	else if (input == "PAICP") {
		return PAICP;
	}
	else if (input == "PAICV") {
		return PAICV;
	}
	else if (input == "PAPRB") {
		return PAPRB;
	}
	else if (input == "PAPRP") {
		return PAPRP;
	}
	else if (input == "PARCB") {
		return PARCB;
	}
	else if (input == "PARCD") {
		return PARCD;
	}
	else if (input == "PARCP") {
		return PARCP;
	}
	else if (input == "PARCV") {
		return PARCV;
	}
	else if (input == "PATCB") {
		return PATCB;
	}
	else if (input == "PATCD") {
		return PATCD;
	}
	else if (input == "PATCP") {
		return PATCP;
	}
	else if (input == "PATCV") {
		return PATCV;
	}
	else if (input == "PATXB") {
		return PATXB;
	}
	else if (input == "PATXD") {
		return PATXD;
	}
	else if (input == "PATXP") {
		return PATXP;
	}
	else if (input == "PATXV") {
		return PATXV;
	}
	else if (input == "PCCCB") {
		return PCCCB;
	}
	else if (input == "PCCCD") {
		return PCCCD;
	}
	else if (input == "PCCCP") {
		return PCCCP;
	}
	else if (input == "PCCCV") {
		return PCCCV;
	}
	else if (input == "PCEIB") {
		return PCEIB;
	}
	else if (input == "PCEID") {
		return PCEID;
	}
	else if (input == "PCEIP") {
		return PCEIP;
	}
	else if (input == "PCEIV") {
		return PCEIV;
	}
	else if (input == "PCICB") {
		return PCICB;
	}
	else if (input == "PCICD") {
		return PCICD;
	}
	else if (input == "PCICP") {
		return PCICP;
	}
	else if (input == "PCICV") {
		return PCICV;
	}
	else if (input == "PCISB") {
		return PCISB;
	}
	else if (input == "PCRFB") {
		return PCRFB;
	}
	else if (input == "PCTCB") {
		return PCTCB;
	}
	else if (input == "PCTCD") {
		return PCTCD;
	}
	else if (input == "PCTCP") {
		return PCTCP;
	}
	else if (input == "PCTCV") {
		return PCTCV;
	}
	else if (input == "PEACD") {
		return PEACD;
	}
	else if (input == "PEACV") {
		return PEACV;
	}
	else if (input == "PECCD") {
		return PECCD;
	}
	else if (input == "PECCV") {
		return PECCV;
	}
	else if (input == "PEEID") {
		return PEEID;
	}
	else if (input == "PEEIV") {
		return PEEIV;
	}
	else if (input == "PEICD") {
		return PEICD;
	}
	else if (input == "PEICV") {
		return PEICV;
	}
	else if (input == "PERCD") {
		return PERCD;
	}
	else if (input == "PERCV") {
		return PERCV;
	}
	else if (input == "PETCD") {
		return PETCD;
	}
	else if (input == "PETCV") {
		return PETCV;
	}
	else if (input == "PETXD") {
		return PETXD;
	}
	else if (input == "PETXV") {
		return PETXV;
	}
	else if (input == "PLICB") {
		return PLICB;
	}
	else if (input == "PLICP") {
		return PLICP;
	}
	else if (input == "PMTCB") {
		return PMTCB;
	}
	else if (input == "POICB") {
		return POICB;
	}
	else if (input == "POICD") {
		return POICD;
	}
	else if (input == "POICP") {
		return POICP;
	}
	else if (input == "POICV") {
		return POICV;
	}
	else if (input == "POTCB") {
		return POTCB;
	}
	else if (input == "POTCD") {
		return POTCD;
	}
	else if (input == "POTCP") {
		return POTCP;
	}
	else if (input == "POTCV") {
		return POTCV;
	}
	else if (input == "POTXB") {
		return POTXB;
	}
	else if (input == "POTXD") {
		return POTXD;
	}
	else if (input == "POTXP") {
		return POTXP;
	}
	else if (input == "POTXV") {
		return POTXV;
	}
	else if (input == "PPICB") {
		return PPICB;
	}
	else if (input == "PPICP") {
		return PPICP;
	}
	else if (input == "REPRB") {
		return REPRB;
	}
	else if (input == "RETCB") {
		return RETCB;
	}
	else if (input == "RFACB") {
		return RFACB;
	}
	else if (input == "RFACD") {
		return RFACD;
	}
	else if (input == "RFACP") {
		return RFACP;
	}
	else if (input == "RFACV") {
		return RFACV;
	}
	else if (input == "RFCCB") {
		return RFCCB;
	}
	else if (input == "RFCCD") {
		return RFCCD;
	}
	else if (input == "RFCCP") {
		return RFCCP;
	}
	else if (input == "RFCCV") {
		return RFCCV;
	}
	else if (input == "RFEIB") {
		return RFEIB;
	}
	else if (input == "RFEID") {
		return RFEID;
	}
	else if (input == "RFEIP") {
		return RFEIP;
	}
	else if (input == "RFEIV") {
		return RFEIV;
	}
	else if (input == "RFICB") {
		return RFICB;
	}
	else if (input == "RFICD") {
		return RFICD;
	}
	else if (input == "RFICP") {
		return RFICP;
	}
	else if (input == "RFICV") {
		return RFICV;
	}
	else if (input == "RFISB") {
		return RFISB;
	}
	else if (input == "RFRFB") {
		return RFRFB;
	}
	else if (input == "RFTCB") {
		return RFTCB;
	}
	else if (input == "RFTCD") {
		return RFTCD;
	}
	else if (input == "RFTCP") {
		return RFTCP;
	}
	else if (input == "RFTCV") {
		return RFTCV;
	}
	else if (input == "RFTXB") {
		return RFTXB;
	}
	if (input == "RFTXD") {
		return RFTXD;
	}
	else if (input == "RFTXP") {
		return RFTXP;
	}
	else if (input == "RFTXV") {
		return RFTXV;
	}
	else if (input == "ROPRB") {
		return ROPRB;
	}
	else if (input == "SFCCB") {
		return SFCCB;
	}
	else if (input == "SFEIB") {
		return SFEIB;
	}
	else if (input == "SFINB") {
		return SFINB;
	}
	else if (input == "SFRCB") {
		return SFRCB;
	}
	else if (input == "SFTCB") {
		return SFTCB;
	}
	else if (input == "SGICB") {
		return SGICB;
	}
	else if (input == "SGICP") {
		return SGICP;
	}
	else if (input == "SNICB") {
		return SNICB;
	}
	else if (input == "SNICD") {
		return SNICD;
	}
	else if (input == "SNICP") {
		return SNICP;
	}
	else if (input == "SNICV") {
		return SNICV;
	}
	else if (input == "SOEGB") {
		return SOEGB;
	}
	else if (input == "SOEGP") {
		return SOEGP;
	}
	else if (input == "SOHCB") {
		return SOHCB;
	}
	else if (input == "SOTCB") {
		return SOTCB;
	}
	else if (input == "SOTXB") {
		return SOTXB;
	}
	else if (input == "TEACB") {
		return TEACB;
	}
	else if (input == "TEACD") {
		return TEACD;
	}
	else if (input == "TEACV") {
		return TEACV;
	}
	else if (input == "TECCB") {
		return TECCB;
	}
	else if (input == "TECCD") {
		return TECCD;
	}
	else if (input == "TECCV") {
		return TECCV;
	}
	else if (input == "TEEIB") {
		return TEEIB;
	}
	else if (input == "TEGDS") {
		return TEGDS;
	}
	else if (input == "TEICB") {
		return TEICB;
	}
	else if (input == "TEICD") {
		return TEICD;
	}
	else if (input == "TEICV") {
		return TEICV;
	}
	else if (input == "TEPFB") {
		return TEPFB;
	}
	else if (input == "TEPRB") {
		return TEPRB;
	}
	else if (input == "TERCB") {
		return TERCB;
	}
	else if (input == "TERCD") {
		return TERCD;
	}
	else if (input == "TERCV") {
		return TERCV;
	}
	else if (input == "TERFB") {
		return TERFB;
	}
	else if (input == "TETCB") {
		return TETCB;
	}
	else if (input == "TETCD") {
		return TETCD;
	}
	else if (input == "TETCV") {
		return TETCV;
	}
	else if (input == "TETGR") {
		return TETGR;
	}
	else if (input == "TETPB") {
		return TETPB;
	}
	else if (input == "TETPV") {
		return TETPV;
	}
	else if (input == "TETXB") {
		return TETXB;
	}
	else if (input == "TETXD") {
		return TETXD;
	}
	else if (input == "TETXV") {
		return TETXV;
	}
	else if (input == "TNACB") {
		return TNACB;
	}
	else if (input == "TNCCB") {
		return TNCCB;
	}
	else if (input == "TNICB") {
		return TNICB;
	}
	else if (input == "TNRCB") {
		return TNRCB;
	}
	else if (input == "TNSCB") {
		return TNSCB;
	}
	else if (input == "TNTXB") {
		return TNTXB;
	}
	else if (input == "TPOPP") {
		return TPOPP;
	}
	else if (input == "UOICB") {
		return UOICB;
	}
	else if (input == "UOICP") {
		return UOICP;
	}
	else if (input == "USICB") {
		return USICB;
	}
	else if (input == "USICP") {
		return USICP;
	}
	else if (input == "WDCCB") {
		return WDCCB;
	}
	else if (input == "WDEIB") {
		return WDEIB;
	}
	else if (input == "WDICB") {
		return WDICB;
	}
	else if (input == "WDRCB") {
		return WDRCB;
	}
	else if (input == "WDRCD") {
		return WDRCD;
	}
	else if (input == "WDRCP") {
		return WDRCP;
	}
	else if (input == "WDRCV") {
		return WDRCV;
	}
	else if (input == "WDRSB") {
		return WDRSB;
	}
	else if (input == "WDRXB") {
		return WDRXB;
	}
	else if (input == "WSCCB") {
		return WSCCB;
	}
	else if (input == "WSEIB") {
		return WSEIB;
	}
	else if (input == "WSICB") {
		return WSICB;
	}
	else if (input == "WWCCB") {
		return WWCCB;
	}
	else if (input == "WWCCD") {
		return WWCCD;
	}
	else if (input == "WWCCV") {
		return WWCCV;
	}
	else if (input == "WWCSB") {
		return WWCSB;
	}
	else if (input == "WWCXB") {
		return WWCXB;
	}
	else if (input == "WWEIB") {
		return WWEIB;
	}
	else if (input == "WWEID") {
		return WWEID;
	}
	else if (input == "WWEIV") {
		return WWEIV;
	}
	else if (input == "WWICB") {
		return WWICB;
	}
	else if (input == "WWICD") {
		return WWICD;
	}
	else if (input == "WWICV") {
		return WWICV;
	}
	else if (input == "WWISB") {
		return WWISB;
	}
	else if (input == "WWIXB") {
		return WWIXB;
	}
	else if (input == "WWTCB") {
		return WWTCB;
	}
	else if (input == "WWTCD") {
		return WWTCD;
	}
	else if (input == "WWTCV") {
		return WWTCV;
	}
	else if (input == "WWTXB") {
		return WWTXB;
	}
	else if (input == "WWTXD") {
		return WWTXD;
	}
	else if (input == "WWTXV") {
		return WWTXV;
	}
	else if (input == "WXICB") {
		return WXICB;
	}
	else if (input == "WXICD") {
		return WXICD;
	}
	else if (input == "WXICP") {
		return WXICP;
	}
	else if (input == "WXICV") {
		return WXICV;
	}
	else if (input == "WYEGB") {
		return WYEGB;
	}
	else if (input == "WYEGP") {
		return WYEGP;
	}
	else if (input == "WYTCB") {
		return WYTCB;
	}
	else {
		std::cerr << "INVALID INPUT TO ENUM RESOULTION FUNCTION, input was " << input << std::endl;
		system("pause");
		exit (-99);
	}
}


std::string EnumResolver::codeEnumToName(int input) {
	switch (input) {
	case ABICB:
		return "ABICB";
	case ABICP:
		return "ABICP";
	case ARICB:
		return "ARICB";
	case ARICD:
		return "ARICD";
	case ARICP:
		return "ARICP";
	case ARICV:
		return "ARICV";
	case ARTCB:
		return "ARTCB";
	case ARTCD:
		return "ARTCD";
	case ARTCP:
		return "ARTCP";
	case ARTCV:
		return "ARTCV";
	case ARTXB:
		return "ARTXB";
	case ARTXD:
		return "ARTXD";
	case ARTXP:
		return "ARTXP";
	case ARTXV:
		return "ARTXV";
	case AVACB:
		return "AVACB";
	case AVACD:
		return "AVACD";
	case AVACP:
		return "AVACP";
	case AVACV:
		return "AVACV";
	case AVTCB:
		return "AVTCB";
	case AVTCD:
		return "AVTCD";
	case AVTCP:
		return "AVTCP";
	case AVTCV:
		return "AVTCV";
	case AVTXB:
		return "AVTXB";
	case AVTXD:
		return "AVTXD";
	case AVTXP:
		return "AVTXP";
	case AVTXV:
		return "AVTXV";
	case BMTCB:
		return "BMTCB";
	case CLACB:
		return "CLACB";
	case CLACD:
		return "CLACD";
	case CLACK:
		return "CLACK";
	case CLACP:
		return "CLACP";
	case CLACV:
		return "CLACV";
	case CLCCB:
		return "CLCCB";
	case CLCCD:
		return "CLCCD";
	case CLCCP:
		return "CLCCP";
	case CLCCV:
		return "CLCCV";
	case CLEIB:
		return "CLEIB";
	case CLEID:
		return "CLEID";
	case CLEIK:
		return "CLEIK";
	case CLEIP:
		return "CLEIP";
	case CLEIV:
		return "CLEIV";
	case CLHCK:
		return "CLHCK";
	case CLICB:
		return "CLICB";
	case CLICD:
		return "CLICD";
	case CLICP:
		return "CLICP";
	case CLICV:
		return "CLICV";
	case CLKCB:
		return "CLKCB";
	case CLKCD:
		return "CLKCD";
	case CLKCK:
		return "CLKCK";
	case CLKCP:
		return "CLKCP";
	case CLKCV:
		return "CLKCV";
	case CLOCB:
		return "CLOCB";
	case CLOCD:
		return "CLOCD";
	case CLOCK:
		return "CLOCK";
	case CLOCP:
		return "CLOCP";
	case CLOCV:
		return "CLOCV";
	case CLOSB:
		return "CLOSB";
	case CLPRB:
		return "CLPRB";
	case CLPRK:
		return "CLPRK";
	case CLPRP:
		return "CLPRP";
	case CLRCB:
		return "CLRCB";
	case CLRCD:
		return "CLRCD";
	case CLRCP:
		return "CLRCP";
	case CLRCV:
		return "CLRCV";
	case CLRFB:
		return "CLRFB";
	case CLTCB:
		return "CLTCB";
	case CLTCD:
		return "CLTCD";
	case CLTCP:
		return "CLTCP";
	case CLTCV:
		return "CLTCV";
	case CLTXB:
		return "CLTXB";
	case CLTXD:
		return "CLTXD";
	case CLTXP:
		return "CLTXP";
	case CLTXV:
		return "CLTXV";
	case CLXCD:
		return "CLXCD";
	case CLXCV:
		return "CLXCV";
	case COICB:
		return "COICB";
	case COICP:
		return "COICP";
	case COPRK:
		return "COPRK";
	case DFACB:
		return "DFACB";
	case DFACD:
		return "DFACD";
	case DFACP:
		return "DFACP";
	case DFACV:
		return "DFACV";
	case DFCCB:
		return "DFCCB";
	case DFCCD:
		return "DFCCD";
	case DFCCP:
		return "DFCCP";
	case DFCCV:
		return "DFCCV";
	case DFEID:
		return "DFEID";
	case DFEIV:
		return "DFEIV";
	case DFICB:
		return "DFICB";
	case DFICD:
		return "DFICD";
	case DFICP:
		return "DFICP";
	case DFICV:
		return "DFICV";
	case DFISB:
		return "DFISB";
	case DFRCB:
		return "DFRCB";
	case DFRCD:
		return "DFRCD";
	case DFRCP:
		return "DFRCP";
	case DFRCV:
		return "DFRCV";
	case DFRFB:
		return "DFRFB";
	case DFTCB:
		return "DFTCB";
	case DFTCD:
		return "DFTCD";
	case DFTCP:
		return "DFTCP";
	case DFTCV:
		return "DFTCV";
	case DFTXB:
		return "DFTXB";
	case DFTXD:
		return "DFTXD";
	case DFTXP:
		return "DFTXP";
	case DFTXV:
		return "DFTXV";
	case DKEIB:
		return "DKEIB";
	case DKEID:
		return "DKEID";
	case DKEIP:
		return "DKEIP";
	case DKEIV:
		return "DKEIV";
	case ELEXB:
		return "ELEXB";
	case ELEXD:
		return "ELEXD";
	case ELEXP:
		return "ELEXP";
	case ELEXV:
		return "ELEXV";
	case ELIMB:
		return "ELIMB";
	case ELIMD:
		return "ELIMD";
	case ELIMP:
		return "ELIMP";
	case ELIMV:
		return "ELIMV";
	case ELISB:
		return "ELISB";
	case ELNIB:
		return "ELNIB";
	case ELNIP:
		return "ELNIP";
	case EMACB:
		return "EMACB";
	case EMACV:
		return "EMACV";
	case EMCCB:
		return "EMCCB";
	case EMCCV:
		return "EMCCV";
	case EMFDB:
		return "EMFDB";
	case EMICB:
		return "EMICB";
	case EMICV:
		return "EMICV";
	case EMLCB:
		return "EMLCB";
	case EMTCB:
		return "EMTCB";
	case EMTCV:
		return "EMTCV";
	case ENACP:
		return "ENACP";
	case ENCCP:
		return "ENCCP";
	case ENICP:
		return "ENICP";
	case ENPRP:
		return "ENPRP";
	case ENTCP:
		return "ENTCP";
	case ESACB:
		return "ESACB";
	case ESACD:
		return "ESACD";
	case ESACP:
		return "ESACP";
	case ESACV:
		return "ESACV";
	case ESCCB:
		return "ESCCB";
	case ESCCD:
		return "ESCCD";
	case ESCCP:
		return "ESCCP";
	case ESCCV:
		return "ESCCV";
	case ESICB:
		return "ESICB";
	case ESICD:
		return "ESICD";
	case ESICP:
		return "ESICP";
	case ESICV:
		return "ESICV";
	case ESISB:
		return "ESISB";
	case ESRCB:
		return "ESRCB";
	case ESRCD:
		return "ESRCD";
	case ESRCP:
		return "ESRCP";
	case ESRCV:
		return "ESRCV";
	case ESRFB:
		return "ESRFB";
	case ESTCB:
		return "ESTCB";
	case ESTCD:
		return "ESTCD";
	case ESTCP:
		return "ESTCP";
	case ESTCV:
		return "ESTCV";
	case ESTXB:
		return "ESTXB";
	case ESTXD:
		return "ESTXD";
	case ESTXP:
		return "ESTXP";
	case ESTXV:
		return "ESTXV";
	case FFTCB:
		return "FFTCB";
	case FNICB:
		return "FNICB";
	case FNICD:
		return "FNICD";
	case FNICP:
		return "FNICP";
	case FNICV:
		return "FNICV";
	case FOICB:
		return "FOICB";
	case FOICD:
		return "FOICD";
	case FOICP:
		return "FOICP";
	case FOICV:
		return "FOICV";
	case FSICB:
		return "FSICB";
	case FSICD:
		return "FSICD";
	case FSICP:
		return "FSICP";
	case FSICV:
		return "FSICV";
	case GDPRV:
		return "GDPRV";
	case GDPRX:
		return "GDPRX";
	case GECCB:
		return "GECCB";
	case GEEGB:
		return "GEEGB";
	case GEEGP:
		return "GEEGP";
	case GEICB:
		return "GEICB";
	case GERCB:
		return "GERCB";
	case GETCB:
		return "GETCB";
	case GETXB:
		return "GETXB";
	case GETXV:
		return "GETXV";
	case GOCCB:
		return "GOCCB";
	case GORCB:
		return "GORCB";
	case HYCCB:
		return "HYCCB";
	case HYCCP:
		return "HYCCP";
	case HYEGB:
		return "HYEGB";
	case HYEGP:
		return "HYEGP";
	case HYICB:
		return "HYICB";
	case HYICP:
		return "HYICP";
	case HYTCB:
		return "HYTCB";
	case HYTCP:
		return "HYTCP";
	case HYTXB:
		return "HYTXB";
	case HYTXP:
		return "HYTXP";
	case HYTXV:
		return "HYTXV";
	case JFACB:
		return "JFACB";
	case JFACD:
		return "JFACD";
	case JFACP:
		return "JFACP";
	case JFACV:
		return "JFACV";
	case JFTCB:
		return "JFTCB";
	case JFTCD:
		return "JFTCD";
	case JFTCP:
		return "JFTCP";
	case JFTCV:
		return "JFTCV";
	case JFTXB:
		return "JFTXB";
	case JFTXD:
		return "JFTXD";
	case JFTXP:
		return "JFTXP";
	case JFTXV:
		return "JFTXV";
	case JKACB:
		return "JKACB";
	case JKACP:
		return "JKACP";
	case JKTCB:
		return "JKTCB";
	case JKTCP:
		return "JKTCP";
	case JNACB:
		return "JNACB";
	case JNACP:
		return "JNACP";
	case JNTCB:
		return "JNTCB";
	case JNTCP:
		return "JNTCP";
	case KSCCB:
		return "KSCCB";
	case KSCCD:
		return "KSCCD";
	case KSCCP:
		return "KSCCP";
	case KSCCV:
		return "KSCCV";
	case KSICB:
		return "KSICB";
	case KSICD:
		return "KSICD";
	case KSICP:
		return "KSICP";
	case KSICV:
		return "KSICV";
	case KSRCB:
		return "KSRCB";
	case KSRCD:
		return "KSRCD";
	case KSRCP:
		return "KSRCP";
	case KSRCV:
		return "KSRCV";
	case KSTCB:
		return "KSTCB";
	case KSTCD:
		return "KSTCD";
	case KSTCP:
		return "KSTCP";
	case KSTCV:
		return "KSTCV";
	case KSTXB:
		return "KSTXB";
	case KSTXD:
		return "KSTXD";
	case KSTXP:
		return "KSTXP";
	case KSTXV:
		return "KSTXV";
	case LGACB:
		return "LGACB";
	case LGACD:
		return "LGACD";
	case LGACP:
		return "LGACP";
	case LGACV:
		return "LGACV";
	case LGCCB:
		return "LGCCB";
	case LGCCD:
		return "LGCCD";
	case LGCCP:
		return "LGCCP";
	case LGCCV:
		return "LGCCV";
	case LGICB:
		return "LGICB";
	case LGICD:
		return "LGICD";
	case LGICP:
		return "LGICP";
	case LGICV:
		return "LGICV";
	case LGISB:
		return "LGISB";
	case LGRCB:
		return "LGRCB";
	case LGRCD:
		return "LGRCD";
	case LGRCP:
		return "LGRCP";
	case LGRCV:
		return "LGRCV";
	case LGRFB:
		return "LGRFB";
	case LGTCB:
		return "LGTCB";
	case LGTCD:
		return "LGTCD";
	case LGTCP:
		return "LGTCP";
	case LGTCV:
		return "LGTCV";
	case LGTXB:
		return "LGTXB";
	case LGTXD:
		return "LGTXD";
	case LGTXP:
		return "LGTXP";
	case LGTXV:
		return "LGTXV";
	case LOACB:
		return "LOACB";
	case LOCCB:
		return "LOCCB";
	case LOICB:
		return "LOICB";
	case LORCB:
		return "LORCB";
	case LOTCB:
		return "LOTCB";
	case LOTXB:
		return "LOTXB";
	case LUACB:
		return "LUACB";
	case LUACD:
		return "LUACD";
	case LUACP:
		return "LUACP";
	case LUACV:
		return "LUACV";
	case LUICB:
		return "LUICB";
	case LUICD:
		return "LUICD";
	case LUICP:
		return "LUICP";
	case LUICV:
		return "LUICV";
	case LUTCB:
		return "LUTCB";
	case LUTCD:
		return "LUTCD";
	case LUTCP:
		return "LUTCP";
	case LUTCV:
		return "LUTCV";
	case LUTXB:
		return "LUTXB";
	case LUTXD:
		return "LUTXD";
	case LUTXP:
		return "LUTXP";
	case LUTXV:
		return "LUTXV";
	case MBICB:
		return "MBICB";
	case MBICP:
		return "MBICP";
	case MGACB:
		return "MGACB";
	case MGACD:
		return "MGACD";
	case MGACP:
		return "MGACP";
	case MGACV:
		return "MGACV";
	case MGCCB:
		return "MGCCB";
	case MGCCD:
		return "MGCCD";
	case MGCCP:
		return "MGCCP";
	case MGCCV:
		return "MGCCV";
	case MGICB:
		return "MGICB";
	case MGICD:
		return "MGICD";
	case MGICP:
		return "MGICP";
	case MGICV:
		return "MGICV";
	case MGTCB:
		return "MGTCB";
	case MGTCD:
		return "MGTCD";
	case MGTCP:
		return "MGTCP";
	case MGTCV:
		return "MGTCV";
	case MGTXB:
		return "MGTXB";
	case MGTXD:
		return "MGTXD";
	case MGTXP:
		return "MGTXP";
	case MGTXV:
		return "MGTXV";
	case MMTCB:
		return "MMTCB";
	case MSICB:
		return "MSICB";
	case MSICD:
		return "MSICD";
	case MSICP:
		return "MSICP";
	case MSICV:
		return "MSICV";
	case NAICB:
		return "NAICB";
	case NAICP:
		return "NAICP";
	case NGACB:
		return "NGACB";
	case NGACD:
		return "NGACD";
	case NGACP:
		return "NGACP";
	case NGACV:
		return "NGACV";
	case NGCCB:
		return "NGCCB";
	case NGCCD:
		return "NGCCD";
	case NGCCP:
		return "NGCCP";
	case NGCCV:
		return "NGCCV";
	case NGEIB:
		return "NGEIB";
	case NGEID:
		return "NGEID";
	case NGEIK:
		return "NGEIK";
	case NGEIP:
		return "NGEIP";
	case NGEIV:
		return "NGEIV";
	case NGICB:
		return "NGICB";
	case NGICD:
		return "NGICD";
	case NGICP:
		return "NGICP";
	case NGICV:
		return "NGICV";
	case NGISB:
		return "NGISB";
	case NGLPB:
		return "NGLPB";
	case NGLPP:
		return "NGLPP";
	case NGMPB:
		return "NGMPB";
	case NGMPK:
		return "NGMPK";
	case NGMPP:
		return "NGMPP";
	case NGPZB:
		return "NGPZB";
	case NGPZP:
		return "NGPZP";
	case NGRCB:
		return "NGRCB";
	case NGRCD:
		return "NGRCD";
	case NGRCP:
		return "NGRCP";
	case NGRCV:
		return "NGRCV";
	case NGRFB:
		return "NGRFB";
	case NGTCB:
		return "NGTCB";
	case NGTCD:
		return "NGTCD";
	case NGTCK:
		return "NGTCK";
	case NGTCP:
		return "NGTCP";
	case NGTCV:
		return "NGTCV";
	case NGTXB:
		return "NGTXB";
	case NGTXD:
		return "NGTXD";
	case NGTXK:
		return "NGTXK";
	case NGTXP:
		return "NGTXP";
	case NGTXV:
		return "NGTXV";
	case NGVHB:
		return "NGVHB";
	case NGVHP:
		return "NGVHP";
	case NNACB:
		return "NNACB";
	case NNCCB:
		return "NNCCB";
	case NNEIB:
		return "NNEIB";
	case NNICB:
		return "NNICB";
	case NNRCB:
		return "NNRCB";
	case NNTCB:
		return "NNTCB";
	case NUEGB:
		return "NUEGB";
	case NUEGD:
		return "NUEGD";
	case NUEGP:
		return "NUEGP";
	case NUEGV:
		return "NUEGV";
	case NUETB:
		return "NUETB";
	case NUETD:
		return "NUETD";
	case NUETP:
		return "NUETP";
	case NUETV:
		return "NUETV";
	case P1ICB:
		return "P1ICB";
	case P1ICD:
		return "P1ICD";
	case P1ICP:
		return "P1ICP";
	case P1ICV:
		return "P1ICV";
	case P1TCB:
		return "P1TCB";
	case P1TCD:
		return "P1TCD";
	case P1TCP:
		return "P1TCP";
	case P1TCV:
		return "P1TCV";
	case P1TXB:
		return "P1TXB";
	case P1TXD:
		return "P1TXD";
	case P1TXP:
		return "P1TXP";
	case P1TXV:
		return "P1TXV";
	case P5RFB:
		return "P5RFB";
	case PAACB:
		return "PAACB";
	case PAACD:
		return "PAACD";
	case PAACP:
		return "PAACP";
	case PAACV:
		return "PAACV";
	case PACCB:
		return "PACCB";
	case PACCD:
		return "PACCD";
	case PACCP:
		return "PACCP";
	case PACCV:
		return "PACCV";
	case PAEIB:
		return "PAEIB";
	case PAEID:
		return "PAEID";
	case PAEIP:
		return "PAEIP";
	case PAEIV:
		return "PAEIV";
	case PAICB:
		return "PAICB";
	case PAICD:
		return "PAICD";
	case PAICP:
		return "PAICP";
	case PAICV:
		return "PAICV";
	case PAPRB:
		return "PAPRB";
	case PAPRP:
		return "PAPRP";
	case PARCB:
		return "PARCB";
	case PARCD:
		return "PARCD";
	case PARCP:
		return "PARCP";
	case PARCV:
		return "PARCV";
	case PATCB:
		return "PATCB";
	case PATCD:
		return "PATCD";
	case PATCP:
		return "PATCP";
	case PATCV:
		return "PATCV";
	case PATXB:
		return "PATXB";
	case PATXD:
		return "PATXD";
	case PATXP:
		return "PATXP";
	case PATXV:
		return "PATXV";
	case PCCCB:
		return "PCCCB";
	case PCCCD:
		return "PCCCD";
	case PCCCP:
		return "PCCCP";
	case PCCCV:
		return "PCCCV";
	case PCEIB:
		return "PCEIB";
	case PCEID:
		return "PCEID";
	case PCEIP:
		return "PCEIP";
	case PCEIV:
		return "PCEIV";
	case PCICB:
		return "PCICB";
	case PCICD:
		return "PCICD";
	case PCICP:
		return "PCICP";
	case PCICV:
		return "PCICV";
	case PCISB:
		return "PCISB";
	case PCRFB:
		return "PCRFB";
	case PCTCB:
		return "PCTCB";
	case PCTCD:
		return "PCTCD";
	case PCTCP:
		return "PCTCP";
	case PCTCV:
		return "PCTCV";
	case PEACD:
		return "PEACD";
	case PEACV:
		return "PEACV";
	case PECCD:
		return "PECCD";
	case PECCV:
		return "PECCV";
	case PEEID:
		return "PEEID";
	case PEEIV:
		return "PEEIV";
	case PEICD:
		return "PEICD";
	case PEICV:
		return "PEICV";
	case PERCD:
		return "PERCD";
	case PERCV:
		return "PERCV";
	case PETCD:
		return "PETCD";
	case PETCV:
		return "PETCV";
	case PETXD:
		return "PETXD";
	case PETXV:
		return "PETXV";
	case PLICB:
		return "PLICB";
	case PLICP:
		return "PLICP";
	case PMTCB:
		return "PMTCB";
	case POICB:
		return "POICB";
	case POICD:
		return "POICD";
	case POICP:
		return "POICP";
	case POICV:
		return "POICV";
	case POTCB:
		return "POTCB";
	case POTCD:
		return "POTCD";
	case POTCP:
		return "POTCP";
	case POTCV:
		return "POTCV";
	case POTXB:
		return "POTXB";
	case POTXD:
		return "POTXD";
	case POTXP:
		return "POTXP";
	case POTXV:
		return "POTXV";
	case PPICB:
		return "PPICB";
	case PPICP:
		return "PPICP";
	case REPRB:
		return "REPRB";
	case RETCB:
		return "RETCB";
	case RFACB:
		return "RFACB";
	case RFACD:
		return "RFACD";
	case RFACP:
		return "RFACP";
	case RFACV:
		return "RFACV";
	case RFCCB:
		return "RFCCB";
	case RFCCD:
		return "RFCCD";
	case RFCCP:
		return "RFCCP";
	case RFCCV:
		return "RFCCV";
	case RFEIB:
		return "RFEIB";
	case RFEID:
		return "RFEID";
	case RFEIP:
		return "RFEIP";
	case RFEIV:
		return "RFEIV";
	case RFICB:
		return "RFICB";
	case RFICD:
		return "RFICD";
	case RFICP:
		return "RFICP";
	case RFICV:
		return "RFICV";
	case RFISB:
		return "RFISB";
	case RFRFB:
		return "RFRFB";
	case RFTCB:
		return "RFTCB";
	case RFTCD:
		return "RFTCD";
	case RFTCP:
		return "RFTCP";
	case RFTCV:
		return "RFTCV";
	case RFTXB:
		return "RFTXB";
	case RFTXD:
		return "RFTXD";
	case RFTXP:
		return "RFTXP";
	case RFTXV:
		return "RFTXV";
	case ROPRB:
		return "ROPRB";
	case SFCCB:
		return "SFCCB";
	case SFEIB:
		return "SFEIB";
	case SFINB:
		return "SFINB";
	case SFRCB:
		return "SFRCB";
	case SFTCB:
		return "SFTCB";
	case SGICB:
		return "SGICB";
	case SGICP:
		return "SGICP";
	case SNICB:
		return "SNICB";
	case SNICD:
		return "SNICD";
	case SNICP:
		return "SNICP";
	case SNICV:
		return "SNICV";
	case SOEGB:
		return "SOEGB";
	case SOEGP:
		return "SOEGP";
	case SOHCB:
		return "SOHCB";
	case SOTCB:
		return "SOTCB";
	case SOTXB:
		return "SOTXB";
	case TEACB:
		return "TEACB";
	case TEACD:
		return "TEACD";
	case TEACV:
		return "TEACV";
	case TECCB:
		return "TECCB";
	case TECCD:
		return "TECCD";
	case TECCV:
		return "TECCV";
	case TEEIB:
		return "TEEIB";
	case TEGDS:
		return "TEGDS";
	case TEICB:
		return "TEICB";
	case TEICD:
		return "TEICD";
	case TEICV:
		return "TEICV";
	case TEPFB:
		return "TEPFB";
	case TEPRB:
		return "TEPRB";
	case TERCB:
		return "TERCB";
	case TERCD:
		return "TERCD";
	case TERCV:
		return "TERCV";
	case TERFB:
		return "TERFB";
	case TETCB:
		return "TETCB";
	case TETCD:
		return "TETCD";
	case TETCV:
		return "TETCV";
	case TETGR:
		return "TETGR";
	case TETPB:
		return "TETPB";
	case TETPV:
		return "TETPV";
	case TETXB:
		return "TETXB";
	case TETXD:
		return "TETXD";
	case TETXV:
		return "TETXV";
	case TNACB:
		return "TNACB";
	case TNCCB:
		return "TNCCB";
	case TNICB:
		return "TNICB";
	case TNRCB:
		return "TNRCB";
	case TNSCB:
		return "TNSCB";
	case TNTXB:
		return "TNTXB";
	case TPOPP:
		return "TPOPP";
	case UOICB:
		return "UOICB";
	case UOICP:
		return "UOICP";
	case USICB:
		return "USICB";
	case USICP:
		return "USICP";
	case WDCCB:
		return "WDCCB";
	case WDEIB:
		return "WDEIB";
	case WDICB:
		return "WDICB";
	case WDRCB:
		return "WDRCB";
	case WDRCD:
		return "WDRCD";
	case WDRCP:
		return "WDRCP";
	case WDRCV:
		return "WDRCV";
	case WDRSB:
		return "WDRSB";
	case WDRXB:
		return "WDRXB";
	case WSCCB:
		return "WSCCB";
	case WSEIB:
		return "WSEIB";
	case WSICB:
		return "WSICB";
	case WWCCB:
		return "WWCCB";
	case WWCCD:
		return "WWCCD";
	case WWCCV:
		return "WWCCV";
	case WWCSB:
		return "WWCSB";
	case WWCXB:
		return "WWCXB";
	case WWEIB:
		return "WWEIB";
	case WWEID:
		return "WWEID";
	case WWEIV:
		return "WWEIV";
	case WWICB:
		return "WWICB";
	case WWICD:
		return "WWICD";
	case WWICV:
		return "WWICV";
	case WWISB:
		return "WWISB";
	case WWIXB:
		return "WWIXB";
	case WWTCB:
		return "WWTCB";
	case WWTCD:
		return "WWTCD";
	case WWTCV:
		return "WWTCV";
	case WWTXB:
		return "WWTXB";
	case WWTXD:
		return "WWTXD";
	case WWTXV:
		return "WWTXV";
	case WXICB:
		return "WXICB";
	case WXICD:
		return "WXICD";
	case WXICP:
		return "WXICP";
	case WXICV:
		return "WXICV";
	case WYEGB:
		return "WYEGB";
	case WYEGP:
		return "WYEGP";
	case WYTCB:
		return "WYTCB";
	default:
		std::cerr << "INVALID ENUM PASSED TO ENUM TO STRING, input " << input << std::endl;
		exit(-97);
	}
}
