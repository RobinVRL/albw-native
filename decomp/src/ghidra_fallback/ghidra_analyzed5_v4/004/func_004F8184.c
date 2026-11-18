#include "ghidra_types.h"

extern float DAT_004f81b8;

// USA 004F8184 <- EU 004F815C (Ghidra, non-matching)
// GLOBAL DAT_004f81b8 float

float func_004F8184(uint param_1,float fparam_0,float fparam_1,float fparam_2)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = DAT_004f81b8;
  if (param_1 != 0) {
    fVar3 = DAT_004f81b8;
    if ((param_1 & 1) != 0) {
      fVar3 = DAT_004f81b8 - fparam_0;
      fVar2 = DAT_004f81b8 + fVar3;
    }
    fVar4 = DAT_004f81b8;
    for (uVar1 = param_1 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      fVar2 = fVar2 + (fVar3 - fparam_0);
      fVar3 = (fVar3 - fparam_0) - fparam_0;
      fVar4 = fVar4 + fVar3;
    }
    fVar2 = fVar2 + fVar4;
  }
  fVar3 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return ((fparam_2 - fVar2) - fparam_1) / fVar3;
}

