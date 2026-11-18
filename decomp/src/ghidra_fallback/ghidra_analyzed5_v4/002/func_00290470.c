#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_00532858(void);
extern int func_00552FC0(uint param_1);
extern int DAT_00290508;

// USA 00290470 <- EU 00290498 (Ghidra, non-matching)
// GLOBAL DAT_00290508 int

undefined4 func_00290470(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (((*(char *)(param_1 + 0xce) != '\0') &&
      (uVar3 = 0, (*(uint *)(DAT_00290508 + *(short *)(param_1 + 0x42) * 0x10 + 4) & 0x10000) != 0))
     && (uVar1 = func_00552FC0(*(uint *)(param_1 + 0x1c)), uVar3 = 0, uVar1 != 0)) {
    iVar2 = func_00532858();
    if (iVar2 == 0) {
      func_002D55D0(*(int *)(param_1 + 0x48),0xa2);
    }
    else {
      func_002D55D0(*(int *)(param_1 + 0x48),0xa3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

