#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 0033479C <- EU 00334778 (Ghidra, non-matching)

undefined4 func_0033479C(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x43c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x43c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x42c);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x430);
  func_004CEAF0(*(int *)(param_1 + 0x43c));
  iVar1 = *(int *)(param_1 + 0x40c);
  if (iVar1 != 0) {
    fVar2 = *(float *)(param_1 + 0x3d4);
    fVar4 = *(float *)(param_1 + 0x434);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar1 + 8) = fVar2 + fVar4;
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    func_004356B4(*(int **)(param_1 + 0x40c));
  }
  if (*(int *)(param_1 + 0x464) != 0) {
    return func_001512B4(*(int *)(param_1 + 0x464),(float *)(param_1 + 0x3d0));
  }
  return 0;
}

