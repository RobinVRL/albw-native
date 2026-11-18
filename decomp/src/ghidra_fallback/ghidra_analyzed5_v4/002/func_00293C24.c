#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0058FB00(undefined4 *param_1);
extern int DAT_00293c8c;
extern undefined *DAT_00293c90;
extern undefined *DAT_00293c94;

// USA 00293C24 <- EU 00293C4C (Ghidra, non-matching)
// GLOBAL DAT_00293c8c int
// GLOBAL DAT_00293c90 undefined *
// GLOBAL DAT_00293c94 undefined *

undefined4 * func_00293C24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = func_00100118(param_1,DAT_00293c90,DAT_00293c8c,3);
  puVar2 = (undefined4 *)func_00100118(iVar1 + 0x440c,DAT_00293c94,4,3);
  func_0058FB00(puVar2);
  return puVar2 + -0x1103;
}

