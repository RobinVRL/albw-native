#include "ghidra_types.h"

extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);

// USA 0031A208 <- EU 0031A1E4 (Ghidra, non-matching)

undefined4 func_0031A208(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(param_1 + 0x454);
  if (*(int *)(param_1 + 0x454) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x3d0);
    uVar4 = *(undefined4 *)(param_1 + 0x3d8);
    iVar1 = *(int *)(param_1 + 0x454);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
    iVar1 = *piVar2;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(int *)(iVar1 + 0x8c) = (int)uVar3;
    *(int *)(iVar1 + 0x9c) = (int)((ulonglong)uVar3 >> 0x20);
    *(undefined4 *)(iVar1 + 0xac) = uVar4;
    iVar1 = *piVar2;
    uVar4 = *(undefined4 *)(param_1 + 0x478);
    *(undefined4 *)(iVar1 + 0x74) = uVar4;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x78) = uVar4;
    *(undefined4 *)(iVar1 + 0x7c) = uVar4;
    return func_004CEAF0(*piVar2);
  }
  return 0;
}

