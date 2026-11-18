#include "ghidra_types.h"

extern int func_0065FCF8(undefined4 *param_1,undefined1 param_2);

// USA 00251E4C <- EU 00251E74 (Ghidra, non-matching)

undefined4 func_00251E4C(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x4fc);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x500) == '\a') {
      if (*(char *)(param_1 + 0x8a8) != '\0') {
        return 1;
      }
    }
    else {
      func_0065FCF8(puVar1,7);
      *(undefined1 *)(param_1 + 0x8a8) = 0;
    }
  }
  else if (param_2 == 1) {
    if (*(char *)(param_1 + 0x500) == '\b') {
      if (*(char *)(param_1 + 0x8a8) != '\0') {
        func_0065FCF8(puVar1,5);
        return 1;
      }
    }
    else {
      func_0065FCF8(puVar1,8);
      *(undefined1 *)(param_1 + 0x8a8) = 0;
    }
  }
  return 0;
}

