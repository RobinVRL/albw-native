#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern undefined4 DAT_00200548;
extern int *DAT_0020054c;
extern uint *DAT_00200550;
extern undefined4 *DAT_00200554;
extern undefined4 DAT_00200558;

// USA 0020045C <- EU 0020045C (Ghidra, non-matching)
// GLOBAL DAT_00200548 undefined4
// GLOBAL DAT_0020054c int *
// GLOBAL DAT_00200550 uint *
// GLOBAL DAT_00200554 undefined4 *
// GLOBAL DAT_00200558 undefined4

void func_0020045C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = DAT_00200548;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  piVar2 = DAT_0020054c;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  puVar3 = (undefined4 *)func_0052FBDC(*piVar2 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0);
  if (puVar3 != (undefined4 *)0x0) {
    if (((*DAT_00200550 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00200550), iVar4 != 0)) {
      *DAT_00200554 = DAT_00200558;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_00200554);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[0xca] - (int)*(short *)(puVar3 + 0x1ee) != *(int *)(param_1 + 0x934)) {
        *(int *)(param_1 + 0x934) = puVar3[0xca] - (int)*(short *)(puVar3 + 0x1ee);
      }
      if (1 < puVar3[0xca] - (int)*(short *)(puVar3 + 0x1ee)) {
        return;
      }
    }
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x2000;
  return;
}

