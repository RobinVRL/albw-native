#include "ghidra_types.h"


// USA 00580AE8 <- EU 00580AC0 (Ghidra, non-matching)

void * func_00580AE8(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 4);
  *param_2 = fVar1;
  fVar2 = *(float *)(param_1 + 8);
  param_2[1] = fVar2;
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 1:
    fVar3 = *(float *)(param_1 + 0xc);
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_3 + 8);
    *param_2 = fVar2;
    fVar2 = (fVar5 - (fVar3 - fVar4)) - fVar1;
    goto LAB_00580b78;
  case 2:
    *param_2 = (*(float *)(param_3 + 4) - (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8))) -
               fVar2;
    param_2[1] = fVar1;
    break;
  case 3:
    fVar4 = *(float *)(param_1 + 8);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar5 = *(float *)(param_3 + 8);
    *param_2 = (*(float *)(param_3 + 4) - (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 4))) -
               fVar1;
    fVar2 = (fVar5 - (fVar3 - fVar4)) - fVar2;
LAB_00580b78:
    param_2[1] = fVar2;
    break;
  case 4:
    *param_2 = (*(float *)(param_3 + 4) - (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 4))) -
               fVar1;
    break;
  case 5:
    param_2[1] = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 8)))
                 - fVar2;
  }
  fVar1 = *param_2 / *(float *)(param_3 + 4);
  *param_2 = fVar1;
  fVar2 = param_2[1] / *(float *)(param_3 + 8);
  param_2[1] = fVar2;
  fVar1 = (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 0xc)) * fVar1;
  *param_2 = fVar1;
  fVar2 = (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10)) * fVar2;
  param_2[1] = fVar2;
  *param_2 = fVar1 + *(float *)(param_3 + 0xc);
  param_2[1] = fVar2 + *(float *)(param_3 + 0x10);
  return (void *)param_1;
}

