#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6f9c;
extern undefined4 DAT_005a6fa0;
extern undefined4 *DAT_005a6fa4;
extern undefined4 DAT_005a6fa8;
extern undefined4 *DAT_005a6fac;
extern undefined4 DAT_005a6fb0;
extern uint DAT_005a6fb4;
extern undefined4 *DAT_005a6fb8;
extern undefined DAT_005a6fbc;
extern undefined4 DAT_005a6fc4;
extern uint *DAT_005a6fd4;
extern undefined4 DAT_005a6fd8;
extern undefined4 *DAT_005a6fdc;
extern undefined4 DAT_005a6fe0;
extern undefined4 DAT_005a6fe4;
extern char s_ObjJavelin_005a6fc8[];

// USA 005A6EFC <- EU 005A6ED4 (Ghidra, non-matching)
// GLOBAL DAT_005a6f9c undefined4 *
// GLOBAL DAT_005a6fa0 undefined4
// GLOBAL DAT_005a6fa4 undefined4 *
// GLOBAL DAT_005a6fa8 undefined4
// GLOBAL DAT_005a6fac undefined4 *
// GLOBAL DAT_005a6fb0 undefined4
// GLOBAL DAT_005a6fb4 uint
// GLOBAL DAT_005a6fb8 undefined4 *
// GLOBAL DAT_005a6fbc undefined
// GLOBAL DAT_005a6fc4 undefined4
// GLOBAL DAT_005a6fd4 uint *
// GLOBAL DAT_005a6fd8 undefined4
// GLOBAL DAT_005a6fdc undefined4 *
// GLOBAL DAT_005a6fe0 undefined4
// GLOBAL DAT_005a6fe4 undefined4
// GLOBAL s_ObjJavelin_005a6fc8 string

undefined8 func_005A6EFC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a6f9c;
  DAT_005a6f9c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar2 = DAT_005a6fa8;
  puVar4 = DAT_005a6fa4;
  uVar3 = DAT_005a6fa0;
  *DAT_005a6fa4 = DAT_005a6fa0;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  uVar2 = DAT_005a6fb0;
  puVar4 = DAT_005a6fac;
  *DAT_005a6fac = uVar3;
  puVar4[1] = uVar3;
  puVar4[2] = uVar2;
  uVar5 = func_00114608(DAT_005a6fb4,0xffffffff);
  *puVar1 = (int)uVar5;
  puVar1 = DAT_005a6fb8;
  puVar4 = DAT_005a6fb8 + 3;
  *DAT_005a6fb8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a6fc4;
  puVar1[2] = puVar4;
  puStack_c = &DAT_005a6fbc;
  local_18 = local_10;
  local_14 = s_ObjJavelin_005a6fc8;
  uVar3 = func_0019B51C(DAT_005a6fdc,DAT_005a6fd8,*DAT_005a6fd4,(int)&local_18,DAT_005a6fb8,
                        &local_10,0);
  return CONCAT44(DAT_005a6fe4,uVar3);
}

