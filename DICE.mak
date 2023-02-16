# Microsoft Developer Studio Generated NMAKE File, Based on DICE.dsp
!IF "$(CFG)" == ""
CFG=DICE - Win32 Debug
!MESSAGE No configuration specified. Defaulting to DICE - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "DICE - Win32 Release" && "$(CFG)" != "DICE - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "DICE.mak" CFG="DICE - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "DICE - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "DICE - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "DICE - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\DICE.exe"

!ELSE 

ALL : "$(OUTDIR)\DICE.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\DICE.obj"
	-@erase "$(INTDIR)\DICE.pch"
	-@erase "$(INTDIR)\DICE.res"
	-@erase "$(INTDIR)\DICEDlg.obj"
	-@erase "$(INTDIR)\DICEeinst.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\DICE.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /w /W0 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\DICE.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\DICE.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\DICE.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\DICE.pdb" /machine:I386 /out:"$(OUTDIR)\DICE.exe" 
LINK32_OBJS= \
	"$(INTDIR)\DICE.obj" \
	"$(INTDIR)\DICE.res" \
	"$(INTDIR)\DICEDlg.obj" \
	"$(INTDIR)\DICEeinst.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\DICE.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "DICE - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\DICE.exe"

!ELSE 

ALL : "$(OUTDIR)\DICE.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\DICE.obj"
	-@erase "$(INTDIR)\DICE.pch"
	-@erase "$(INTDIR)\DICE.res"
	-@erase "$(INTDIR)\DICEDlg.obj"
	-@erase "$(INTDIR)\DICEeinst.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\DICE.exe"
	-@erase "$(OUTDIR)\DICE.ilk"
	-@erase "$(OUTDIR)\DICE.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /D "_AFXDLL" /Fp"$(INTDIR)\DICE.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\DICE.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\DICE.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\DICE.pdb" /debug /machine:I386 /out:"$(OUTDIR)\DICE.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\DICE.obj" \
	"$(INTDIR)\DICE.res" \
	"$(INTDIR)\DICEDlg.obj" \
	"$(INTDIR)\DICEeinst.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\DICE.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(CFG)" == "DICE - Win32 Release" || "$(CFG)" == "DICE - Win32 Debug"
SOURCE=.\DICE.cpp

!IF  "$(CFG)" == "DICE - Win32 Release"

DEP_CPP_DICE_=\
	".\DICE.h"\
	".\DICEDlg.h"\
	

"$(INTDIR)\DICE.obj" : $(SOURCE) $(DEP_CPP_DICE_) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ELSEIF  "$(CFG)" == "DICE - Win32 Debug"

DEP_CPP_DICE_=\
	".\DICE.h"\
	".\DICEDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\DICE.obj" : $(SOURCE) $(DEP_CPP_DICE_) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ENDIF 

SOURCE=.\DICE.rc
DEP_RSC_DICE_R=\
	".\res\cursor1.cur"\
	".\res\cursor3.cur"\
	".\res\cursor4.cur"\
	".\res\DICE.ico"\
	".\res\DICE.rc2"\
	

"$(INTDIR)\DICE.res" : $(SOURCE) $(DEP_RSC_DICE_R) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\DICEDlg.cpp

!IF  "$(CFG)" == "DICE - Win32 Release"

DEP_CPP_DICED=\
	".\DICE.h"\
	".\DICEDlg.h"\
	".\DICEeinst.h"\
	

"$(INTDIR)\DICEDlg.obj" : $(SOURCE) $(DEP_CPP_DICED) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ELSEIF  "$(CFG)" == "DICE - Win32 Debug"

DEP_CPP_DICED=\
	".\DICE.h"\
	".\DICEDlg.h"\
	".\DICEeinst.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\DICEDlg.obj" : $(SOURCE) $(DEP_CPP_DICED) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ENDIF 

SOURCE=.\DICEeinst.cpp

!IF  "$(CFG)" == "DICE - Win32 Release"

DEP_CPP_DICEE=\
	".\DICE.h"\
	".\DICEDlg.h"\
	".\DICEeinst.h"\
	

"$(INTDIR)\DICEeinst.obj" : $(SOURCE) $(DEP_CPP_DICEE) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ELSEIF  "$(CFG)" == "DICE - Win32 Debug"

DEP_CPP_DICEE=\
	".\DICE.h"\
	".\DICEDlg.h"\
	".\DICEeinst.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\DICEeinst.obj" : $(SOURCE) $(DEP_CPP_DICEE) "$(INTDIR)"\
 "$(INTDIR)\DICE.pch"


!ENDIF 

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "DICE - Win32 Release"

CPP_SWITCHES=/nologo /MT /w /W0 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\DICE.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\DICE.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "DICE - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /Fp"$(INTDIR)\DICE.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\DICE.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

