#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_00588F08(int param_1);
extern int *DAT_00268aec;
extern undefined4 *DAT_00268af0;
extern undefined4 *DAT_00268af4;
extern undefined4 *DAT_00268af8;
extern undefined4 *DAT_00268afc;
extern undefined4 *DAT_00268b00;
extern undefined4 *DAT_00268b04;
extern float *DAT_00268b08;

// USA 002689D4 <- EU 002689FC (Ghidra, non-matching)
// GLOBAL DAT_00268aec int *
// GLOBAL DAT_00268af0 undefined4 *
// GLOBAL DAT_00268af4 undefined4 *
// GLOBAL DAT_00268af8 undefined4 *
// GLOBAL DAT_00268afc undefined4 *
// GLOBAL DAT_00268b00 undefined4 *
// GLOBAL DAT_00268b04 undefined4 *
// GLOBAL DAT_00268b08 float *

void func_002689D4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  
  puVar1 = (undefined4 *)func_00588F08(*DAT_00268aec);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined4 *)(param_1 + 0xabc) = puVar1[2];
  *(undefined4 *)(param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  iVar2 = param_1 + 0x9ac;
  *(undefined4 **)(param_1 + 0x9d4) = (undefined4 *)(param_1 + 0xab4);
  func_0036C058(iVar2,0xffffffff,0xffffffff,0);
  func_0036C2B8(iVar2,*DAT_00268af0);
  func_0036C2B8(iVar2,*DAT_00268af4);
  func_0036C2B8(iVar2,*DAT_00268af8);
  func_0036C2B8(iVar2,*DAT_00268afc);
  func_0036C2B8(iVar2,*DAT_00268b00);
  func_0036C2B8(iVar2,*DAT_00268b04);
  pfVar5 = (float *)(param_1 + 0x984);
  func_0053A554(param_1,pfVar5,DAT_00268b08);
  func_00115C54(pfVar5,pfVar5,(float *)(param_1 + 0x3d0));
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f | 0x4000;
  return;
}

