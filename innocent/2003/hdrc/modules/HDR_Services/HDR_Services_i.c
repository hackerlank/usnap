/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Aug 25 10:51:51 2003
 */
/* Compiler settings for C:\S_PRJS\DATA RESCUER\MODULES\HDR_Services\HDR_Services.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IFSPMapper = {0xAC48B470,0x0211,0x4616,{0xAA,0x96,0x0F,0x14,0xEC,0xB9,0x4E,0x3B}};


const IID IID_IFSPReconstruct = {0xAC48B471,0x0211,0x4616,{0xAA,0x96,0x0F,0x14,0xEC,0xB9,0x4E,0x3B}};


const IID IID_IFSPRecstrMonitor = {0xAC48B472,0x0211,0x4616,{0xAA,0x96,0x0F,0x14,0xEC,0xB9,0x4E,0x3B}};


const IID IID_IFSPAddInsMgr = {0xAC48B473,0x0211,0x4616,{0xAA,0x96,0x0F,0x14,0xEC,0xB9,0x4E,0x3B}};


const IID IID_IFSPFATxParser = {0xAC48B480,0x0211,0x4616,{0xAA,0x96,0x0F,0x14,0xEC,0xB9,0x4E,0x3B}};


const IID LIBID_HDR_ServicesLib = {0x6D5C43ED,0x8197,0x4AB5,{0x8A,0x75,0x53,0x9B,0x5D,0xA0,0x8F,0xB3}};


const IID DIID__IFSPMapperEvents = {0xBAB0F8C5,0x6F3E,0x4A47,{0x83,0xA4,0x9C,0x0A,0x71,0xC8,0x27,0x2E}};


const CLSID CLSID_FATx = {0xE267B01A,0x6FAA,0x42E3,{0xA5,0x5B,0xFF,0xB1,0x8D,0x35,0x9F,0x27}};


#ifdef __cplusplus
}
#endif

