#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_004f05ec;
extern int *DAT_004f05f0;

// USA 004F059C <- EU 004F0574 (Ghidra, non-matching)
// GLOBAL DAT_004f05ec int *
// GLOBAL DAT_004f05f0 int *

undefined4 func_004F059C(int param_1)

{
  uint uVar1;
  
  uVar1 = func_00111A64((uint *)(*DAT_004f05ec + 0x660));
  uVar1 = (uint)((ulonglong)uVar1 * 100 >> 0x20);
  if (param_1 == *DAT_004f05f0) {
    if (9 < uVar1) {
      if (uVar1 < 0xf) {
        return 7;
      }
      if (uVar1 < 0x17) {
        return 9;
      }
      return 0xffffffff;
    }
  }
  else if (0x13 < uVar1) {
    if (uVar1 < 0x1e) {
      return 7;
    }
    return 0xffffffff;
  }
  return 0;
}

