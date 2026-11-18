#include "ghidra_types.h"

extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00261558;
extern int *DAT_0026155c;
extern int DAT_00261560;

// USA 00261468 <- EU 00261490 (Ghidra, non-matching)
// GLOBAL DAT_00261558 int
// GLOBAL DAT_0026155c int *
// GLOBAL DAT_00261560 int

int * func_00261468(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_00261558;
  piVar3[200] = DAT_00261558 + 0x58;
  *piVar3 = iVar4;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar1 = DAT_0026155c;
  piVar3[0x103] = iVar4;
  piVar3[0x105] = 0;
  iVar4 = piVar1[3];
  piVar3[0x106] = piVar1[2];
  piVar3[0x107] = iVar4;
  piVar3[0x104] = DAT_00261560;
  *(char *)(piVar3 + 0x108) = (char)(short)param_2[10];
  *(char *)((int)piVar3 + 0x421) = (char)*(undefined2 *)((int)param_2 + 0x2a);
  *(bool *)((int)piVar3 + 0x422) = (short)param_2[0xb] == 1;
  *(undefined1 *)((int)piVar3 + 0x423) = 0;
  func_004356B4((int *)piVar3[0x103]);
  cVar2 = (char)piVar3[0x108];
  if (cVar2 < '\x01') {
    cVar2 = '\x01';
  }
  *(char *)(piVar3 + 0x108) = cVar2;
  cVar2 = *(char *)((int)piVar3 + 0x421);
  if (cVar2 < '\x01') {
    cVar2 = '\x01';
  }
  *(char *)((int)piVar3 + 0x421) = cVar2;
  iVar4 = *piVar1;
  iVar5 = piVar1[1];
  piVar3[0x105] = (int)piVar3;
  piVar3[0x106] = iVar4;
  piVar3[0x107] = iVar5;
  piVar3[0xb8] = piVar3[0xb8] | 2;
  return piVar3;
}

