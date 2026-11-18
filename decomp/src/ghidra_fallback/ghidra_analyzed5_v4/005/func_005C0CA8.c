#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0d80;
extern undefined4 *DAT_005c0d84;
extern undefined DAT_005c0d88;
extern undefined4 DAT_005c0d90;
extern undefined4 DAT_005c0d9c;
extern uint DAT_005c0da0;
extern uint DAT_005c0da4;
extern undefined4 DAT_005c0da8;
extern undefined4 *DAT_005c0dac;
extern undefined4 DAT_005c0db0;
extern undefined DAT_005c0db4;
extern undefined4 DAT_005c0dd8;
extern uint *DAT_005c0ddc;
extern undefined4 DAT_005c0de0;
extern undefined4 *DAT_005c0de4;
extern undefined4 DAT_005c0de8;
extern char s_Erupton_005c0d94[];
extern char s_ObjMeganeLava_005c0dc8[];

// USA 005C0CA8 <- EU 005C0C80 (Ghidra, non-matching)
// GLOBAL DAT_005c0d80 undefined4 *
// GLOBAL DAT_005c0d84 undefined4 *
// GLOBAL DAT_005c0d88 undefined
// GLOBAL DAT_005c0d90 undefined4
// GLOBAL DAT_005c0d9c undefined4
// GLOBAL DAT_005c0da0 uint
// GLOBAL DAT_005c0da4 uint
// GLOBAL DAT_005c0da8 undefined4
// GLOBAL DAT_005c0dac undefined4 *
// GLOBAL DAT_005c0db0 undefined4
// GLOBAL DAT_005c0db4 undefined
// GLOBAL DAT_005c0dd8 undefined4
// GLOBAL DAT_005c0ddc uint *
// GLOBAL DAT_005c0de0 undefined4
// GLOBAL DAT_005c0de4 undefined4 *
// GLOBAL DAT_005c0de8 undefined4
// GLOBAL s_Erupton_005c0d94 string
// GLOBAL s_ObjMeganeLava_005c0dc8 string

undefined8 func_005C0CA8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c0d80;
  DAT_005c0d80[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = DAT_005c0d90;
  puVar2 = DAT_005c0d84;
  DAT_005c0d84[1] = &DAT_005c0d88;
  *puVar2 = uVar4;
  puVar2[2] = uVar4;
  puVar2[3] = s_Erupton_005c0d94;
  uVar6 = func_00114608(DAT_005c0da4,DAT_005c0da0);
  *puVar1 = (int)uVar6;
  uVar5 = DAT_005c0da8;
  uVar6 = func_00114608(0,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[1] = (int)uVar6;
  uVar3 = DAT_005c0db0;
  puVar1 = DAT_005c0dac;
  *DAT_005c0dac = uVar5;
  puVar1[1] = uVar3;
  puVar1[2] = uVar5;
  puVar1[-0x9e] = 0;
  puVar1[-0x9d] = 5;
  puVar1[-0x9c] = puVar1 + -0x9b;
  local_28 = uVar4;
  puStack_24 = &DAT_005c0db4;
  uStack_20 = uVar4;
  local_1c = s_ObjMeganeLava_005c0dc8;
  uVar4 = func_0019B51C(DAT_005c0de4,DAT_005c0de0,*DAT_005c0ddc,(int)&uStack_20,DAT_005c0dd8,
                        &local_28,0);
  return CONCAT44(DAT_005c0de8,uVar4);
}

