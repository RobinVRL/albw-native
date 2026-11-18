#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0029F9D0(undefined1 *param_1);
extern int func_002E1588(undefined4 *param_1);
extern int func_0034E344(int param_1);
extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern undefined4 DAT_0034cdd8;
extern undefined4 DAT_0034cddc;
extern int *DAT_0034cde0;
extern float DAT_0034cde4;
extern int DAT_0034cde8;

// USA 0034CC9C <- EU 0034CC78 (Ghidra, non-matching)
// GLOBAL DAT_0034cdd8 undefined4
// GLOBAL DAT_0034cddc undefined4
// GLOBAL DAT_0034cde0 int *
// GLOBAL DAT_0034cde4 float
// GLOBAL DAT_0034cde8 int

void func_0034CC9C(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_r1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_0034cddc;
  uVar3 = DAT_0034cdd8;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  *(undefined4 *)(param_1 + 0x19c) = uVar3;
  *(undefined4 *)(param_1 + 0x1a0) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(uint *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x100) = uVar3;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  iVar2 = *(int *)(*DAT_0034cde0 + 0x28);
  if (*(int *)(iVar2 + 4) == 0x3f800000) {
    *(uint *)(param_1 + 0xc) = param_2;
  }
  else {
    func_0034E344(param_1);
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 0x22a) = 1;
    iVar2 = func_004904CC(*(float *)(iVar2 + 8),*(float *)(iVar2 + 0x10));
    *(int *)(param_1 + 0xc) = iVar2;
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x1cc) = uVar3;
    *(undefined4 *)(param_1 + 0x1d0) = uVar3;
    *(undefined4 *)(param_1 + 0x1d4) = uVar3;
    param_2 = extraout_r1;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar4 = func_00114608((uint)ALBW_AS_U32((**(float **)(param_1 + 0x90) * DAT_0034cde4)),param_2);
    uVar1 = (undefined4)uVar4;
  }
  else {
    uVar4 = func_00114608((uint)ALBW_AS_U32((**(float **)(param_1 + 0x94) * DAT_0034cde4)),param_2);
    uVar1 = (undefined4)uVar4;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  func_0036FA1C((undefined4 *)(param_1 + 0x44),0);
  func_0029F9D0((undefined1 *)(param_1 + 0x98));
  func_002E1588((undefined4 *)(param_1 + 0xb8));
  func_002E1588((undefined4 *)(param_1 + 0xdc));
  *(undefined2 *)(DAT_0034cde8 + param_1) = 0xffff;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = uVar3;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined1 *)(param_1 + 0x2a1) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  return;
}

