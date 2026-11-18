#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00232540(undefined4 *param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern undefined4 DAT_0031bf70;
extern int DAT_0031bf74;
extern int DAT_0031bf78;

// USA 0031BF10 <- EU 0031BEEC (Ghidra, non-matching)
// GLOBAL DAT_0031bf70 undefined4
// GLOBAL DAT_0031bf74 int
// GLOBAL DAT_0031bf78 int

int * func_0031BF10(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_0031bf70;
  piVar2 = func_00232540(puVar1 + 4);
  piVar4 = piVar2 + -4;
  iVar3 = DAT_0031bf74 + 0x18;
  *piVar4 = DAT_0031bf74;
  *piVar2 = iVar3;
  iVar3 = DAT_0031bf78;
  *(undefined2 *)(piVar2 + 8) = 0;
  *(undefined2 *)((int)piVar2 + 0x22) = 0xffff;
  piVar2[9] = iVar3;
  piVar2[10] = 0;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  *(undefined2 *)((int)piVar2 + 0x2e) = 0xffff;
  piVar2[0xc] = iVar3;
  piVar2[0xd] = 0;
  piVar2[0xe] = 0;
  piVar2[0xf] = -1;
  func_0031B220((int)piVar4,param_2,param_3);
  return piVar4;
}

