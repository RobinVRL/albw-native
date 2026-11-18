#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00364954(int param_1,undefined4 *param_2);
extern uint *DAT_002917c0;
extern undefined4 *DAT_002917c4;
extern undefined4 DAT_002917c8;

// USA 00291710 <- EU 00291738 (Ghidra, non-matching)
// GLOBAL DAT_002917c0 uint *
// GLOBAL DAT_002917c4 undefined4 *
// GLOBAL DAT_002917c8 undefined4

undefined4 func_00291710(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(short *)(param_1 + 0x42) == 0x22) {
    puVar2 = *(undefined4 **)(param_1 + 0x48);
    if (((*DAT_002917c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002917c0), iVar1 != 0)) {
      *DAT_002917c4 = DAT_002917c8;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar1 = (**(code **)*puVar2)(puVar2,DAT_002917c4), iVar1 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    return func_00364954((int)puVar2,param_2);
  }
  return 0;
}

