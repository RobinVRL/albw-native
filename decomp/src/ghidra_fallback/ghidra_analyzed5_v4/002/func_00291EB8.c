#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int DAT_00291f44;

// USA 00291EB8 <- EU 00291EE0 (Ghidra, non-matching)
// GLOBAL DAT_00291f44 int

undefined4 func_00291EB8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10));
  if ((((bVar1) || (*(char *)(DAT_00291f44 + *(short *)(iVar2 + 0x42) * 0x10) == '\x0e')) ||
      (*(int *)(*(int *)(iVar2 + 0x10) + 0x5b0) != 0x3f800000)) ||
     (iVar2 = func_002D55D0(*(int *)(iVar2 + 0x48),0x22), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

