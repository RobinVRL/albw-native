#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002A9934(int param_1);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001258bc;
extern uint *DAT_001258c0;
extern undefined4 *DAT_001258c4;
extern undefined4 DAT_001258c8;

// USA 00125828 <- EU 00125828 (Ghidra, non-matching)
// GLOBAL DAT_001258bc int *
// GLOBAL DAT_001258c0 uint *
// GLOBAL DAT_001258c4 undefined4 *
// GLOBAL DAT_001258c8 undefined4

undefined4 func_00125828(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_004F8638(param_1,0xff);
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_001258bc + 0x3dbbc,param_1[0x238]);
  if (puVar1 != (undefined4 *)0x0) {
    if (((*DAT_001258c0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001258c0), iVar2 != 0)) {
      *DAT_001258c4 = DAT_001258c8;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_001258c4);
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

