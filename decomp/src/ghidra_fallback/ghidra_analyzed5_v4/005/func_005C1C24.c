#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c1ca4;
extern undefined4 *DAT_005c1ca8;
extern undefined4 *DAT_005c1cac;
extern undefined4 DAT_005c1cb0;
extern undefined4 DAT_005c1cb4;
extern undefined4 DAT_005c1cb8;
extern undefined DAT_005c1cbc;
extern undefined4 DAT_005c1cd0;
extern undefined4 DAT_005c1ce4;
extern uint *DAT_005c1ce8;
extern undefined4 DAT_005c1cec;
extern undefined4 *DAT_005c1cf0;
extern undefined4 DAT_005c1cf4;
extern undefined4 DAT_005c1cf8;
extern char s_TagLightFocus_005c1cd4[];

// USA 005C1C24 <- EU 005C1BFC (Ghidra, non-matching)
// GLOBAL DAT_005c1ca4 undefined4 *
// GLOBAL DAT_005c1ca8 undefined4 *
// GLOBAL DAT_005c1cac undefined4 *
// GLOBAL DAT_005c1cb0 undefined4
// GLOBAL DAT_005c1cb4 undefined4
// GLOBAL DAT_005c1cb8 undefined4
// GLOBAL DAT_005c1cbc undefined
// GLOBAL DAT_005c1cd0 undefined4
// GLOBAL DAT_005c1ce4 undefined4
// GLOBAL DAT_005c1ce8 uint *
// GLOBAL DAT_005c1cec undefined4
// GLOBAL DAT_005c1cf0 undefined4 *
// GLOBAL DAT_005c1cf4 undefined4
// GLOBAL DAT_005c1cf8 undefined4
// GLOBAL s_TagLightFocus_005c1cd4 string

undefined8 func_005C1C24(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c1ca4;
  *DAT_005c1ca4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar4 = DAT_005c1cb0;
  puVar1 = DAT_005c1ca8;
  *DAT_005c1ca8 = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005c1cb8;
  uVar2 = DAT_005c1cb4;
  puVar1 = DAT_005c1cac;
  *DAT_005c1cac = uVar4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[-0x9a] = 0;
  puVar1[-0x99] = 5;
  local_10 = DAT_005c1cd0;
  puVar1[-0x98] = puVar1 + -0x97;
  puStack_c = &DAT_005c1cbc;
  local_18 = local_10;
  local_14 = s_TagLightFocus_005c1cd4;
  uVar4 = func_0019B51C(DAT_005c1cf0,DAT_005c1cec,*DAT_005c1ce8,(int)&local_18,DAT_005c1ce4,
                        &local_10,0);
  return CONCAT44(DAT_005c1cf8,uVar4);
}

