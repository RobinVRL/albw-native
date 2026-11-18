#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int DAT_003c943c;
extern undefined4 DAT_003c9440;
extern undefined4 DAT_003c9444;

// USA 003C9420 <- EU 003C93FC (Ghidra, non-matching)
// GLOBAL DAT_003c943c int
// GLOBAL DAT_003c9440 undefined4
// GLOBAL DAT_003c9444 undefined4

undefined4 func_003C9420(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010FB48(DAT_003c943c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_003c9440;
    puVar1[1] = param_3;
    *param_2 = puVar1;
    return 0;
  }
  software_interrupt(0x23);
  return DAT_003c9444;
}

