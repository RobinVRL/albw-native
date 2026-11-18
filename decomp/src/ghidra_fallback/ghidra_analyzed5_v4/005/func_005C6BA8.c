#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6cac;
extern undefined4 *DAT_005c6cb0;
extern undefined4 DAT_005c6cb4;
extern undefined4 *DAT_005c6cb8;
extern uint DAT_005c6cbc;
extern undefined4 *DAT_005c6cc0;
extern undefined DAT_005c6cc4;
extern undefined4 DAT_005c6cd4;
extern uint *DAT_005c6ce8;
extern undefined4 DAT_005c6cec;
extern undefined4 *DAT_005c6cf0;
extern undefined4 DAT_005c6cf4;
extern undefined4 DAT_005c6cf8;
extern undefined4 *DAT_005c6cfc;
extern undefined DAT_005c6d00;
extern uint *DAT_005c6d20;
extern undefined4 *DAT_005c6d24;
extern char s_ObjOctorokRock_005c6cd8[];
extern char s_ObjSlarokRock_005c6d10[];

// USA 005C6BA8 <- EU 005C6B80 (Ghidra, non-matching)
// GLOBAL DAT_005c6cac undefined4 *
// GLOBAL DAT_005c6cb0 undefined4 *
// GLOBAL DAT_005c6cb4 undefined4
// GLOBAL DAT_005c6cb8 undefined4 *
// GLOBAL DAT_005c6cbc uint
// GLOBAL DAT_005c6cc0 undefined4 *
// GLOBAL DAT_005c6cc4 undefined
// GLOBAL DAT_005c6cd4 undefined4
// GLOBAL DAT_005c6ce8 uint *
// GLOBAL DAT_005c6cec undefined4
// GLOBAL DAT_005c6cf0 undefined4 *
// GLOBAL DAT_005c6cf4 undefined4
// GLOBAL DAT_005c6cf8 undefined4
// GLOBAL DAT_005c6cfc undefined4 *
// GLOBAL DAT_005c6d00 undefined
// GLOBAL DAT_005c6d20 uint *
// GLOBAL DAT_005c6d24 undefined4 *
// GLOBAL s_ObjOctorokRock_005c6cd8 string
// GLOBAL s_ObjSlarokRock_005c6d10 string

undefined8 func_005C6BA8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005c6cac;
  DAT_005c6cac[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005c6cb4;
  puVar1 = DAT_005c6cb0;
  *DAT_005c6cb0 = 0;
  puVar1[1] = 0;
  puVar3 = DAT_005c6cb8;
  puVar1 = DAT_005c6cac;
  *DAT_005c6cb8 = uVar2;
  puVar3[1] = uVar2;
  puVar3[2] = uVar2;
  uVar4 = func_00114608(DAT_005c6cbc,0);
  *puVar1 = (int)uVar4;
  puVar1 = DAT_005c6cc0;
  puVar3 = DAT_005c6cc0 + 3;
  DAT_005c6cc0[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  uVar2 = DAT_005c6cd4;
  local_24 = &DAT_005c6cc4;
  local_2c = s_ObjOctorokRock_005c6cd8;
  local_28 = DAT_005c6cd4;
  local_30 = DAT_005c6cd4;
  func_0019B51C(DAT_005c6cf0,DAT_005c6cec,*DAT_005c6ce8,(int)&local_30,DAT_005c6cc0,&local_28,0);
  puVar1 = DAT_005c6cfc;
  puVar3 = DAT_005c6cfc + 3;
  DAT_005c6cfc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005c6d00;
  local_1c = s_ObjSlarokRock_005c6d10;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005c6d24,DAT_005c6cec,*DAT_005c6d20,(int)&local_20,DAT_005c6cfc,
                        &local_18,0);
  return CONCAT44(DAT_005c6cf8,uVar2);
}

