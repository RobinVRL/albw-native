#include "ghidra_types.h"

extern int func_0036172C(int param_1,float fparam_0);
extern float func_00556CE4(int param_1);
extern int *DAT_001e4c6c;
extern float DAT_001e4c70;

// USA 001E4BE4 <- EU 001E4BE4 (Ghidra, non-matching)
// GLOBAL DAT_001e4c6c int *
// GLOBAL DAT_001e4c70 float

undefined4 func_001E4BE4(char param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *DAT_001e4c6c;
  if (iVar1 != 0) {
    pfVar2 = *(float **)(iVar1 + 0x1c);
    fVar3 = func_00556CE4(iVar1);
    if ((param_1 != '\x02' && param_1 != '\x03') && param_1 != '\x04') {
      fVar4 = *param_2 - *pfVar2;
      fVar5 = param_2[2] - pfVar2[2];
      fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar3 * fVar3 < fVar4) {
        return 0;
      }
      func_0036172C(iVar1,SQRT(fVar4) + DAT_001e4c70);
    }
  }
  return 1;
}

