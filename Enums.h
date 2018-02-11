#ifndef ENUMS_H
#define ENUMS_H
//const char* FIRSTCODE = "ABICB";


//All Codes in file
enum codes {
	ABICB = 0, ABICP, ARICB, ARICD, ARICP, ARICV, ARTCB, ARTCD, ARTCP, ARTCV, ARTXB, ARTXD, ARTXP,
	ARTXV, AVACB, AVACD, AVACP, AVACV, AVTCB, AVTCD, AVTCP, AVTCV, AVTXB, AVTXD, AVTXP, AVTXV, BMTCB, CLACB,
	CLACD, CLACK, CLACP, CLACV, CLCCB, CLCCD, CLCCP, CLCCV, CLEIB, CLEID, CLEIK, CLEIP, CLEIV, CLHCK, CLICB,
	CLICD, CLICP, CLICV, CLKCB, CLKCD, CLKCK, CLKCP, CLKCV, CLOCB, CLOCD, CLOCK, CLOCP, CLOCV, CLOSB, CLPRB,
	CLPRK, CLPRP, CLRCB, CLRCD, CLRCP, CLRCV, CLRFB, CLTCB, CLTCD, CLTCP, CLTCV, CLTXB, CLTXD, CLTXP, CLTXV,
	CLXCD, CLXCV, COICB, COICP, COPRK, DFACB, DFACD, DFACP, DFACV, DFCCB, DFCCD, DFCCP, DFCCV, DFEID, DFEIV,
	DFICB, DFICD, DFICP, DFICV, DFISB, DFRCB, DFRCD, DFRCP, DFRCV, DFRFB, DFTCB, DFTCD, DFTCP, DFTCV, DFTXB,
	DFTXD, DFTXP, DFTXV, DKEIB, DKEID, DKEIP, DKEIV, ELEXB, ELEXD, ELEXP, ELEXV, ELIMB, ELIMD, ELIMP, ELIMV,
	ELISB, ELNIB, ELNIP, EMACB, EMACV, EMCCB, EMCCV, EMFDB, EMICB, EMICV, EMLCB, EMTCB, EMTCV, ENACP, ENCCP,
	ENICP, ENPRP, ENTCP, ESACB, ESACD, ESACP, ESACV, ESCCB, ESCCD, ESCCP, ESCCV, ESICB, ESICD, ESICP, ESICV,
	ESISB, ESRCB, ESRCD, ESRCP, ESRCV, ESRFB, ESTCB, ESTCD, ESTCP, ESTCV, ESTXB, ESTXD, ESTXP, ESTXV, FFTCB,
	FNICB, FNICD, FNICP, FNICV, FOICB, FOICD, FOICP, FOICV, FSICB, FSICD, FSICP, FSICV, GDPRV, GDPRX, GECCB,
	GEEGB, GEEGP, GEICB, GERCB, GETCB, GETXB, GETXV, GOCCB, GORCB, HYCCB, HYCCP, HYEGB, HYEGP, HYICB, HYICP,
	HYTCB, HYTCP, HYTXB, HYTXP, HYTXV, JFACB, JFACD, JFACP, JFACV, JFTCB, JFTCD, JFTCP, JFTCV, JFTXB, JFTXD,
	JFTXP, JFTXV, JKACB, JKACP, JKTCB, JKTCP, JNACB, JNACP, JNTCB, JNTCP, KSCCB, KSCCD, KSCCP, KSCCV, KSICB,
	KSICD, KSICP, KSICV, KSRCB, KSRCD, KSRCP, KSRCV, KSTCB, KSTCD, KSTCP, KSTCV, KSTXB, KSTXD, KSTXP, KSTXV,
	LGACB, LGACD, LGACP, LGACV, LGCCB, LGCCD, LGCCP, LGCCV, LGICB, LGICD, LGICP, LGICV, LGISB, LGRCB, LGRCD,
	LGRCP, LGRCV, LGRFB, LGTCB, LGTCD, LGTCP, LGTCV, LGTXB, LGTXD, LGTXP, LGTXV, LOACB, LOCCB, LOICB, LORCB,
	LOTCB, LOTXB, LUACB, LUACD, LUACP, LUACV, LUICB, LUICD, LUICP, LUICV, LUTCB, LUTCD, LUTCP, LUTCV, LUTXB,
	LUTXD, LUTXP, LUTXV, MBICB, MBICP, MGACB, MGACD, MGACP, MGACV, MGCCB, MGCCD, MGCCP, MGCCV, MGICB, MGICD,
	MGICP, MGICV, MGTCB, MGTCD, MGTCP, MGTCV, MGTXB, MGTXD, MGTXP, MGTXV, MMTCB, MSICB, MSICD, MSICP, MSICV,
	NAICB, NAICP, NGACB, NGACD, NGACP, NGACV, NGCCB, NGCCD, NGCCP, NGCCV, NGEIB, NGEID, NGEIK, NGEIP, NGEIV,
	NGICB, NGICD, NGICP, NGICV, NGISB, NGLPB, NGLPP, NGMPB, NGMPK, NGMPP, NGPZB, NGPZP, NGRCB, NGRCD, NGRCP,
	NGRCV, NGRFB, NGTCB, NGTCD, NGTCK, NGTCP, NGTCV, NGTXB, NGTXD, NGTXK, NGTXP, NGTXV, NGVHB, NGVHP, NNACB,
	NNCCB, NNEIB, NNICB, NNRCB, NNTCB, NUEGB, NUEGD, NUEGP, NUEGV, NUETB, NUETD, NUETP, NUETV, P1ICB, P1ICD,
	P1ICP, P1ICV, P1TCB, P1TCD, P1TCP, P1TCV, P1TXB, P1TXD, P1TXP, P1TXV, P5RFB, PAACB, PAACD, PAACP, PAACV,
	PACCB, PACCD, PACCP, PACCV, PAEIB, PAEID, PAEIP, PAEIV, PAICB, PAICD, PAICP, PAICV, PAPRB, PAPRP, PARCB,
	PARCD, PARCP, PARCV, PATCB, PATCD, PATCP, PATCV, PATXB, PATXD, PATXP, PATXV, PCCCB, PCCCD, PCCCP, PCCCV,
	PCEIB, PCEID, PCEIP, PCEIV, PCICB, PCICD, PCICP, PCICV, PCISB, PCRFB, PCTCB, PCTCD, PCTCP, PCTCV, PEACD,
	PEACV, PECCD, PECCV, PEEID, PEEIV, PEICD, PEICV, PERCD, PERCV, PETCD, PETCV, PETXD, PETXV, PLICB, PLICP,
	PMTCB, POICB, POICD, POICP, POICV, POTCB, POTCD, POTCP, POTCV, POTXB, POTXD, POTXP, POTXV, PPICB, PPICP,
	REPRB, RETCB, RFACB, RFACD, RFACP, RFACV, RFCCB, RFCCD, RFCCP, RFCCV, RFEIB, RFEID, RFEIP, RFEIV, RFICB,
	RFICD, RFICP, RFICV, RFISB, RFRFB, RFTCB, RFTCD, RFTCP, RFTCV, RFTXB, RFTXD, RFTXP, RFTXV, ROPRB, SFCCB,
	SFEIB, SFINB, SFRCB, SFTCB, SGICB, SGICP, SNICB, SNICD, SNICP, SNICV, SOEGB, SOEGP, SOHCB, SOTCB, SOTXB,
	TEACB, TEACD, TEACV, TECCB, TECCD, TECCV, TEEIB, TEGDS, TEICB, TEICD, TEICV, TEPFB, TEPRB, TERCB, TERCD,
	TERCV, TERFB, TETCB, TETCD, TETCV, TETGR, TETPB, TETPV, TETXB, TETXD, TETXV, TNACB, TNCCB, TNICB, TNRCB,
	TNSCB, TNTXB, TPOPP, UOICB, UOICP, USICB, USICP, WDCCB, WDEIB, WDICB, WDRCB, WDRCD, WDRCP, WDRCV, WDRSB,
	WDRXB, WSCCB, WSEIB, WSICB, WWCCB, WWCCD, WWCCV, WWCSB, WWCXB, WWEIB, WWEID, WWEIV, WWICB, WWICD, WWICV,
	WWISB, WWIXB, WWTCB, WWTCD, WWTCV, WWTXB, WWTXD, WWTXV, WXICB, WXICD, WXICP, WXICV, WYEGB, WYEGP, WYTCB,
};

//States
enum state { AZ = 0, CA, NM, TX };
#endif // !ENUMS_H

