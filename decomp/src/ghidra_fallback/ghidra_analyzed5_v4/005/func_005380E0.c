#include "ghidra_types.h"

extern int *DAT_00538164;
extern float DAT_00538168;
extern float DAT_0053816c;
extern float DAT_00538170;

// USA 005380E0 <- EU 005380B8 (Ghidra, non-matching)
// GLOBAL DAT_00538164 int *
// GLOBAL DAT_00538168 float
// GLOBAL DAT_0053816c float
// GLOBAL DAT_00538170 float

float func_005380E0(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = (int)*(char *)(*DAT_00538164 + 0x18);
  if (iVar1 != 0x15) {
    uVar2 = iVar1 - 9;
    bVar4 = 0xb < uVar2;
    bVar3 = uVar2 == 0xc;
    if (0xc < uVar2) {
      bVar4 = 1 < iVar1 - 0x18U;
      bVar3 = iVar1 - 0x18U == 2;
    }
    fVar5 = DAT_00538168;
    if (!bVar4 || bVar3) goto LAB_00538118;
    uVar2 = iVar1 - 4;
    if (1 < uVar2) {
      uVar2 = iVar1 - 0x16;
    }
    if ((uVar2 < 2) || (fVar5 = DAT_00538170, 3 < iVar1 - 2U)) goto LAB_00538118;
  }
  fVar5 = DAT_0053816c;
LAB_00538118:
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 10) {
    if (iVar1 < 0xb) {
      if ((iVar1 != 2 && iVar1 != 7) && (iVar1 != 8 && iVar1 != 9)) {
        return fVar5;
      }
    }
    else {
      if (iVar1 == 0x16) {
        return DAT_0053816c;
      }
      if (iVar1 != 0x17 && iVar1 != 0x21) {
        return fVar5;
      }
    }
  }
  return DAT_00538168;
}

