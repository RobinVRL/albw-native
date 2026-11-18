#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e4f3c;
extern undefined4 *DAT_005e4f40;
extern undefined4 *DAT_005e4f44;
extern undefined DAT_005e4f48;
extern undefined4 DAT_005e4f5c;
extern uint *DAT_005e4f74;
extern undefined4 DAT_005e4f78;
extern undefined4 *DAT_005e4f7c;
extern undefined4 DAT_005e4f80;
extern undefined4 DAT_005e4f84;
extern undefined4 *DAT_005e4f88;
extern undefined DAT_005e4f8c;
extern uint *DAT_005e4fc0;
extern undefined4 DAT_005e4fc4;
extern undefined4 *DAT_005e4fc8;
extern undefined4 DAT_005e4fcc;
extern undefined4 *DAT_005e4fd0;
extern char s_AreaDisableWallIn_005e4f60[];
extern char s_AreaNoCalcWallNrm_005e4fac[];

// USA 005E4E48 <- EU 005E4E20 (Ghidra, non-matching)
// GLOBAL DAT_005e4f3c undefined4 *
// GLOBAL DAT_005e4f40 undefined4 *
// GLOBAL DAT_005e4f44 undefined4 *
// GLOBAL DAT_005e4f48 undefined
// GLOBAL DAT_005e4f5c undefined4
// GLOBAL DAT_005e4f74 uint *
// GLOBAL DAT_005e4f78 undefined4
// GLOBAL DAT_005e4f7c undefined4 *
// GLOBAL DAT_005e4f80 undefined4
// GLOBAL DAT_005e4f84 undefined4
// GLOBAL DAT_005e4f88 undefined4 *
// GLOBAL DAT_005e4f8c undefined
// GLOBAL DAT_005e4fc0 uint *
// GLOBAL DAT_005e4fc4 undefined4
// GLOBAL DAT_005e4fc8 undefined4 *
// GLOBAL DAT_005e4fcc undefined4
// GLOBAL DAT_005e4fd0 undefined4 *
// GLOBAL s_AreaDisableWallIn_005e4f60 string
// GLOBAL s_AreaNoCalcWallNrm_005e4fac string

void func_005E4E48(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005e4f3c;
  *DAT_005e4f3c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4f40;
  *DAT_005e4f40 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e4f5c;
  puVar1 = DAT_005e4f44;
  puVar3 = DAT_005e4f44 + 3;
  DAT_005e4f44[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005e4f48;
  local_2c = s_AreaDisableWallIn_005e4f60;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005e4f7c,DAT_005e4f78,*DAT_005e4f74,(int)&local_30,DAT_005e4f44,&local_28,0);
  puVar1 = DAT_005e4f88;
  puVar3 = DAT_005e4f88 + 3;
  DAT_005e4f88[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005e4f8c;
  local_1c = s_AreaNoCalcWallNrm_005e4fac;
  local_18 = uVar2;
  local_20 = uVar2;
  func_0019B51C(DAT_005e4fc8,DAT_005e4fc4,*DAT_005e4fc0,(int)&local_20,DAT_005e4f88,&local_18,0);
  puVar1 = DAT_005e4fd0;
  uVar2 = DAT_005e4fcc;
  *DAT_005e4fd0 = DAT_005e4fcc;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  return;
}

