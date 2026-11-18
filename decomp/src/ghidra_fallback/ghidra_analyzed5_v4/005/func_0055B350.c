#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_0055b46c;

// USA 0055B350 <- EU 0055B328 (Ghidra, non-matching)
// GLOBAL DAT_0055b46c float

int func_0055B350(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0x10);
  if (fVar4 == DAT_0055b46c && fVar2 == DAT_0055b46c) {
    iVar1 = 0;
  }
  else {
    fVar3 = *(float *)(param_1 + 0xc);
    fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
    if (fVar2 == DAT_0055b46c && fVar3 == DAT_0055b46c) {
      iVar1 = 0;
    }
    else if (fVar2 < DAT_0055b46c) {
      if (fVar3 < DAT_0055b46c) {
        if (fVar3 < fVar2) {
          iVar1 = func_004905E0(fVar2 / fVar3);
          iVar1 = -0x40000000 - iVar1;
        }
        else {
          iVar1 = func_004905E0(fVar3 / fVar2);
          iVar1 = iVar1 + -0x80000000;
        }
      }
      else {
        fVar2 = -fVar2;
        if (fVar2 < fVar3) {
          iVar1 = func_004905E0(fVar2 / fVar3);
          iVar1 = iVar1 + 0x40000000;
        }
        else {
          iVar1 = func_004905E0(fVar3 / fVar2);
          iVar1 = -0x80000000 - iVar1;
        }
      }
    }
    else if (fVar3 < DAT_0055b46c) {
      fVar3 = -fVar3;
      if (fVar2 < fVar3) {
        iVar1 = func_004905E0(fVar2 / fVar3);
        iVar1 = iVar1 + -0x40000000;
      }
      else {
        iVar1 = func_004905E0(fVar3 / fVar2);
        iVar1 = -iVar1;
      }
    }
    else if (fVar2 < fVar3) {
      iVar1 = func_004905E0(fVar2 / fVar3);
      iVar1 = 0x40000000 - iVar1;
    }
    else {
      iVar1 = func_004905E0(fVar3 / fVar2);
    }
    iVar1 = 0x40000000 - iVar1;
  }
  return iVar1;
}

