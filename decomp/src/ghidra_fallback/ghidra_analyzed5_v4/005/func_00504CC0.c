#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E1064(int param_1,undefined4 param_2,uint param_3);
extern int *DAT_00504d10;
extern uint *DAT_00504d14;
extern undefined4 *DAT_00504d18;
extern undefined4 DAT_00504d1c;

// USA 00504CC0 <- EU 00504C98 (Ghidra, non-matching)
// GLOBAL DAT_00504d10 int *
// GLOBAL DAT_00504d14 uint *
// GLOBAL DAT_00504d18 undefined4 *
// GLOBAL DAT_00504d1c undefined4

undefined4 * func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_001E1064(*DAT_00504d10,param_2,param_3);
  if (((*DAT_00504d14 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00504d14), iVar2 != 0)) {
    *DAT_00504d18 = DAT_00504d1c;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00504d18), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

