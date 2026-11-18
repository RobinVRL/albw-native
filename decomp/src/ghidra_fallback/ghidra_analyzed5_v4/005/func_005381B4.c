#include "ghidra_types.h"

extern int *DAT_00538238;
extern float DAT_0053823c;
extern float DAT_00538240;
extern float DAT_00538244;
extern float DAT_00538248;

// USA 005381B4 <- EU 0053818C (Ghidra, non-matching)
// GLOBAL DAT_00538238 int *
// GLOBAL DAT_0053823c float
// GLOBAL DAT_00538240 float
// GLOBAL DAT_00538244 float
// GLOBAL DAT_00538248 float

float func_005381B4(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = (int)*(char *)(*DAT_00538238 + 0x18);
  fVar5 = DAT_00538248;
  if (iVar1 != 0x15) {
    uVar2 = iVar1 - 9;
    bVar4 = 0xb < uVar2;
    bVar3 = uVar2 == 0xc;
    if (0xc < uVar2) {
      bVar4 = 1 < iVar1 - 0x18U;
      bVar3 = iVar1 - 0x18U == 2;
    }
    fVar5 = DAT_0053823c;
    if (bVar4 && !bVar3) {
      uVar2 = iVar1 - 4;
      if (1 < uVar2) {
        uVar2 = iVar1 - 0x16;
      }
      if ((1 < uVar2) && (fVar5 = DAT_00538244, iVar1 - 2U < 4)) {
        fVar5 = DAT_00538240;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 10) {
    if (iVar1 < 0xb) {
      if ((iVar1 != 2 && iVar1 != 7) && (iVar1 != 8 && iVar1 != 9)) {
        return fVar5;
      }
    }
    else {
      if (iVar1 == 0x16) {
        return DAT_00538240;
      }
      if (iVar1 != 0x17 && iVar1 != 0x21) {
        return fVar5;
      }
    }
  }
  return DAT_0053823c;
}

