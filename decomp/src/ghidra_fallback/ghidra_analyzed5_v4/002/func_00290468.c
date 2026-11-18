#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_00532858(void);
extern int func_00552FC0(uint param_1);
extern int DAT_00290508;

// USA 00290468 <- EU 00290490 (Ghidra, non-matching)
// GLOBAL DAT_00290508 int

undefined4 func_00290468(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar4 = 0;
  if (((*(char *)(iVar1 + 0xce) != '\0') &&
      (uVar4 = 0, (*(uint *)(DAT_00290508 + *(short *)(iVar1 + 0x42) * 0x10 + 4) & 0x10000) != 0))
     && (uVar2 = func_00552FC0(*(uint *)(iVar1 + 0x1c)), uVar4 = 0, uVar2 != 0)) {
    iVar3 = func_00532858();
    if (iVar3 == 0) {
      func_002D55D0(*(int *)(iVar1 + 0x48),0xa2);
    }
    else {
      func_002D55D0(*(int *)(iVar1 + 0x48),0xa3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

