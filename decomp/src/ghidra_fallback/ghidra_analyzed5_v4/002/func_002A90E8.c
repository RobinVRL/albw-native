#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_002a913c;
extern uint *DAT_002a9140;
extern undefined4 *DAT_002a9144;
extern undefined4 DAT_002a9148;

// USA 002A90E8 <- EU 002A90C4 (Ghidra, non-matching)
// GLOBAL DAT_002a913c int *
// GLOBAL DAT_002a9140 uint *
// GLOBAL DAT_002a9144 undefined4 *
// GLOBAL DAT_002a9148 undefined4

undefined4 * func_002A90E8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002a913c + 0x3dbbc,*(uint *)(param_1 + 0x50));
  puVar3 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_002a9140 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002a9140), iVar2 != 0)) {
      *DAT_002a9144 = DAT_002a9148;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_002a9144);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
  }
  return puVar3;
}

