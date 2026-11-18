#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int *DAT_0039712c;
extern int DAT_00397130;
extern int DAT_00397134;
extern int DAT_00397138;

// USA 00396FE8 <- EU 00396FC4 (Ghidra, non-matching)
// GLOBAL DAT_0039712c int *
// GLOBAL DAT_00397130 int
// GLOBAL DAT_00397134 int
// GLOBAL DAT_00397138 int

int * func_00396FE8(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  piVar1 = DAT_0039712c;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  param_1[6] = 0;
  param_1[8] = 0;
  iVar3 = piVar1[9];
  param_1[9] = piVar1[8];
  param_1[10] = iVar3;
  iVar3 = DAT_00397130;
  param_1[0xb] = 0;
  param_1[7] = iVar3;
  param_1[0xd] = 0;
  iVar4 = piVar1[8];
  iVar5 = piVar1[9];
  param_1[0xc] = iVar3;
  param_1[0xe] = iVar4;
  param_1[0xf] = iVar5;
  param_1[0x11] = 0;
  iVar4 = piVar1[8];
  iVar5 = piVar1[9];
  param_1[0x10] = iVar3;
  param_1[0x12] = iVar4;
  param_1[0x13] = iVar5;
  param_1[0x15] = 0;
  iVar4 = piVar1[8];
  iVar5 = piVar1[9];
  param_1[0x14] = iVar3;
  param_1[0x16] = iVar4;
  param_1[0x17] = iVar5;
  piVar2 = (int *)func_0054D964(param_2,0);
  param_1[6] = (int)piVar2;
  func_004356B4(piVar2);
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  param_1[8] = (int)param_1;
  param_1[9] = iVar3;
  param_1[10] = iVar4;
  *(undefined2 *)(param_1[6] + 0x28) = 7;
  piVar2 = (int *)func_0054D964(param_2,0);
  param_1[0xb] = (int)piVar2;
  func_004356B4(piVar2);
  iVar4 = piVar1[2];
  iVar5 = piVar1[3];
  param_1[0xd] = (int)param_1;
  iVar3 = DAT_00397134;
  param_1[0xe] = iVar4;
  param_1[0xf] = iVar5;
  *(undefined2 *)(param_1[0xb] + 0x28) = 7;
  iVar4 = piVar1[4];
  iVar5 = piVar1[5];
  param_1[0x11] = (int)param_1;
  param_1[0x12] = iVar4;
  param_1[0x13] = iVar5;
  iVar4 = piVar1[6];
  iVar5 = piVar1[7];
  param_1[0x15] = (int)param_1;
  param_1[0x16] = iVar4;
  param_1[0x17] = iVar5;
  param_1[1] = iVar3;
  if (**(char **)(param_2 + 0x8bc) != '\0') {
    param_1[1] = DAT_00397138;
  }
  return param_1;
}

