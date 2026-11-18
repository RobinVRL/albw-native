#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00412BB4(void);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412EF4(int param_1,int param_2);
extern int func_0041DBD0(int *param_1,int param_2,int param_3);

// USA 0041E178 <- EU 0041E158 (Ghidra, non-matching)

undefined4 func_0041E178(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_r2;
  
  func_0010C0C0((int *)(param_1 + 4));
  func_0041DBD0((int *)(param_1 + 0x10),param_2,in_r2);
  piVar1 = (int *)func_00412BB4();
  iVar2 = func_00412C8C(piVar1,1);
  func_00412EF4((int)piVar1,iVar2);
  return func_0010C160((int *)(param_1 + 4));
}

