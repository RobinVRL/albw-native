#include "ghidra_types.h"

extern int func_004F7A60(int param_1,int param_2);

// USA 0032D634 <- EU 0032D610 (Ghidra, non-matching)

undefined4 func_0032D634(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x508) < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = func_004F7A60(param_1,param_2);
    uVar1 = 0;
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0xbac) == '\b') {
        *(undefined1 *)(param_1 + 0xc92) = 0;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

