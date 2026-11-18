#include "ghidra_types.h"

extern void func_0048F288(int param_1,float fparam_0);
extern float func_0057E558(int param_1,uint param_2);
extern float DAT_00407f80;

// USA 00407F04 <- EU 00407EE4 (Ghidra, non-matching)
// GLOBAL DAT_00407f80 float

void func_00407F04(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float in_s0;
  float fVar4;
  
  func_0048F288(param_1 + 300,in_s0);
  fVar4 = func_0057E558(param_1 + 300,2);
  uVar3 = 0;
  do {
    if (uVar3 < *(uint *)(param_1 + 0x178)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x180) + uVar3 * 4);
    }
    else {
      piVar1 = (int *)0x0;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
    if (uVar3 < *(uint *)(param_1 + 0x178)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x180) + uVar3 * 4);
    }
    else {
      iVar2 = 0;
    }
    uVar3 = uVar3 + 1;
    fVar4 = *(float *)(iVar2 + 4) * fVar4;
  } while ((int)uVar3 < 4);
  if (fVar4 < DAT_00407f80) {
    fVar4 = DAT_00407f80;
  }
  *(float *)(*(int *)(param_1 + 0xbc) + 0x3c) = fVar4;
  return;
}

