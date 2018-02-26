/******************************************************************************
*                                                                             *
*                                                                             *
* Notepad3                                                                    *
*                                                                             *
* Version.h                                                                   *
*   Based on code from Notepad2-mod, (c) XhmikosR 2010-2015                   *
*                                                                             *
*                                                  (c) Rizonesoft 2008-2018   *
*                                                 https://www.rizonesoft.com  *
*                                                                             *
*                                                                             *
*******************************************************************************/

#ifndef NOTEPAD3_VERSION_H
#define NOTEPAD3_VERSION_H

#include "VersionEx.h"

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define DO_STRINGIFYA(x)    #x
#define DO_STRINGIFYW(x) _T(#x)
#define STRG(x)     DO_STRINGIFYA(x)
#define TSTRG(x)    DO_STRINGIFYW(x)

// ----------------------------------------------------------------------------

#define APPNAME                     L"Notepad3"
#define APPNAME_A                    "Notepad3"

#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD

#define VERSION_FILEVERSION          TSTRG(VERSION_MAJOR) L"." TSTRG(VERSION_MINOR) L"." \
                                     TSTRG(VERSION_REV) L"." TSTRG(VERSION_BUILD)

#define VERSIONA_FILEVERSION         STRG(VERSION_MAJOR) "." STRG(VERSION_MINOR) "." \
                                     STRG(VERSION_REV) "." STRG(VERSION_BUILD)

#if defined(_WIN64)
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 (64-bit) " TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG   APPNAME   L" (64-bit) v" VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  APPNAME_A  " (64-bit) v" VERSIONA_FILEVERSION
#else
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 v." TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG   APPNAME   L" v" VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  APPNAME_A  " v" VERSIONA_FILEVERSION
#endif

#define VERSION_LEGALCOPYRIGHT       L"Copyright © 2015-2018 Rizonesoft"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"© Rizonesoft 2015-2018"
#define VERSION_AUTHORNAME           L"© Rizonesoft"
#define VERSION_WEBPAGEDISPLAY       L"https://www.rizonesoft.com"
#define VERSION_COMPANYNAME          L"© Rizonesoft"
//#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
//#define VERSION_WEBPAGE2DISPLAY      L"http://www.flos-freeware.ch"

#define VERSION_SCIVERSION           L"Scintilla Library v" TSTRG(SCINTILLA_VER) L"  (RegEx: Onigmo v" TSTRG(ONIGMO_REGEX_VER) L")"

// ============================================================================

#define VERSION_UPDATE_CHECK         L"https://www.rizonesoft.com/downloads/notepad3/update/?version=" VERSION_FILEVERSION

// ============================================================================

// #define ABOUT_INFO_RTF  L"{\\rtf1\\ansi\\ansicpg1252\\deff0\\nouicompat\\deflang1031{\\fonttbl{\\f0\\fnil\\fcharset0 Segoe UI;}{\\f1\\fnil\\fcharset0 Calibri;}}"
#define ABOUT_INFO_RTF  "{\\rtf1\\ansi\\ansicpg1252\\deff0\\deflang1033{\\fonttbl{\\f0\\fswiss\\fcharset0 Arial;}}"\
                        "{\\colortbl ;\\red80\\green160\\blue80;}"\
                        "\\viewkind4\\uc1\\pard\\cf1\\f0\\fs20\\b1 " VERSIONA_FILEVERSION_LONG "\\cf0\\uc0\\tab{{\\field{\\*\\fldinst{HYPERLINK https://github.com/rizonesoft/Notepad3 }}{\\fldrslt{https://github.com/rizonesoft/Notepad3}}}}  \\par"\
                        "\\fs18\\par"\
                        "\\cf0 \\b1\\ul1 Contributors:\\ul0\\b0\\par"\
                        "\\cf0 Derick Payne (Rizonesoft)\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://www.rizonesoft.com }}{\\fldrslt{https://www.rizonesoft.com}}}}  \\par"\
                        "\\cf0 Flo Balmer et al. (Notepad2)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK http://www.flos-freeware.ch }}{\\fldrslt{http://www.flos-freeware.ch}}}}  \\par"\
                        "\\cf0 XhmikosR (Notepad2-mod)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://xhmikosr.github.io/notepad2-mod/ }}{\\fldrslt{https://xhmikosr.github.io/notepad2-mod/}}}}  \\par"\
                        "\\cf0 Kai Liu, RL Vision\\par"\
                        "\\cf0 A.Lekov\\par"\
                        "\\cf0 B.Barbieri\\par"\
                        "\\cf0 M.Ellis (MinimizeToTray)\\par"\
                        "\\cf0 RaiKoHoff\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Libraries:\\ul0\\b0\\par"\
                        "\\cf0 N.Hodgson (Scintilla)\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK http://www.scintilla.org }}{\\fldrslt{http://www.scintilla.org}}}}  \\par"\
                        "\\cf0 K.Takata (Onigmo Regex)\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/k-takata/Onigmo }}{\\fldrslt{https://github.com/k-takata/Onigmo}}}}  \\par"\
                        "\\cf0 D.Dyer (NotepadCrypt) \\par"\
                        "\\cf0 T.D.Hanson (uthash)\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://troydhanson.github.io/uthash }}{\\fldrslt{https://troydhanson.github.io/uthash}}}}  \\par"\
                        "\\cf0 \\par\\par"\
                        "\\cf0 \\b1\\ul1 Quality Assurance:\\ul0\\b0\\par"\
                        "\\cf0 craigo- \\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/craigo- }}{\\fldrslt{https://github.com/craigo-}}}}  \\par"\
                        "\\cf0 lhmouse \\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/lhmouse }}{\\fldrslt{https://github.com/lhmouse}}}}  \\par"\
                        "\\cf0 hpwamr \\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/hpwamr }}{\\fldrslt{https://github.com/hpwamr}}}}  \\par"\
                        "\\cf0 AlexIljin \\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/AlexIljin }}{\\fldrslt{https://github.com/AlexIljin}}}}  \\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Licenses:\\ul0\\b0\\par"\
                        "\\cf0 Scintilla\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK http://www.scintilla.org/License.txt }}{\\fldrslt{http://www.scintilla.org/License.txt}}}}  \\par"\
                        "\\cf0 Onigmo Regex\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/kkos/oniguruma/blob/master/COPYING }}{\\fldrslt{https://github.com/kkos/oniguruma/blob/master/COPYING}}}}  \\par"\
                        "\\cf0 uthash\\tab\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://troydhanson.github.io/uthash/license.html }}{\\fldrslt{https://troydhanson.github.io/uthash/license.html}}}}  \\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Ressources:\\ul0\\b0\\par"\
                        "\\cf0 Crypt Version Java \\tab {{\\field{\\*\\fldinst{HYPERLINK https://www.nayuki.io/page/notepadcrypt-format-decryptor-java }}{\\fldrslt{https://www.nayuki.io/page/notepadcrypt-format-decryptor-java}}}}  \\par"\
                       "}"

// ============================================================================

// Compiler specific
#if defined(_MSC_VER)
    #if (_MSC_VER >= 1912)
        #if(_MSC_FULL_VER >= 191225835)
            #define VER_CPL     "MS Visual C++ 2017 v15.5.(5-7)"
        #elif(_MSC_FULL_VER >= 191225834)
            #define VER_CPL     "MS Visual C++ 2017 v15.5.(3-4)"
        #elif(_MSC_FULL_VER >= 191225831)
            #define VER_CPL     "MS Visual C++ 2017 v15.5.2"
        #elif(_MSC_FULL_VER >= 191225830)
            #define VER_CPL     "MS Visual C++ 2017 v15.5"
        #else
            #define VER_CPL     "MS Visual C++ 2017 (version unknown)"
        #endif
    #elif (_MSC_VER >= 1911)
        #if((_MSC_FULL_VER >= 191125542) && (_MSC_FULL_VER <= 191125547))
           #define VER_CPL     "MS Visual C++ 2017 v15.4"
        #elif((_MSC_FULL_VER >= 191125506) && (_MSC_FULL_VER <= 191125508))
           #define VER_CPL     "MS Visual C++ 2017 v15.3"
        #else
           #define VER_CPL     "MS Visual C++ 2017 (version unknown)"
        #endif
    #elif (_MSC_VER >= 1910)
        #if ((_MSC_FULL_VER >= 191025017) && (_MSC_FULL_VER <= 191025019))
           #define VER_CPL     "MS Visual C++ 2017 v15.2"
        #else
            #define VER_CPL    "MS Visual C++ 2017 RC"
        #endif
    #elif (_MSC_VER == 1900)
        #if (_MSC_FULL_VER == 190024210) || (_MSC_FULL_VER == 190024215)
            #define VER_CPL    "MS Visual C++ 2015 Update 3"
        #elif (_MSC_FULL_VER == 190023918)
            #define VER_CPL    "MS Visual C++ 2015 Update 2"
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    "MS Visual C++ 2015 Update 1"
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    "MS Visual C++ 2015 Update 1"
        #else
            #define VER_CPL    "MS Visual C++ (version unknown)"
        #endif
    #else
        #define VER_CPL        "MS Visual C++ (version unknown)"
    #endif
#else
    #define VER_CPL            "(Unknown Compiler)"
#endif

#define VERSION_COMPILER  L"Compiled with: " TSTRG(VER_CPL)

#pragma message("Compiler " VER_CPL "  (v" STRG(_MSC_FULL_VER) ")")

#endif // NOTEPAD3_VERSION_H
