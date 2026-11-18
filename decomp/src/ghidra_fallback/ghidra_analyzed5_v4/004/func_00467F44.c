#include "ghidra_types.h"

extern int func_002BECAC(int param_1,int param_2);
extern int func_002BF2BC(int param_1);

// USA 00467F44 <- EU 00467F1C (Ghidra, non-matching)

undefined4 func_00467F44(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  piVar2 = *(int **)(param_1 + 0x11c);
  uVar4 = (uint)*(char *)((int)piVar2 + 0xd);
  if (*(char *)(param_1 + 299) < *(char *)(param_1 + 0x124)) {
    bVar5 = uVar4 == 3;
    if (bVar5) {
      uVar4 = (uint)*(byte *)((int)piVar2 + 0xe);
    }
    if ((bVar5 && uVar4 == 3) && (iVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2), iVar3 == 0)) {
      func_002BECAC(*(int *)(param_1 + 0x11c),(uint)(*(char *)(param_1 + 0x44c) == '\0'));
    }
  }
  else {
    bVar5 = uVar4 == 3;
    if (bVar5) {
      uVar4 = (uint)*(byte *)((int)piVar2 + 0xe);
    }
    if (bVar5 && uVar4 == 3) {
      func_002BF2BC((int)piVar2);
    }
  }
  piVar2 = *(int **)(param_1 + 0x120);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  if (*(char *)(param_1 + 0x125) < *(char *)(param_1 + 299)) {
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)((int)piVar2 + 0xe);
    }
    if ((bVar5 && cVar1 == '\x03') && (iVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2), iVar3 == 0)) {
      return func_002BECAC(*(int *)(param_1 + 0x120),(uint)(*(char *)(param_1 + 0x44c) == '\0'));
    }
  }
  else {
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)((int)piVar2 + 0xe);
    }
    if (bVar5 && cVar1 == '\x03') {
      return func_002BF2BC((int)piVar2);
    }
  }
  return 0;
}

