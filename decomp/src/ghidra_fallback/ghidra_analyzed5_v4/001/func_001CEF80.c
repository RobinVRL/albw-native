#include "ghidra_types.h"

extern int func_0065C454(undefined4 *param_1,undefined1 param_2);
extern float DAT_001cf004;

// USA 001CEF80 <- EU 001CEF80 (Ghidra, non-matching)
// GLOBAL DAT_001cf004 float

undefined4 func_001CEF80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    return 0;
  }
  if (*(float *)(iVar1 + 0x10) < DAT_001cf004) {
    if (DAT_001cf004 < *(float *)(iVar1 + 8)) {
      return 0;
    }
  }
  else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x43c) < *(uint *)(param_1 + 0x440)) {
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) + 1;
    return 0;
  }
  return func_0065C454((undefined4 *)(param_1 + 0x40c),2);
}

