#include "ghidra_types.h"

extern int *DAT_002cba14;

// USA 002CB9B8 <- EU 002CB994 (Ghidra, non-matching)
// GLOBAL DAT_002cba14 int *

uint func_002CB9B8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *DAT_002cba14;
  if (param_4 == 0) {
    param_1 = (uint)*(byte *)(iVar1 + 0x2e4);
    if ((param_1 != 0) && (param_1 != 1)) {
      return 2;
    }
  }
  else {
    if (param_4 == 1) {
      if (*(char *)(iVar1 + 0x70) == '\x04') {
        if (*(char *)(*DAT_002cba14 + 0x2eb) == '\0') {
          return 0;
        }
      }
      else if (*(char *)(*DAT_002cba14 + 0x2eb) == '\0') {
        *(undefined1 *)(iVar1 + 0x2eb) = 1;
        return 1;
      }
      return 2;
    }
    if (param_4 == 2) {
      param_1 = (uint)*(byte *)(param_1 + 0x999);
    }
    if (param_4 != 2 || param_1 != 1) {
      param_1 = 0;
    }
  }
  return param_1;
}

