#include "ghidra_types.h"

extern float DAT_0057e6c8;
extern float DAT_0057e6cc;
extern float DAT_0057e6d0;
extern float DAT_0057e6d4;

// USA 0057E558 <- EU 0057E530 (Ghidra, non-matching)
// GLOBAL DAT_0057e6c8 float
// GLOBAL DAT_0057e6cc float
// GLOBAL DAT_0057e6d0 float
// GLOBAL DAT_0057e6d4 float

float func_0057E558(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_0057e6c8;
  if (param_2 == 0) {
    fVar3 = DAT_0057e6cc;
  }
  fVar4 = fVar3;
  if (((1 < param_2) && (fVar4 = DAT_0057e6d0, param_2 != 2)) && (fVar4 = fVar3, param_2 == 3)) {
    fVar4 = DAT_0057e6d4;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  fVar3 = fVar4;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x18) == '\x01')) {
    fVar3 = func_0057E558(iVar1,param_2);
    if (param_2 == 0) {
      fVar3 = fVar4 * fVar3;
    }
    else if (param_2 == 1) {
      fVar3 = fVar4 + fVar3;
    }
    else {
      if (param_2 == 2) {
        if (fVar3 <= fVar4) goto LAB_0057e5d4;
      }
      else if ((param_2 == 3) && (fVar4 <= fVar3)) goto LAB_0057e5d4;
      fVar3 = fVar4;
    }
  }
LAB_0057e5d4:
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    for (iVar1 = *(int *)(param_1 + 0x24); iVar1 = iVar1 - iVar2,
        iVar1 != (param_1 + 0x20) - *(int *)(param_1 + 0x2c); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        fVar4 = fVar3;
        fVar3 = func_0057E558(iVar1,param_2);
        if (param_2 == 0) {
          fVar3 = fVar4 * fVar3;
        }
        else if (param_2 == 1) {
          fVar3 = fVar4 + fVar3;
        }
        else if (param_2 == 2) {
          if (fVar4 < fVar3) goto LAB_0057e650;
        }
        else if ((param_2 != 3) || (fVar3 < fVar4)) {
LAB_0057e650:
          fVar3 = fVar4;
        }
      }
    }
  }
  fVar4 = *(float *)(param_1 + 4);
  if (param_2 == 0) {
    fVar4 = fVar3 * fVar4;
  }
  else if (param_2 == 1) {
    fVar4 = fVar3 + fVar4;
  }
  else if (param_2 == 2) {
    if (fVar3 < fVar4) {
      return fVar3;
    }
  }
  else {
    if (param_2 != 3) {
      return fVar3;
    }
    if (fVar4 < fVar3) {
      return fVar3;
    }
  }
  return fVar4;
}

