#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010C160(int *param_1);
extern int func_0049F9B0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00580850(int param_1);

// USA 0010EE50 <- EU 0010EE50 (Ghidra, non-matching)

undefined4 func_0010EE50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_00580850((int)param_1);
  func_0010C0B8(iVar1 + 4);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,7);
  func_0049F9B0((int)param_1,7,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x10);
  func_0049F9B0((int)param_1,0x10,uVar2);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,10);
  func_0049F9B0((int)param_1,10,uVar2);
  return func_0010C160((int *)(iVar1 + 0x14));
}

