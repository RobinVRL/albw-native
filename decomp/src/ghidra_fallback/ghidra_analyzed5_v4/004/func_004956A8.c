#include "ghidra_types.h"

extern int func_0048E924(float *param_1,int param_2,int *param_3,int param_4,int *param_5,int *param_6, int param_7,int param_8,float fparam_0,float fparam_1);

// USA 004956A8 <- EU 00495680 (Ghidra, non-matching)

undefined4 func_004956A8(int param_1,int *param_2,int param_3,float fparam_0,float fparam_1)

{
  return func_0048E924((float *)(param_1 + 0x270),param_1,(int *)(param_1 + 0x1a8),param_1 + 0xd4,
                (int *)(param_1 + 0x20c),param_2,param_3,1,fparam_0,fparam_1);
}

