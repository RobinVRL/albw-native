#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern undefined4 DAT_00399468;

// USA 003993F8 <- EU 003993D4 (Ghidra, non-matching)
// GLOBAL DAT_00399468 undefined4

undefined4 func_003993F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar2 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  uVar1 = DAT_00399468;
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x11e4) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x10c) * 0x30;
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  uVar4 = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  return func_004356B4((int *)(param_1 + 0x3c));
}

