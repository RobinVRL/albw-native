#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 0014362C <- EU 0014362C (Ghidra, non-matching)

undefined4 func_0014362C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x46c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x46c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x450);
  func_004CEAF0(*(int *)(param_1 + 0x46c));
  if (*(int *)(param_1 + 0x48c) != 0) {
    return func_001512B4(*(int *)(param_1 + 0x48c),(float *)(param_1 + 0x3d0));
  }
  return 0;
}

