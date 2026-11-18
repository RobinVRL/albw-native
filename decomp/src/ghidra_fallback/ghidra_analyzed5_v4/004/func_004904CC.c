#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_004905b4;

// USA 004904CC <- EU 004904A4 (Ghidra, non-matching)
// GLOBAL DAT_004905b4 float

int func_004904CC(float fparam_0,float fparam_1)

{
  int iVar1;
  float fVar2;
  
  if (fparam_1 == DAT_004905b4 && fparam_0 == DAT_004905b4) {
    iVar1 = 0;
  }
  else {
    if (fparam_1 < DAT_004905b4) {
      if (fparam_0 < DAT_004905b4) {
        if (fparam_0 < fparam_1) {
          iVar1 = func_004905E0(fparam_1 / fparam_0);
          return -0x40000000 - iVar1;
        }
        iVar1 = func_004905E0(fparam_0 / fparam_1);
        return iVar1 + -0x80000000;
      }
      fVar2 = -fparam_1;
      if (fVar2 < fparam_0) {
        iVar1 = func_004905E0(fVar2 / fparam_0);
        return iVar1 + 0x40000000;
      }
      iVar1 = func_004905E0(fparam_0 / fVar2);
      return -0x80000000 - iVar1;
    }
    if (fparam_0 < DAT_004905b4) {
      fVar2 = -fparam_0;
      if (fparam_1 < fVar2) {
        iVar1 = func_004905E0(fparam_1 / fVar2);
        return iVar1 + -0x40000000;
      }
      iVar1 = func_004905E0(fVar2 / fparam_1);
      return -iVar1;
    }
    if (fparam_0 <= fparam_1) {
      iVar1 = func_004905E0(fparam_0 / fparam_1);
      return iVar1;
    }
    iVar1 = func_004905E0(fparam_1 / fparam_0);
    iVar1 = 0x40000000 - iVar1;
  }
  return iVar1;
}

