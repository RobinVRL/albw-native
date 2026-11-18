#include "ghidra_types.h"

extern float DAT_003fb588;
extern float DAT_003fb58c;

// USA 003FB540 <- EU 003FB520 (Ghidra, non-matching)
// GLOBAL DAT_003fb588 float
// GLOBAL DAT_003fb58c float

void func_003FB540(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_003fb58c;
  fVar1 = DAT_003fb588;
  fVar3 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 0x14);
  fVar5 = fVar3 * fVar3 + fVar7 * fVar7;
  fVar4 = DAT_003fb588;
  fVar6 = DAT_003fb58c;
  if (fVar5 != DAT_003fb588) {
    fVar6 = DAT_003fb58c / SQRT(fVar5);
    fVar4 = fVar3 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  *param_1 = fVar6;
  param_1[1] = fVar4;
  param_1[10] = fVar2;
  param_1[2] = fVar1;
  param_1[5] = fVar6;
  param_1[6] = fVar1;
  param_1[8] = fVar1;
  param_1[9] = fVar1;
  param_1[4] = -fVar4;
  return;
}

