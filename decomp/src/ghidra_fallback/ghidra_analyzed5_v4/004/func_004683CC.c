#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00468484;

// USA 004683CC <- EU 004683A4 (Ghidra, non-matching)
// GLOBAL DAT_00468484 float

void func_004683CC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = (int)*(char *)(param_1 + 299);
  if (*(byte *)(param_1 + 0x128) < 5) {
    uVar1 = 0;
    do {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar1 < 4) {
        piVar4 = piVar4 + uVar1;
      }
      if (*(int *)(*piVar4 + 0xb0) == iVar3) {
        if (uVar1 != 0) goto LAB_004683e4;
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 4);
  }
  if (*(char *)(param_1 + 0x125) < iVar3) {
    if (iVar3 < *(char *)(param_1 + 0x124)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 0;
  }
LAB_004683e4:
  piVar4 = (int *)(param_1 + 500);
  if (uVar1 < 4) {
    piVar4 = piVar4 + uVar1;
  }
  iVar3 = *piVar4;
  uVar5 = *(undefined4 *)(iVar3 + 0x20);
  uVar6 = *(undefined4 *)(iVar3 + 0x24);
  iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 0x118) + 0x1c) + 0x10);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = uVar5;
  *(undefined4 *)(iVar2 + 0x24) = uVar6;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  iVar3 = *(int *)(param_1 + 0x118);
  *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined2 *)(iVar3 + 0x22) = 0;
  *(undefined2 *)(iVar3 + 0x20) = 0;
  func_00231524(iVar3 + 0x20);
  func_002317C0((undefined2 *)(iVar3 + 0x2c),DAT_00468484);
  return;
}

