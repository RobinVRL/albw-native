#include "ghidra_types.h"

extern float func_0051E8AC(int param_1,float *param_2,float fparam_0,float fparam_1);
extern float DAT_0051e880;

// USA 0051E84C <- EU 0051E824 (Ghidra, non-matching)
// GLOBAL DAT_0051e880 float

int func_0051E84C(int param_1,undefined4 param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x2b80) == 0) {
    iVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x2b80);
    fVar3 = func_0051E8AC(param_1,param_2,fparam_0,fparam_1);
    fVar4 = (float)VectorSignedToFloat(*puVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * fVar3;
    iVar1 = (int)fVar4;
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar5;
    if (fVar5 != fVar4) {
      fVar3 = DAT_0051e880;
    }
    if (fVar4 <= fVar3 && (fVar5 != fVar4 && DAT_0051e880 != fVar4)) {
      iVar1 = iVar1 + -1;
    }
  }
  return iVar1;
}

