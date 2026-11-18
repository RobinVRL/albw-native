#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00512c84;
extern float DAT_00512c88;

// USA 00512C0C <- EU 00512BE4 (Ghidra, non-matching)
// GLOBAL DAT_00512c84 float
// GLOBAL DAT_00512c88 float

void func_00512C0C(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  fVar2 = DAT_00512c88;
  fVar1 = DAT_00512c84;
  *(float *)(param_1 + 0x3dc) =
       *(float *)(param_1 + 0x3dc) + -*(float *)(param_1 + 0x3dc) * DAT_00512c84;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x3e4) + -*(float *)(param_1 + 0x3e4) * fVar1;
  iVar3 = *(int *)(*(int *)(param_1 + 0x4b0) + 0x14);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    if (*(float *)(iVar3 + 0x10) < fVar2) {
      if (fVar2 < *(float *)(iVar3 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return;
    }
    func_0066B94C((undefined4 *)(param_1 + 0x48c),5);
  }
  return;
}

