#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002A9934(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00126078;
extern uint *DAT_0012607c;
extern undefined4 *DAT_00126080;
extern undefined4 DAT_00126084;

// USA 00125FE4 <- EU 00125FE4 (Ghidra, non-matching)
// GLOBAL DAT_00126078 int *
// GLOBAL DAT_0012607c uint *
// GLOBAL DAT_00126080 undefined4 *
// GLOBAL DAT_00126084 undefined4

undefined4 func_00125FE4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x1000;
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00126078 + 0x3dbbc,*(uint *)(param_1 + 0x8e0));
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_0012607c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0012607c), iVar2 != 0)) {
      *DAT_00126080 = DAT_00126084;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_00126080);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = func_002A9934((int)puVar1);
      return uVar3;
    }
  }
  return 0;
}

