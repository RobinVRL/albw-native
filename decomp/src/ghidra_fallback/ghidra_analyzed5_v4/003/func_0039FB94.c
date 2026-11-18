#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_0053ED74(int param_1);

// USA 0039FB94 <- EU 0039FB70 (Ghidra, non-matching)

undefined4 func_0039FB94(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 2;
  uVar5 = *(uint *)(*(int *)(param_1 + 8) + 0x2c);
  do {
    if ((uVar5 != uVar4) && (iVar1 = *(int *)(param_1 + (uVar4 - 2) * 4 + 0x1c), iVar1 != 0)) {
      func_004CF478(iVar1,0);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  iVar1 = 0;
  if (uVar5 - 2 < 4) {
    iVar1 = uVar5 - 2;
  }
  iVar1 = *(int *)(param_1 + iVar1 * 4 + 0x1c);
  *(int *)(param_1 + 4) = iVar1;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  puVar2 = (undefined4 *)func_0053ED74(*(int *)(param_2 + 0x600));
  func_001151EC((undefined4 *)(iVar1 + 0x80),puVar2);
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x614) + 0x9c);
  *(undefined4 *)(iVar1 + 0x74) = uVar3;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(undefined4 *)(iVar1 + 0x7c) = uVar3;
  return func_004CEAF0(*(int *)(param_1 + 4));
}

