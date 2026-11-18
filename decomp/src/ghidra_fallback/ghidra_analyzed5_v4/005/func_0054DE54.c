#include "ghidra_types.h"

extern short *DAT_0054dee0;
extern float DAT_0054dee4;
extern float DAT_0054dee8;

// USA 0054DE54 <- EU 0054DE2C (Ghidra, non-matching)
// GLOBAL DAT_0054dee0 short *
// GLOBAL DAT_0054dee4 float
// GLOBAL DAT_0054dee8 float

float func_0054DE54(int param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  float fVar3;
  float fVar4;
  
  psVar2 = DAT_0054dee0;
  if (param_3 < 4) {
    psVar2 = (short *)(param_1 + param_3 * 0x10 + 0x20);
  }
  sVar1 = *psVar2;
  if (sVar1 == 6) {
    if (param_4 == 0) goto LAB_0054ded4;
    if (param_4 != 1) {
      fVar3 = *(float *)(param_2 + 0x18);
      goto LAB_0054dea4;
    }
    fVar3 = *(float *)(param_2 + 0x14);
  }
  else if (sVar1 == 7) {
    if (param_4 == 0) goto LAB_0054ded4;
    if (param_4 != 1) {
      fVar3 = *(float *)(param_2 + 0x18);
      goto LAB_0054dea4;
    }
    fVar3 = *(float *)(param_2 + 0x14);
  }
  else {
    if (sVar1 != 8) {
      return DAT_0054dee8;
    }
    if (param_4 == 0) {
LAB_0054ded4:
      fVar3 = *(float *)(param_2 + 0x10);
      fVar4 = *(float *)(psVar2 + 2);
      goto LAB_0054dea8;
    }
    if (param_4 != 1) {
      fVar3 = *(float *)(param_2 + 0x18);
LAB_0054dea4:
      fVar4 = *(float *)(psVar2 + 6);
      goto LAB_0054dea8;
    }
    fVar3 = *(float *)(param_2 + 0x14);
  }
  fVar4 = *(float *)(psVar2 + 4);
LAB_0054dea8:
  return fVar3 * fVar4 * DAT_0054dee4;
}

