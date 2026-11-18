#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_00307f00;
extern float DAT_00307f04;

// USA 00307E68 <- EU 00307E44 (Ghidra, non-matching)
// GLOBAL DAT_00307f00 float
// GLOBAL DAT_00307f04 float

void func_00307E68(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  func_00169A80(*(int **)(param_1 + 0x44c),param_2,param_3,param_4);
  func_00169A80(*(int **)(param_1 + 0x450),extraout_r1,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x44c),*(int *)(param_1 + 0x448),(int *)0x1);
  func_00168E9C(*(int **)(param_1 + 0x450),*(int *)(param_1 + 0x448),(int *)0x1);
  fVar1 = DAT_00307f04;
  if (0 < *(int *)(*(int *)(param_1 + 0x450) + 0xc)) {
    *(float *)(param_1 + 0x43c) = *(float *)(param_1 + 0x43c) + DAT_00307f00;
    *(float *)(param_1 + 0x444) = *(float *)(param_1 + 0x444) + fVar1;
    uVar3 = *(undefined4 *)(param_1 + 0x43c);
    iVar2 = **(int **)(*(int *)(param_1 + 0x448) + 0x20);
    *(undefined4 *)(iVar2 + 0xf8) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(iVar2 + 0xfc) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x444);
    iVar2 = **(int **)(*(int *)(param_1 + 0x448) + 0x20);
    *(undefined4 *)(iVar2 + 0x110) = *(undefined4 *)(param_1 + 0x440);
    *(undefined4 *)(iVar2 + 0x114) = uVar3;
  }
  return;
}

