#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_005207dc;
extern uint *DAT_005207e0;
extern undefined4 *DAT_005207e4;
extern undefined4 DAT_005207e8;

// USA 00520770 <- EU 00520748 (Ghidra, non-matching)
// GLOBAL DAT_005207dc int *
// GLOBAL DAT_005207e0 uint *
// GLOBAL DAT_005207e4 undefined4 *
// GLOBAL DAT_005207e8 undefined4

undefined4 * func_00520770(int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)(param_1 + 0x4ac);
  if (param_2 < 0x10) {
    puVar1 = puVar1 + param_2;
  }
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_005207dc + 0x3dbbc,*puVar1);
  if (((*DAT_005207e0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_005207e0), iVar3 != 0)) {
    *DAT_005207e4 = DAT_005207e8;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_005207e4), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

