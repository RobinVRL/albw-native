#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0048FCD4(int param_1);
extern int func_00490AB8(int param_1,int param_2);
extern int func_0049F9B0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00580850(int param_1);

// USA 0049FD40 <- EU 0049FD18 (Ghidra, non-matching)

undefined4 func_0049FD40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  func_0048FCD4(param_1);
  iVar1 = func_00580850(param_1);
  func_0010C0B8(iVar1 + 4);
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 0x10);
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    func_0049F9B0(param_1,0xe,param_1 + 0x15c);
  }
  else if (piVar2 == (int *)0x0) {
    func_0049F9B0(param_1,0xf,param_1 + 0x15c);
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,0xf);
    func_00490AB8(iVar3,param_1 + 0x15c);
  }
  return func_0010EEE0(iVar1 + 4);
}

