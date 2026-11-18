#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00364864(int param_1);
extern uint *DAT_002906c0;
extern undefined4 *DAT_002906c4;
extern undefined4 DAT_002906c8;

// USA 00290614 <- EU 0029063C (Ghidra, non-matching)
// GLOBAL DAT_002906c0 uint *
// GLOBAL DAT_002906c4 undefined4 *
// GLOBAL DAT_002906c8 undefined4

undefined4 func_00290614(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(short *)(*(int *)(param_1 + 0x14) + 0x42) != 0x22) {
    return 0;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 0x48);
  if (((*DAT_002906c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002906c0), iVar1 != 0)) {
    *DAT_002906c4 = DAT_002906c8;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_002906c4), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  return func_00364864((int)puVar2);
}

