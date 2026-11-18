#include "ghidra_types.h"

extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00127ca8;

// USA 00127C14 <- EU 00127C14 (Ghidra, non-matching)
// GLOBAL DAT_00127ca8 float

void func_00127C14(int param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x3d4) - DAT_00127ca8;
  *(float *)(param_1 + 0x3d4) = fVar2;
  if (*(float *)(param_1 + 0x904) < fVar2) {
    if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
      *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
    }
    else {
      func_006568D8((undefined4 *)(param_1 + 0x8bc),8);
    }
  }
  else {
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x904);
    func_006568D8((undefined4 *)(param_1 + 0x8bc),8);
  }
  func_0051D39C((int *)(param_1 + 1000),0,*(int *)(param_1 + 0x908));
  iVar1 = *(int *)(param_1 + 0x908);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x908) = iVar1 + -1;
  }
  return;
}

