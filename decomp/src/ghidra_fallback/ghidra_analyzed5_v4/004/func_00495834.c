#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00408EA8(undefined4 *param_1);
extern int func_00409348(int param_1,int param_2,int param_3,int *param_4);
extern int func_00569D68(undefined4 param_1,int param_2);
extern int func_0057F260(int param_1);
extern undefined4 DAT_0049596c;
extern int DAT_00495970;
extern uint *DAT_00495974;
extern undefined4 *DAT_00495978;
extern undefined4 DAT_0049597c;

// USA 00495834 <- EU 0049580C (Ghidra, non-matching)
// GLOBAL DAT_0049596c undefined4
// GLOBAL DAT_00495970 int
// GLOBAL DAT_00495974 uint *
// GLOBAL DAT_00495978 undefined4 *
// GLOBAL DAT_0049597c undefined4

void func_00495834(int param_1,int *param_2,int *param_3,undefined1 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)func_0010CF28(0x1ac,param_3,0x20);
  if (puVar2 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *puVar2 = DAT_0049596c;
    *(undefined1 *)(puVar2 + 1) = 2;
    piVar3 = func_00408EA8(puVar2 + 2);
    piVar3[0x66] = 0;
    piVar3[0x65] = (int)param_3;
    piVar3[0x67] = 0;
    *(undefined1 *)(piVar3 + 0x68) = 0;
    piVar6 = piVar3 + -2;
    iVar5 = DAT_00495970 + 0x20;
    *piVar6 = DAT_00495970;
    *piVar3 = iVar5;
  }
  puVar1 = DAT_00495974;
  *(int **)(param_1 + 0x220) = piVar6;
  if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00495974), iVar5 != 0)) {
    *DAT_00495978 = DAT_0049597c;
  }
  if ((piVar6 == (int *)0x0) || (iVar5 = (**(code **)*piVar6)(piVar6,DAT_00495978), iVar5 == 0)) {
    piVar6 = (int *)0x0;
  }
  *(undefined1 *)(piVar6 + 0x6a) = param_4;
  piVar6 = *(int **)(param_1 + 0x220);
  (**(code **)(*param_2 + 8))(param_2);
  iVar5 = (**(code **)(*piVar6 + 0x10))(piVar6,param_2[1]);
  if (iVar5 != 0) {
    puVar2 = func_0057F260(param_1);
    piVar6 = (int *)func_00569D68(param_1,(int)puVar2);
    uVar4 = func_0010CEE0(piVar6,param_3,0x20);
    *(undefined4 *)(param_1 + 0x224) = uVar4;
    puVar2 = func_0057F260(param_1);
    func_00409348(param_1,(int)puVar2,*(int *)(param_1 + 0x224),piVar6);
    *(undefined1 *)(param_1 + 0x22c) = 1;
  }
  return;
}

