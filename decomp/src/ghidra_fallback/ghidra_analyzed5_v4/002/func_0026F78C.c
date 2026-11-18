#include "ghidra_types.h"

extern int func_002FF068(int param_1,int param_2,int param_3,float fparam_0);
extern float DAT_0026f83c;
extern int DAT_0026f840;

// USA 0026F78C <- EU 0026F7B4 (Ghidra, non-matching)
// GLOBAL DAT_0026f83c float
// GLOBAL DAT_0026f840 int

void func_0026F78C(int *param_1)

{
  float fparam_0;
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 2) = 0xff;
  param_1[0x10] = 0;
  fparam_0 = DAT_0026f83c;
  if (*(int *)param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int *)param_1[1])[2];
  }
  *(undefined1 *)(iVar1 + 0x29) = 0;
  if ((uint)(int)(char)param_1[0xc] < *(uint *)*param_1) {
    iVar1 = *(int *)(((uint *)*param_1)[2] + (char)param_1[0xc] * 4);
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)param_1[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int *)param_1[1])[2];
  }
  func_002FF068(iVar2,*(int *)(iVar1 + 0x6c),1,fparam_0);
  iVar1 = DAT_0026f840;
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  param_1[0x1b] = iVar1;
  return;
}

