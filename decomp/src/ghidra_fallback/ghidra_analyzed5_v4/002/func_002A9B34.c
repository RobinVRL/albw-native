#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00125A6C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002a9ba4;
extern uint *DAT_002a9ba8;
extern undefined4 *DAT_002a9bac;
extern undefined4 DAT_002a9bb0;

// USA 002A9B34 <- EU 002A9B10 (Ghidra, non-matching)
// GLOBAL DAT_002a9ba4 int *
// GLOBAL DAT_002a9ba8 uint *
// GLOBAL DAT_002a9bac undefined4 *
// GLOBAL DAT_002a9bb0 undefined4

undefined4 func_002A9B34(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x8ff) == '\0') {
    return 0;
  }
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002a9ba4 + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_002a9ba8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002a9ba8), iVar2 != 0)) {
      *DAT_002a9bac = DAT_002a9bb0;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002a9bac);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return func_00125A6C((int)puVar1);
    }
  }
  return 0;
}

