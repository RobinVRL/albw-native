#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab348;
extern undefined4 *DAT_005ab34c;
extern undefined4 *DAT_005ab350;
extern undefined DAT_005ab354;
extern undefined4 DAT_005ab35c;
extern uint *DAT_005ab36c;
extern undefined4 DAT_005ab370;
extern undefined4 *DAT_005ab374;
extern undefined4 DAT_005ab378;
extern undefined4 DAT_005ab37c;
extern char s_MassTileIce_005ab360[];

// USA 005AB2DC <- EU 005AB2B4 (Ghidra, non-matching)
// GLOBAL DAT_005ab348 undefined4 *
// GLOBAL DAT_005ab34c undefined4 *
// GLOBAL DAT_005ab350 undefined4 *
// GLOBAL DAT_005ab354 undefined
// GLOBAL DAT_005ab35c undefined4
// GLOBAL DAT_005ab36c uint *
// GLOBAL DAT_005ab370 undefined4
// GLOBAL DAT_005ab374 undefined4 *
// GLOBAL DAT_005ab378 undefined4
// GLOBAL DAT_005ab37c undefined4
// GLOBAL s_MassTileIce_005ab360 string

undefined8 func_005AB2DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ab348;
  *DAT_005ab348 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab34c;
  *DAT_005ab34c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ab350;
  puVar3 = DAT_005ab350 + 3;
  *DAT_005ab350 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ab35c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ab354;
  local_18 = local_10;
  local_14 = s_MassTileIce_005ab360;
  uVar2 = func_0019B51C(DAT_005ab374,DAT_005ab370,*DAT_005ab36c,(int)&local_18,DAT_005ab350,
                        &local_10,0);
  return CONCAT44(DAT_005ab37c,uVar2);
}

