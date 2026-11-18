#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int DAT_00292104;

// USA 00292084 <- EU 002920AC (Ghidra, non-matching)
// GLOBAL DAT_00292104 int

undefined4 func_00292084(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = 0;
  if (((*(uint *)(DAT_00292104 + *(short *)(iVar1 + 0x42) * 0x10 + 4) & 0x80) != 0) &&
     (iVar2 = func_002D55D0(*(int *)(iVar1 + 0x48),0x6a), uVar3 = 0, iVar2 != 0)) {
    iVar1 = func_0052E7D8(*(int *)(iVar1 + 0x10),param_2);
    *(int *)(iVar2 + 0x1c) = iVar1;
    uVar3 = 1;
  }
  return uVar3;
}

