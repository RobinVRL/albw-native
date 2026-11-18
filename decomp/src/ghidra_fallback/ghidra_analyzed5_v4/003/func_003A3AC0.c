#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00147DBC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003a3b48;
extern uint *DAT_003a3b4c;
extern undefined4 *DAT_003a3b50;
extern undefined4 DAT_003a3b54;

// USA 003A3AC0 <- EU 003A3A9C (Ghidra, non-matching)
// GLOBAL DAT_003a3b48 int *
// GLOBAL DAT_003a3b4c uint *
// GLOBAL DAT_003a3b50 undefined4 *
// GLOBAL DAT_003a3b54 undefined4

undefined4 func_003A3AC0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14) + 8) != 0x41200000) {
    return 0;
  }
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003a3b48 + 0x3dbbc,*(uint *)(param_1 + 0x38));
  if (((*DAT_003a3b4c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003a3b4c), iVar2 != 0)) {
    *DAT_003a3b50 = DAT_003a3b54;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003a3b50), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    return func_00147DBC((int)puVar1);
  }
  return 0;
}

