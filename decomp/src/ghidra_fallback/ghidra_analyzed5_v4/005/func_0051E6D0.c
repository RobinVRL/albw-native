#include "ghidra_types.h"


// USA 0051E6D0 <- EU 0051E6A8 (Ghidra, non-matching)

undefined4 func_0051E6D0(int param_1,float *param_2,float fparam_0)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x2969) != 0) {
    do {
      iVar1 = param_1 + iVar2 * 0x10;
      if (fparam_0 <
          *(float *)(iVar1 + 0x290c) * param_2[1] + *(float *)(iVar1 + 0x2910) * param_2[2] +
          *(float *)(iVar1 + 0x2914) + *(float *)(iVar1 + 0x2908) * *param_2) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x2969));
  }
  return 1;
}

