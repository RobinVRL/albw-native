#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00490AB8(int param_1,int param_2);
extern int func_0049F9B0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00580850(int param_1);

// USA 0049B88C <- EU 0049B864 (Ghidra, non-matching)

undefined4 func_0049B88C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = func_00580850(param_1);
  func_0010C0B8(iVar1 + 4);
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 0x10);
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    func_0049F9B0(param_1,2,param_1 + 0xbc);
  }
  else if (piVar2 == (int *)0x0) {
    func_0049F9B0(param_1,3,param_1 + 0xbc);
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,3);
    func_00490AB8(iVar3,param_1 + 0xbc);
  }
  return func_0010EEE0(iVar1 + 4);
}

