#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float fRam003c243c;
extern undefined4 DAT_00159d50;
extern undefined4 DAT_00159d54;
extern uint *DAT_003c25c0;
extern undefined4 *DAT_003c25c4;
extern undefined4 DAT_003c25c8;

// USA 00159CD8 <- EU 00159CDC (Ghidra, non-matching)
// GLOBAL DAT_00159d50 undefined4
// GLOBAL DAT_00159d54 undefined4
// GLOBAL DAT_003c25c0 uint *
// GLOBAL DAT_003c25c4 undefined4 *
// GLOBAL DAT_003c25c8 undefined4
// GLOBAL UNK_003c243c float

/* WARNING: Removing unreachable block (ram,0x003c2404) */
/* WARNING: Removing unreachable block (ram,0x003c2410) */

void func_00159CD8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  
  uVar1 = DAT_00159d50;
  *(undefined4 *)(param_1 + 0x978) = DAT_00159d50;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  uVar1 = DAT_00159d54;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  *(undefined4 *)(param_1 + 0x960) = 0x1e;
  *(undefined4 *)(param_1 + 0x964) = uVar1;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  func_004FABDC(param_1,4,0xffffffff,0);
  iVar3 = *(int *)(param_1 + 0x910);
  bVar5 = iVar3 == 3;
  if (bVar5) {
    iVar3 = *(int *)(param_1 + 0x90c);
  }
  if (!bVar5 || iVar3 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x920) = 0x32;
  *(undefined4 *)(param_1 + 0x910) = 0;
  fVar6 = (float)VectorUnsignedToFloat(0x32,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x924) = fRam003c243c / fVar6;
  *(undefined4 *)(param_1 + 0x91c) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x8e4);
  if (((*DAT_003c25c0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003c25c0), iVar3 != 0)) {
    *DAT_003c25c4 = DAT_003c25c8;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar4)(puVar4,DAT_003c25c4), iVar3 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 0x955) == '\0') {
      uVar2 = puVar4[0x167] | 0x60000;
    }
    else {
      uVar2 = puVar4[0x167] | 0x20000;
    }
    puVar4[0x167] = uVar2 & 0xffffffef;
  }
  return;
}

