#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0053A554(int param_1,float *param_2,float *param_3);
extern int func_00588F08(int param_1);
extern undefined4 DAT_0026873c;
extern int *DAT_00268740;
extern undefined4 *DAT_00268744;
extern undefined4 *DAT_00268748;
extern undefined4 *DAT_0026874c;
extern undefined4 *DAT_00268750;
extern float *DAT_00268754;

// USA 0026861C <- EU 00268644 (Ghidra, non-matching)
// GLOBAL DAT_0026873c undefined4
// GLOBAL DAT_00268740 int *
// GLOBAL DAT_00268744 undefined4 *
// GLOBAL DAT_00268748 undefined4 *
// GLOBAL DAT_0026874c undefined4 *
// GLOBAL DAT_00268750 undefined4 *
// GLOBAL DAT_00268754 float *

void func_0026861C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  
  uVar3 = DAT_0026873c;
  *(undefined4 *)(param_1 + 0xad8) = 0x3c;
  *(undefined4 *)(param_1 + 0xadc) = uVar3;
  *(undefined4 *)(param_1 + 0xad4) = 0;
  puVar1 = (undefined4 *)func_00588F08(*DAT_00268740);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined4 *)(param_1 + 0xabc) = puVar1[2];
  *(undefined4 *)(param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0xab8) = uVar4;
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  iVar2 = param_1 + 0x9ac;
  *(undefined4 **)(param_1 + 0x9d4) = (undefined4 *)(param_1 + 0xab4);
  func_0036C058(iVar2,0xffffffff,0xffffffff,0);
  func_0036C2B8(iVar2,*DAT_00268744);
  func_0036C2B8(iVar2,*DAT_00268748);
  func_0036C2B8(iVar2,*DAT_0026874c);
  func_0036C2B8(iVar2,*DAT_00268750);
  pfVar5 = (float *)(param_1 + 0x984);
  func_0053A554(param_1,pfVar5,DAT_00268754);
  func_00115C54(pfVar5,pfVar5,(float *)(param_1 + 0x3d0));
  *(undefined1 *)(param_1 + 0xba6) = 1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f | 0x4000;
  return;
}

