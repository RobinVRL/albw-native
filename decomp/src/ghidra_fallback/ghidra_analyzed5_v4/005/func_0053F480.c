#include "ghidra_types.h"

extern int DAT_0053f490;

// USA 0053F480 <- EU 0053F458 (Ghidra, non-matching)
// GLOBAL DAT_0053f490 int

undefined4 func_0053F480(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(DAT_0053f490 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x02') &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x48) + 0x74) != -1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

