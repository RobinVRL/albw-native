#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004091D8(undefined4 *param_1);
extern int func_00409348(int param_1,int param_2,int param_3,int *param_4);
extern int func_00569D68(undefined4 param_1,int param_2);
extern int func_0057F260(int param_1);
extern undefined4 DAT_00495ad8;
extern int DAT_00495adc;
extern uint *DAT_00495ae0;
extern undefined4 *DAT_00495ae4;
extern undefined4 DAT_00495ae8;

// USA 004959A8 <- EU 00495980 (Ghidra, non-matching)
// GLOBAL DAT_00495ad8 undefined4
// GLOBAL DAT_00495adc int
// GLOBAL DAT_00495ae0 uint *
// GLOBAL DAT_00495ae4 undefined4 *
// GLOBAL DAT_00495ae8 undefined4

void func_004959A8(int param_1,int *param_2,int *param_3,undefined1 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)func_0010CF28(0x1ac,param_3,0x20);
  if (puVar2 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *puVar2 = DAT_00495ad8;
    *(undefined1 *)(puVar2 + 1) = 0;
    piVar3 = func_004091D8(puVar2 + 2);
    piVar3[0x66] = 0;
    piVar3[0x65] = (int)param_3;
    piVar3[0x67] = 0;
    piVar6 = piVar3 + -2;
    *(undefined1 *)(piVar3 + 0x68) = 0;
    iVar4 = DAT_00495adc;
    *piVar3 = DAT_00495adc + 0x20;
    *piVar6 = iVar4;
  }
  puVar1 = DAT_00495ae0;
  *(int **)(param_1 + 0x220) = piVar6;
  if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00495ae0), iVar4 != 0)) {
    *DAT_00495ae4 = DAT_00495ae8;
  }
  if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)*piVar6)(piVar6,DAT_00495ae4), iVar4 == 0)) {
    piVar6 = (int *)0x0;
  }
  *(undefined1 *)(piVar6 + 0x6a) = param_4;
  piVar6 = *(int **)(param_1 + 0x220);
  (**(code **)(*param_2 + 8))(param_2);
  (**(code **)(*piVar6 + 0x10))(piVar6,param_2[1]);
  puVar2 = func_0057F260(param_1);
  piVar6 = (int *)func_00569D68(param_1,(int)puVar2);
  uVar5 = func_0010CEE0(piVar6,param_3,0x20);
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  puVar2 = func_0057F260(param_1);
  func_00409348(param_1,(int)puVar2,*(int *)(param_1 + 0x224),piVar6);
  *(undefined1 *)(param_1 + 0x22c) = 1;
  return;
}

