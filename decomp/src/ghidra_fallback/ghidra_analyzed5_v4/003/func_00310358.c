#include "ghidra_types.h"

extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00625250(int param_1,int param_2,undefined1 param_3);

// USA 00310358 <- EU 00310334 (Ghidra, non-matching)

undefined4 func_00310358(int param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *(float **)(param_1 + 0xae4);
  fVar2 = func_0051CF68(pfVar1 + 3,*pfVar1,pfVar1[1],pfVar1[2]);
  pfVar1[4] = fVar2;
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x10) + *(float *)(*(int *)(param_1 + 0xae4) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0xae4) + 0xc) == 0x3f800000) {
    return func_00625250(param_1,7,0);
  }
  return 0;
}

