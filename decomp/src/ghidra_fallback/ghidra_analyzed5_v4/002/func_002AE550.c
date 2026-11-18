#include "ghidra_types.h"

extern int func_002AFEF0(undefined4 *param_1,int param_2,uint param_3,int param_4,int param_5, float fparam_0);
extern float DAT_002ae56c;

// USA 002AE550 <- EU 002AE52C (Ghidra, non-matching)
// GLOBAL DAT_002ae56c float

undefined4 func_002AE550(undefined4 *param_1)

{
  float fparam_0;
  int iVar1;
  
  fparam_0 = DAT_002ae56c;
  iVar1 = param_1[0xd];
  if (*(short *)(iVar1 + 0x784) == 0) {
    *(undefined2 *)(iVar1 + 0x784) = *(undefined2 *)(iVar1 + 0x782);
  }
  return func_002AFEF0(param_1,0,(uint)*(ushort *)(param_1[0xd] + 0x784),1,0,fparam_0);
}

