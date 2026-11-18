#include "ghidra_types.h"

extern int func_002FF068(int param_1,int param_2,int param_3,float fparam_0);
extern float DAT_0026f8c8;

// USA 0026F81C <- EU 0026F844 (Ghidra, non-matching)
// GLOBAL DAT_0026f8c8 float

void func_0026F81C(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)((int)param_1 + 0x73) = 0;
  piVar1 = param_1 + 0xc;
  if ((uint)(int)(char)param_1[2] < 0x10) {
    piVar1 = (int *)((int)piVar1 + (int)(char)param_1[2]);
  }
  if ((uint)(int)(char)*piVar1 < *(uint *)*param_1) {
    iVar2 = *(int *)(((uint *)*param_1)[2] + (char)*piVar1 * 4);
  }
  else {
    iVar2 = 0;
  }
  if (*(int *)param_1[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int *)param_1[1])[2];
  }
  func_002FF068(iVar3,*(int *)(iVar2 + 0x6c),1,DAT_0026f8c8);
  if (*(int *)param_1[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int *)param_1[1])[2];
  }
  *(undefined1 *)(iVar2 + 0x29) = 1;
  return;
}

