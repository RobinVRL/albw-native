#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003de9a0;

// USA 003DE900 <- EU 003DE8E0 (Ghidra, non-matching)
// GLOBAL DAT_003de9a0 int

undefined4 func_003DE900(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint *puVar5;
  
  iVar1 = func_0010AA9C();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = 4;
    puVar5 = *(uint **)(param_1 + (*(ushort *)(DAT_003de9a0 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    puVar2 = (undefined2 *)(param_3 + -2);
    puVar4 = (undefined2 *)((int)puVar5 + 2);
    do {
      iVar1 = iVar1 + -1;
      puVar4[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar2;
    } while (iVar1 != 0);
    puVar2 = (undefined2 *)(param_3 + 0xe);
    puVar4 = (undefined2 *)((int)puVar5 + 0x12);
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      puVar4[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar2;
    } while (iVar1 != 0);
    puVar4 = (undefined2 *)((int)puVar5 + 0x22);
    puVar2 = (undefined2 *)(param_3 + 0x1e);
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      puVar4[1] = puVar2[1];
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      *puVar4 = *puVar2;
    } while (iVar1 != 0);
    *puVar5 = *puVar5 | 0xe000000;
    uVar3 = 1;
  }
  return uVar3;
}

