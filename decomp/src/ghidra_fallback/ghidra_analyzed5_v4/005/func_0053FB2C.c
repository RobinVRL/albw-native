#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0053EFC4(int param_1);
extern int DAT_0053fc3c;
extern undefined4 DAT_0053fc40;
extern uint *DAT_0053fc44;
extern undefined4 *DAT_0053fc48;
extern uint *DAT_0053fc4c;
extern undefined4 *DAT_0053fc50;

// USA 0053FB2C <- EU 0053FB04 (Ghidra, non-matching)
// GLOBAL DAT_0053fc3c int
// GLOBAL DAT_0053fc40 undefined4
// GLOBAL DAT_0053fc44 uint *
// GLOBAL DAT_0053fc48 undefined4 *
// GLOBAL DAT_0053fc4c uint *
// GLOBAL DAT_0053fc50 undefined4 *

uint func_0053FB2C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_0053fc40;
  iVar4 = DAT_0053fc3c;
  iVar5 = (int)*(short *)(param_1 + 0x42);
  cVar1 = *(char *)(DAT_0053fc3c + iVar5 * 0x10);
  if ((cVar1 == '\b' || iVar5 == 0x1d) || (iVar5 == 0x1e || iVar5 == 0x5a)) {
    return 1;
  }
  if (cVar1 == '\x0e') {
    puVar6 = *(undefined4 **)(param_1 + 0x48);
    if (((*DAT_0053fc44 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0053fc44), iVar5 != 0)) {
      *DAT_0053fc48 = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar6)(puVar6,DAT_0053fc48), iVar5 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      return (int)*(char *)((int)puVar6 + 0x89);
    }
  }
  if (*(char *)(iVar4 + *(short *)(param_1 + 0x42) * 0x10) == '\x13') {
    puVar6 = *(undefined4 **)(param_1 + 0x48);
    if (((*DAT_0053fc4c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0053fc4c), iVar4 != 0)) {
      *DAT_0053fc50 = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar6)(puVar6,DAT_0053fc50), iVar4 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      bVar3 = func_0053EFC4((int)puVar6);
      return (uint)bVar3;
    }
  }
  return 0;
}

