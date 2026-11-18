#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005cfa90;
extern uint DAT_005cfa94;
extern undefined4 *DAT_005cfa98;
extern undefined DAT_005cfa9c;
extern undefined4 DAT_005cfaa4;
extern uint *DAT_005cfab8;
extern undefined4 DAT_005cfabc;
extern undefined4 *DAT_005cfac0;
extern undefined4 DAT_005cfac4;
extern undefined4 DAT_005cfac8;
extern char s_ObjVolcanicBomb_005cfaa8[];

// USA 005CFA14 <- EU 005CF9EC (Ghidra, non-matching)
// GLOBAL DAT_005cfa90 undefined4 *
// GLOBAL DAT_005cfa94 uint
// GLOBAL DAT_005cfa98 undefined4 *
// GLOBAL DAT_005cfa9c undefined
// GLOBAL DAT_005cfaa4 undefined4
// GLOBAL DAT_005cfab8 uint *
// GLOBAL DAT_005cfabc undefined4
// GLOBAL DAT_005cfac0 undefined4 *
// GLOBAL DAT_005cfac4 undefined4
// GLOBAL DAT_005cfac8 undefined4
// GLOBAL s_ObjVolcanicBomb_005cfaa8 string

undefined8 func_005CFA14(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005cfa90;
  DAT_005cfa90[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = func_00114608(DAT_005cfa94,0xffffffff);
  *puVar1 = (int)uVar4;
  puVar1 = DAT_005cfa98;
  puVar3 = DAT_005cfa98 + 3;
  *DAT_005cfa98 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005cfaa4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005cfa9c;
  local_18 = local_10;
  local_14 = s_ObjVolcanicBomb_005cfaa8;
  uVar2 = func_0019B51C(DAT_005cfac0,DAT_005cfabc,*DAT_005cfab8,(int)&local_18,DAT_005cfa98,
                        &local_10,0);
  return CONCAT44(DAT_005cfac8,uVar2);
}

