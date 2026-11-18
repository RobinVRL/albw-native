#include "ghidra_types.h"

extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);

// USA 00193918 <- EU 00193918 (Ghidra, non-matching)

undefined4 func_00193918(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x458);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x3d0);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(int *)(iVar1 + 0x8c) = (int)uVar2;
    *(int *)(iVar1 + 0x9c) = (int)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)(iVar1 + 0xac) = uVar3;
    return func_004CEAF0(iVar1);
  }
  return 0;
}

