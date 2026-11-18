#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b834c;
extern undefined4 *DAT_005b8350;
extern undefined4 *DAT_005b8354;
extern undefined DAT_005b8358;
extern undefined4 DAT_005b8360;
extern undefined4 DAT_005b836c;
extern undefined4 DAT_005b8370;
extern undefined4 *DAT_005b8374;
extern undefined4 DAT_005b8384;
extern undefined4 *DAT_005b8388;
extern undefined DAT_005b838c;
extern uint *DAT_005b83ac;
extern undefined4 DAT_005b83b0;
extern undefined4 *DAT_005b83b4;
extern undefined4 DAT_005b83b8;
extern char s_JewelMask_005b8378[];
extern char s_ObjJewelMask_005b839c[];
extern char s_break_005b8364[];

// USA 005B828C <- EU 005B8264 (Ghidra, non-matching)
// GLOBAL DAT_005b834c undefined4 *
// GLOBAL DAT_005b8350 undefined4 *
// GLOBAL DAT_005b8354 undefined4 *
// GLOBAL DAT_005b8358 undefined
// GLOBAL DAT_005b8360 undefined4
// GLOBAL DAT_005b836c undefined4
// GLOBAL DAT_005b8370 undefined4
// GLOBAL DAT_005b8374 undefined4 *
// GLOBAL DAT_005b8384 undefined4
// GLOBAL DAT_005b8388 undefined4 *
// GLOBAL DAT_005b838c undefined
// GLOBAL DAT_005b83ac uint *
// GLOBAL DAT_005b83b0 undefined4
// GLOBAL DAT_005b83b4 undefined4 *
// GLOBAL DAT_005b83b8 undefined4
// GLOBAL s_JewelMask_005b8378 string
// GLOBAL s_ObjJewelMask_005b839c string
// GLOBAL s_break_005b8364 string

undefined8 func_005B828C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b834c;
  *DAT_005b834c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b8360;
  puVar1 = DAT_005b8350;
  *DAT_005b8350 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b8354;
  DAT_005b8354[1] = &DAT_005b8358;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_break_005b8364;
  puVar1 = DAT_005b8374;
  DAT_005b8374[1] = s_JewelMask_005b8378;
  *puVar1 = local_18;
  puVar1 = DAT_005b8388;
  puVar3 = DAT_005b8388 + 3;
  *DAT_005b8388 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b838c;
  uStack_10 = local_18;
  local_c = s_ObjJewelMask_005b839c;
  uVar2 = func_0019B51C(DAT_005b83b4,DAT_005b83b0,*DAT_005b83ac,(int)&uStack_10,DAT_005b8388,
                        &local_18,0);
  return CONCAT44(DAT_005b83b8,uVar2);
}

