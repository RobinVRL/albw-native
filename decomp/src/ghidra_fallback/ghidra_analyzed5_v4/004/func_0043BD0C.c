#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);

// USA 0043BD0C <- EU 0043BCEC (Ghidra, non-matching)

undefined4 func_0043BD0C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x80);
  if (param_2 != 0) {
    if (param_2 == 1) {
      func_00167E04(iVar1,iVar2,0);
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x84),1);
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    else {
      func_00167E04(iVar1,iVar2,0);
      func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x84),0);
      iVar1 = *(int *)(param_1 + 0x1c);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    return func_00167E04(iVar1,iVar2,(uint)(param_2 != 1));
  }
  func_00167E04(iVar1,iVar2,1);
  func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x84),0);
  return func_00167E04(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x88),0);
}

