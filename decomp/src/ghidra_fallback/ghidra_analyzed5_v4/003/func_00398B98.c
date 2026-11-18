#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00510288(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00668424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00398c0c;
extern uint *DAT_00398c10;
extern undefined4 *DAT_00398c14;
extern undefined4 DAT_00398c18;

// USA 00398B98 <- EU 00398B74 (Ghidra, non-matching)
// GLOBAL DAT_00398c0c int *
// GLOBAL DAT_00398c10 uint *
// GLOBAL DAT_00398c14 undefined4 *
// GLOBAL DAT_00398c18 undefined4

undefined4 func_00398B98(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00398c0c + 0x3dbbc,*(uint *)(param_1 + 0x38));
  if (((*DAT_00398c10 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00398c10), iVar2 != 0)) {
    *DAT_00398c14 = DAT_00398c18;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00398c14), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    func_00510288((int)puVar1);
  }
  return func_00668424((undefined4 *)(param_1 + 0x10),0);
}

