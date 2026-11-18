// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B6A8(int param_1,int param_2);
extern int func_0025B74C(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0025BDA4(int *param_1,int *param_2);

// USA 004E97BC <- EU 004E9794 (Ghidra, non-matching)

undefined4 func_004E97BC(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_3;
  piVar1 = func_0025BDA4(*(int **)(param_1 + 0x40),param_2);
  if (piVar1 != (int *)0x0 && param_3 != 0) {
    func_0025B6A8(param_3,(int)piVar1);
    return func_0025B74C(param_3,*(undefined1 *)(*(int *)(param_1 + 0x50) + 0xdb),iVar2,param_4);
  }
  return 0;
}

