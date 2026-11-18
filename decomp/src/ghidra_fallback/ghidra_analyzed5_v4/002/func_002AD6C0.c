#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);
extern int func_004FD0B4(int param_1);

// USA 002AD6C0 <- EU 002AD69C (Ghidra, non-matching)

undefined4 func_002AD6C0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 1;
  func_002ADE0C(param_1,param_2);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  if ((param_2 == 0x12 || param_2 == 0x13) || (param_2 == 2 || param_2 == 0x1f)) {
    iVar1 = 0;
  }
  else {
    func_004FD0B4(*(int *)(param_1 + 0x34));
  }
  return func_002AD658(param_1,0x13,param_2 & 0xff,(int)*(char *)(param_1 + 0x110),
                *(undefined1 *)(param_1 + 0x111),iVar1);
}

