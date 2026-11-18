#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_005560c4;
extern uint *DAT_005560c8;
extern undefined4 *DAT_005560cc;
extern undefined4 DAT_005560d0;

// USA 00556060 <- EU 00556038 (Ghidra, non-matching)
// GLOBAL DAT_005560c4 int *
// GLOBAL DAT_005560c8 uint *
// GLOBAL DAT_005560cc undefined4 *
// GLOBAL DAT_005560d0 undefined4

undefined4 * func_00556060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)
           func_0052FBA0(*DAT_005560c4 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x1c) + 0xc));
  if (((*DAT_005560c8 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_005560c8), iVar2 != 0)) {
    *DAT_005560cc = DAT_005560d0;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_005560cc), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

