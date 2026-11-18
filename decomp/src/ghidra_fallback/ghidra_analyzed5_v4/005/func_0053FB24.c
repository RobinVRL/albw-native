#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0053EFC4(int param_1);
extern int DAT_0053fc3c;
extern undefined4 DAT_0053fc40;
extern uint *DAT_0053fc44;
extern undefined4 *DAT_0053fc48;
extern uint *DAT_0053fc4c;
extern undefined4 *DAT_0053fc50;

// USA 0053FB24 <- EU 0053FAFC (Ghidra, non-matching)
// GLOBAL DAT_0053fc3c int
// GLOBAL DAT_0053fc40 undefined4
// GLOBAL DAT_0053fc44 uint *
// GLOBAL DAT_0053fc48 undefined4 *
// GLOBAL DAT_0053fc4c uint *
// GLOBAL DAT_0053fc50 undefined4 *

int func_0053FB24(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar2 = DAT_0053fc40;
  iVar5 = DAT_0053fc3c;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar6 = (int)*(short *)(iVar4 + 0x42);
  cVar1 = *(char *)(DAT_0053fc3c + iVar6 * 0x10);
  if ((cVar1 == '\b' || iVar6 == 0x1d) || (iVar6 == 0x1e || iVar6 == 0x5a)) {
    return 1;
  }
  if (cVar1 == '\x0e') {
    puVar7 = *(undefined4 **)(iVar4 + 0x48);
    if (((*DAT_0053fc44 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0053fc44), iVar6 != 0)) {
      *DAT_0053fc48 = uVar2;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar7)(puVar7,DAT_0053fc48), iVar6 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      return (int)*(char *)((int)puVar7 + 0x89);
    }
  }
  if (*(char *)(iVar5 + *(short *)(iVar4 + 0x42) * 0x10) == '\x13') {
    puVar7 = *(undefined4 **)(iVar4 + 0x48);
    if (((*DAT_0053fc4c & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0053fc4c), iVar5 != 0)) {
      *DAT_0053fc50 = uVar2;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar7)(puVar7,DAT_0053fc50), iVar5 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      bVar3 = func_0053EFC4((int)puVar7);
      return (uint)bVar3;
    }
  }
  return 0;
}

