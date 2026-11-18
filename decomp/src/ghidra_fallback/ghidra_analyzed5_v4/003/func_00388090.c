#include "ghidra_types.h"

extern int func_0049840C(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_003880b4;
extern float DAT_003880b8;
extern float DAT_003880bc;
extern float DAT_003880c0;

// USA 00388090 <- EU 0038806C (Ghidra, non-matching)
// GLOBAL DAT_003880b4 int *
// GLOBAL DAT_003880b8 float
// GLOBAL DAT_003880bc float
// GLOBAL DAT_003880c0 float

undefined4 func_00388090(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*DAT_003880b4 + 0x1b0);
  return func_0049840C(param_1 + 0x68,DAT_003880c0,DAT_003880bc,DAT_003880b8,
                (*(float *)(iVar1 + 0xc) - *(float *)(iVar1 + 4)) /
                (*(float *)(iVar1 + 0x10) - *(float *)(iVar1 + 8)));
}

