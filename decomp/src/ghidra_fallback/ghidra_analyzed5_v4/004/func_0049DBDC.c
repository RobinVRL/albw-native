#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0048D9D0(int *param_1,byte *param_2);
extern int func_0049DC40(int param_1,byte *param_2,int param_3);

// USA 0049DBDC <- EU 0049DBB4 (Ghidra, non-matching)

undefined4 func_0049DBDC(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1 + 4;
  func_0010C0B8(iVar2);
  if (*(int **)(param_2 + 100) != (int *)0x0) {
    uVar1 = func_0048D9D0(*(int **)(param_2 + 100),param_2);
    func_0010EEE0(iVar2);
    return uVar1;
  }
  uVar1 = func_0049DC40(param_1,param_2,0);
  func_0010EEE0(iVar2);
  return uVar1;
}

