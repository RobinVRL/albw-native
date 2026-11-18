#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014835C(int param_1,uint param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00537270(int param_1);
extern int func_0065794C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00145a20;
extern uint *DAT_00145a24;
extern undefined4 *DAT_00145a28;
extern undefined4 DAT_00145a2c;

// USA 00145904 <- EU 00145904 (Ghidra, non-matching)
// GLOBAL DAT_00145a20 int *
// GLOBAL DAT_00145a24 uint *
// GLOBAL DAT_00145a28 undefined4 *
// GLOBAL DAT_00145a2c undefined4

uint func_00145904(int param_1)

{
  byte bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x4a2) != '\0') {
    uVar5 = (int)*(short *)(param_1 + 0x49c) - 1;
    puVar2 = (uint *)(param_1 + 0x4ac);
    if (uVar5 < 0x10) {
      puVar2 = puVar2 + uVar5;
    }
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_00145a20 + 0x3dbbc,*puVar2);
    if (((*DAT_00145a24 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00145a24), iVar4 != 0)) {
      *DAT_00145a28 = DAT_00145a2c;
    }
    if ((puVar3 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar3)(puVar3,DAT_00145a28), iVar4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    if ((puVar3 != (undefined4 *)0x0) && (iVar4 = func_00537270((int)puVar3), iVar4 != 0)) {
      bVar1 = func_0014835C(param_1,0);
      *(undefined1 *)(param_1 + 0x4a2) = 0;
      return (uint)bVar1;
    }
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x4a3);
  if (uVar5 == 0) {
    if (*(uint *)(param_1 + 0x490) < *(uint *)(param_1 + 0x494)) {
      uVar5 = *(uint *)(param_1 + 0x490) + 1;
      *(uint *)(param_1 + 0x490) = uVar5;
    }
    else {
      uVar5 = 0;
      if (*(char *)(param_1 + 0x440) != '\0') {
        uVar5 = func_0065794C((undefined4 *)(param_1 + 0x43c),2);
        return uVar5;
      }
    }
  }
  return uVar5;
}

