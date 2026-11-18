#include "ghidra_types.h"

extern int func_001511F0(int *param_1);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);

// USA 00252578 <- EU 002525A0 (Ghidra, non-matching)

undefined4 func_00252578(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x570),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  iVar1 = *(int *)(param_1 + 0x4f4);
  uVar2 = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(iVar1 + 0x74) = uVar2;
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar1 + 0x78) = uVar2;
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  func_001512B4(*(int *)(param_1 + 0x520),(float *)(param_1 + 0x3d0));
  return func_001511F0(*(int **)(param_1 + 0x520));
}

