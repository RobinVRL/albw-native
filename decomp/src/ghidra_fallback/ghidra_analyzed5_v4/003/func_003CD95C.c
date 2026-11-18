#include "ghidra_types.h"

extern ushort *DAT_003cd968;

// USA 003CD95C <- EU 003CD938 (Ghidra, non-matching)
// GLOBAL DAT_003cd968 ushort *

uint * func_003CD95C(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x10) {
    if ((*DAT_003cd968 >> (uVar1 & 0xff) & 1) != 0) {
      *DAT_003cd968 = *DAT_003cd968 & ~(ushort)(1 << (uVar1 & 0xff));
    }
  }
  return param_1;
}

