#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00291F58 <- EU 00291F80 (Ghidra, non-matching)

undefined4 func_00291F58(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(*(int *)(iVar1 + 0x10) + 0x5b0) != 0x3f800000) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 0x84) = 0;
  puVar2 = (undefined2 *)func_002D55D0(*(int *)(iVar1 + 0x48),0x8e);
  if (puVar2 != (undefined2 *)0x0) {
    if (param_2 == 0) {
      *puVar2 = 0x89;
    }
    else {
      if (param_2 == 1) {
        uVar3 = 0x93;
      }
      else {
        if (param_2 != 2) {
          return 1;
        }
        uVar3 = 0x94;
      }
      *puVar2 = uVar3;
    }
  }
  return 1;
}

