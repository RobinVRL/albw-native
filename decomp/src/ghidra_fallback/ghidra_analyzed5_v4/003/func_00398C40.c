#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00510388(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00398cc8;
extern uint *DAT_00398ccc;
extern undefined4 *DAT_00398cd0;
extern undefined4 DAT_00398cd4;

// USA 00398C40 <- EU 00398C1C (Ghidra, non-matching)
// GLOBAL DAT_00398cc8 int *
// GLOBAL DAT_00398ccc uint *
// GLOBAL DAT_00398cd0 undefined4 *
// GLOBAL DAT_00398cd4 undefined4

undefined4 func_00398C40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14) + 8) != 0x41200000) {
    return 0;
  }
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00398cc8 + 0x3dbbc,*(uint *)(param_1 + 0x38));
  if (((*DAT_00398ccc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00398ccc), iVar2 != 0)) {
    *DAT_00398cd0 = DAT_00398cd4;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00398cd0), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    return func_00510388((int)puVar1);
  }
  return 0;
}

