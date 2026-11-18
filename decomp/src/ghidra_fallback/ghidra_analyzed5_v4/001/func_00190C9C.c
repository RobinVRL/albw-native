#include "ghidra_types.h"

extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_00581D60(int param_1);
extern int *DAT_00190d34;
extern float DAT_00190d38;
extern float DAT_00190d3c;
extern float DAT_00190d40;
extern float DAT_00190d44;
extern int *DAT_00190d48;

// USA 00190C9C <- EU 00190C9C (Ghidra, non-matching)
// GLOBAL DAT_00190d34 int *
// GLOBAL DAT_00190d38 float
// GLOBAL DAT_00190d3c float
// GLOBAL DAT_00190d40 float
// GLOBAL DAT_00190d44 float
// GLOBAL DAT_00190d48 int *

void func_00190C9C(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = DAT_00190d34;
  func_0052E32C(*DAT_00190d34,(undefined4 *)(param_1 + 0x3d0));
  fVar2 = DAT_00190d44;
  fVar6 = DAT_00190d40;
  fVar5 = DAT_00190d3c;
  iVar3 = *piVar1;
  *(undefined4 *)(param_1 + 1000) = **(undefined4 **)(iVar3 + 0x24);
  fVar4 = *(float *)(*(int *)(iVar3 + 0x1c) + 4);
  *(float *)(param_1 + 0x58c) = fVar4;
  fVar6 = (fVar2 * ((*(float *)(param_1 + 0x3d4) - fVar4) - fVar5)) / fVar6 + DAT_00190d38;
  fVar5 = DAT_00190d38;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar6)) {
    fVar5 = fVar6;
  }
  *(float *)(param_1 + 0x590) = fVar6;
  piVar1 = DAT_00190d48;
  *(float *)(param_1 + 0x590) = fVar5;
  iVar3 = func_00581D60(*piVar1);
  if (iVar3 != *(int *)(param_1 + 0x598)) {
    *(undefined1 *)(param_1 + 0x588) = 1;
  }
  return;
}

