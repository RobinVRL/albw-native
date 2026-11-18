#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_004d84bc;

// USA 004D8490 <- EU 004D8468 (Ghidra, non-matching)
// GLOBAL DAT_004d84bc float

bool func_004D8490(float *param_1,float fparam_0)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  bVar1 = fVar4 < DAT_004d84bc;
  bVar2 = fVar4 == DAT_004d84bc;
  bVar3 = NAN(fVar4) || NAN(DAT_004d84bc);
  if (!bVar2 && !bVar1) {
    bVar1 = fVar4 < fparam_0;
    bVar2 = fVar4 == fparam_0;
    bVar3 = NAN(fVar4) || NAN(fparam_0);
  }
  if (!bVar2 && bVar1 == bVar3) {
    func_00115D70(param_1,param_1,fparam_0 / fVar4);
  }
  return !bVar2 && bVar1 == bVar3;
}

