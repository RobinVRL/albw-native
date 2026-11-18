#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00147DA0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668BBC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003a3a8c;
extern uint *DAT_003a3a90;
extern undefined4 *DAT_003a3a94;
extern undefined4 DAT_003a3a98;

// USA 003A3A18 <- EU 003A39F4 (Ghidra, non-matching)
// GLOBAL DAT_003a3a8c int *
// GLOBAL DAT_003a3a90 uint *
// GLOBAL DAT_003a3a94 undefined4 *
// GLOBAL DAT_003a3a98 undefined4

undefined4 func_003A3A18(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003a3a8c + 0x3dbbc,*(uint *)(param_1 + 0x38));
  if (((*DAT_003a3a90 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003a3a90), iVar2 != 0)) {
    *DAT_003a3a94 = DAT_003a3a98;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003a3a94), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    func_00147DA0((int)puVar1);
  }
  return func_00668BBC((undefined4 *)(param_1 + 0x10),0);
}

