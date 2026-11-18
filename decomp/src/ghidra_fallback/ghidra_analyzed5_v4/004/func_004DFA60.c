#include "ghidra_types.h"

extern float DAT_004dfaf4;
extern float DAT_004dfaf8;
extern float DAT_004dfafc;
extern float DAT_004dfb00;

// USA 004DFA60 <- EU 004DFA38 (Ghidra, non-matching)
// GLOBAL DAT_004dfaf4 float
// GLOBAL DAT_004dfaf8 float
// GLOBAL DAT_004dfafc float
// GLOBAL DAT_004dfb00 float

float func_004DFA60(undefined4 param_1,undefined4 param_2,float fparam_0,float fparam_1,
                   float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_004dfaf4;
  switch(param_2) {
  case 1:
    fVar1 = DAT_004dfaf8;
    break;
  case 8:
  case 9:
    return fparam_0 + (fparam_1 - fparam_0) * fparam_2;
  }
  fVar2 = fparam_2 / DAT_004dfafc;
  fVar4 = fVar2 * fVar2 - fVar2;
  fVar3 = fVar4 * fVar2;
  fVar2 = fVar2 * fVar2 - fVar3 * DAT_004dfb00;
  fVar1 = ((DAT_004dfaf4 - fVar2 * DAT_004dfaf4) + fVar2 * DAT_004dfafc + (fVar3 - fVar4) * fVar1 +
          fVar3 * DAT_004dfaf4) / DAT_004dfafc;
  fVar3 = fVar1 * fVar1 - fVar1;
  fVar2 = fVar3 * fVar1;
  fVar1 = fVar1 * fVar1 - fVar2 * DAT_004dfb00;
  return (fparam_0 - fVar1 * fparam_0) + fVar1 * fparam_1 + (fVar2 - fVar3) * DAT_004dfaf4 +
         fVar2 * DAT_004dfaf4;
}

