#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 004A9948 <- EU 004A9920 (Ghidra, non-matching)

void func_004A9948(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  float in_s0;
  
  piVar1 = (int *)(param_1 + 0x10);
  *(char *)(param_2 + 0x20) = (char)param_3;
  iVar2 = *(int *)(param_2 + 0x4c);
  if (param_3 < 0xf) {
    piVar1 = piVar1 + param_3 * 3;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    func_0010F1F8((int *)(param_2 + 0x40),in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  *(int **)(param_2 + 0x4c) = piVar1;
  func_0010F1DC(piVar1,(int *)(param_2 + 0x40));
  piVar1[2] = piVar1[2] + 1;
  return;
}

