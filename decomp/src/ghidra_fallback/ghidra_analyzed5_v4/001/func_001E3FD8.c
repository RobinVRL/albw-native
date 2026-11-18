#include "ghidra_types.h"

extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);

// USA 001E3FD8 <- EU 001E3FD8 (Ghidra, non-matching)

undefined4 func_001E3FD8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x47c);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x478),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x47c));
}

