#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00435610 <- EU 004355F0 (Ghidra, non-matching)

void func_00435610(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  func_00169A80(*(int **)(param_1 + 0x410),param_2,param_3,param_4);
  piVar3 = (int *)(param_1 + 0x40c);
  uVar2 = 0;
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x414),extraout_r1,uVar2,param_4);
  func_00168E9C(*(int **)(param_1 + 0x414),*piVar3,(int *)0x0);
  iVar1 = *piVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*piVar3);
  iVar1 = *(int *)(param_1 + 0x45c);
  uVar2 = *(undefined4 *)(param_1 + 0x444);
  uVar4 = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x440);
  *(undefined4 *)(iVar1 + 8) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  piVar3 = *(int **)(param_1 + 0x45c);
  if ((char)piVar3[0xc] == '\0') {
    *(undefined1 *)(piVar3 + 0xc) = 1;
    piVar3[7] = piVar3[1];
    piVar3[8] = piVar3[2];
    piVar3[9] = piVar3[3];
  }
  piVar3[4] = piVar3[7];
  piVar3[5] = piVar3[8];
  piVar3[6] = piVar3[9];
  (**(code **)(*piVar3 + 0x10))(piVar3);
  piVar3[7] = piVar3[1];
  piVar3[8] = piVar3[2];
  piVar3[9] = piVar3[3];
  return;
}

