/* compilefix: USA 002ABD44 (EU 002ABD20): dropped 3rd argument of a virtual call restored (BOOT_LOG 152). */
#include "ghidra_types.h"


// USA 002ABD44 <- EU 002ABD20 (Ghidra, non-matching)

void func_002ABD44(int param_1)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 1;
  *(undefined1 *)(param_1 + 0x111) = 0;
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0x116) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x116) = 0;
  }
  *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) = *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) | 0x80;
  /* EU 2ABD30: r2 = this + 0xEC (the hit record whose +0x2A byte was just set); the text dropped
   * it and 004F3320 read NULL + 0x2A (crash when an enemy was hit, BOOT_LOG 152) */
  (**(code **)(**(int **)(param_1 + 0x34) + 0x60))(*(int **)(param_1 + 0x34),0,param_1 + 0xec);
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x89c) = 0;
  return;
}

