#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00490AB8(int param_1,int param_2);
extern int func_0049F9B0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00580850(int param_1);

// USA 0048FCD4 <- EU 0048FCAC (Ghidra, non-matching)

undefined4 func_0048FCD4(int param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_r5;
  
  iVar1 = func_00580850(param_1);
  func_0010C0B8(iVar1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    unaff_r5 = *(int **)(iVar2 + 0x10);
  }
  if (iVar2 == 0) {
    unaff_r5 = (int *)0x0;
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    func_0049F9B0(param_1,5,param_1 + 0xbc);
    func_0049F9B0(param_1,8,param_1 + 0x10c);
  }
  else if (unaff_r5 == (int *)0x0) {
    func_0049F9B0(param_1,6,param_1 + 0xbc);
    func_0049F9B0(param_1,9,param_1 + 0x10c);
  }
  else {
    iVar2 = (**(code **)(*unaff_r5 + 0x50))(unaff_r5,6);
    func_00490AB8(iVar2,param_1 + 0xbc);
    iVar2 = (**(code **)(*unaff_r5 + 0x50))(unaff_r5,9);
    func_00490AB8(iVar2,param_1 + 0x10c);
  }
  return func_0010EEE0(iVar1 + 4);
}

