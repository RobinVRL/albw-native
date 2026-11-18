#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00494510(undefined4 *param_1,int param_2,int *param_3);
extern int func_0057F260(int param_1);

// USA 00495760 <- EU 00495738 (Ghidra, non-matching)

void func_00495760(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)func_0010CF28(0x30,param_3,0x20);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00494510(puVar1,param_2,param_3);
  }
  *(int **)(param_1 + 0x144) = piVar2;
  iVar3 = *(int *)(param_1 + 0x140);
  *(int **)(iVar3 + 0x228) = piVar2;
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar1 = func_0057F260(iVar3);
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = *(int *)(iVar3 + 0x228);
    *(int *)(iVar4 + 0x28) = iVar3;
    *(undefined4 **)(iVar4 + 0x2c) = puVar1;
    return;
  }
  return;
}

