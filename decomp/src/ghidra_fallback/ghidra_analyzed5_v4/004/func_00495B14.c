#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00409348(int param_1,int param_2,int param_3,int *param_4);
extern int func_00409DAC(undefined4 *param_1);
extern int func_00569D68(undefined4 param_1,int param_2);
extern int func_0057F260(int param_1);
extern undefined4 DAT_00495ba0;
extern int DAT_00495ba4;

// USA 00495B14 <- EU 00495AEC (Ghidra, non-matching)
// GLOBAL DAT_00495ba0 undefined4
// GLOBAL DAT_00495ba4 int

void func_00495B14(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)func_0010CF28(0x16c,param_3,0x20);
  piVar4 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_00495ba0;
    *(undefined1 *)(puVar2 + 1) = 1;
    piVar3 = (int *)func_00409DAC(puVar2 + 2);
    iVar1 = DAT_00495ba4;
    piVar4 = piVar3 + -2;
    *piVar3 = DAT_00495ba4 + 0x20;
    *piVar4 = iVar1;
  }
  *(int **)(param_1 + 0x220) = piVar4;
  (**(code **)(*piVar4 + 0x10))(piVar4,param_2);
  puVar2 = func_0057F260(param_1);
  piVar4 = (int *)func_00569D68(param_1,(int)puVar2);
  uVar5 = func_0010CEE0(piVar4,param_3,0x20);
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  puVar2 = func_0057F260(param_1);
  func_00409348(param_1,(int)puVar2,*(int *)(param_1 + 0x224),piVar4);
  *(undefined1 *)(param_1 + 0x22c) = 1;
  return;
}

