#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_00665160(undefined4 *param_1,undefined1 param_2);
extern int DAT_00319678;
extern float DAT_0031967c;
extern float DAT_00319680;

// USA 00319628 <- EU 00319604 (Ghidra, non-matching)
// GLOBAL DAT_00319678 int
// GLOBAL DAT_0031967c float
// GLOBAL DAT_00319680 float

undefined4 func_00319628(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(DAT_00319678 + 0x2a0);
  uVar5 = *(undefined4 *)(DAT_00319678 + 0x2a8);
  fVar3 = *(float *)(DAT_00319678 + 0x2a4) + DAT_0031967c;
  *(undefined4 *)(param_1 + 1000) = param_2;
  *(undefined4 *)(param_1 + 0x368) = uVar4;
  fVar1 = DAT_00319680;
  *(float *)(param_1 + 0x36c) = fVar3;
  *(undefined4 *)(param_1 + 0x370) = uVar5;
  *(undefined4 *)(param_1 + 0x3d0) = uVar4;
  *(float *)(param_1 + 0x3d4) = fVar3;
  *(undefined4 *)(param_1 + 0x3d8) = uVar5;
  iVar2 = *(int *)(param_1 + 0x424);
  *(undefined4 *)(iVar2 + 4) = uVar4;
  *(float *)(iVar2 + 8) = fVar3 + fVar1;
  *(undefined4 *)(iVar2 + 0xc) = uVar5;
  func_004356B4(*(int **)(param_1 + 0x424));
  return func_00665160((undefined4 *)(param_1 + 0x49c),1);
}

