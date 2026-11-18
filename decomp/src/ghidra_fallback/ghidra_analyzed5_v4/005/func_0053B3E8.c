#include "ghidra_types.h"

extern float DAT_0053b4f8;
extern int DAT_0053b4fc;
extern float DAT_0053b500;
extern int DAT_0053b504;

// USA 0053B3E8 <- EU 0053B3C0 (Ghidra, non-matching)
// GLOBAL DAT_0053b4f8 float
// GLOBAL DAT_0053b4fc int
// GLOBAL DAT_0053b500 float
// GLOBAL DAT_0053b504 int

bool func_0053B3E8(int param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = -1;
  iVar1 = 0;
  if (0 < *(int *)(DAT_0053b4fc + param_1)) {
    fVar6 = *param_3;
    fVar8 = DAT_0053b4f8;
    do {
      iVar3 = param_1 + iVar1 * DAT_0053b504 * 4;
      bVar4 = *(float *)(iVar3 + 0x1840) == fVar6;
      bVar5 = fVar6 <= *(float *)(iVar3 + 0x1840);
      if (!bVar5 || bVar4) {
        bVar4 = fVar6 == *(float *)(iVar3 + 0x184c);
        bVar5 = *(float *)(iVar3 + 0x184c) <= fVar6;
      }
      if ((((!bVar5 || bVar4) && (*(float *)(iVar3 + 0x1844) <= param_3[1])) &&
          (param_3[1] <= *(float *)(iVar3 + 0x1850))) &&
         ((fVar7 = param_3[2], *(float *)(iVar3 + 0x1848) <= fVar7 &&
          (fVar7 <= *(float *)(iVar3 + 0x1854))))) {
        iVar3 = param_1 + iVar1 * DAT_0053b504 * 4;
        fVar9 = (*(float *)(iVar3 + 0x184c) - *(float *)(iVar3 + 0x1840)) * DAT_0053b500 -
                (fVar6 - *(float *)(iVar3 + 0x1c00));
        fVar7 = (*(float *)(iVar3 + 0x1854) - *(float *)(iVar3 + 0x1848)) * DAT_0053b500 -
                (fVar7 - *(float *)(iVar3 + 0x1c08));
        fVar7 = fVar9 * fVar9 + fVar7 * fVar7;
        if (fVar7 < fVar8) {
          iVar2 = iVar1;
          fVar8 = fVar7;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(DAT_0053b4fc + param_1));
  }
  *param_2 = iVar2;
  if (iVar2 < 0) {
    *param_2 = (int)*(short *)(param_1 + 0x15b40);
  }
  return *param_2 != (int)*(short *)(param_1 + 0x15b40);
}

