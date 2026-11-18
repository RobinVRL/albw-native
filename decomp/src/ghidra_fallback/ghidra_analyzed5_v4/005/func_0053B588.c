#include "ghidra_types.h"

extern float DAT_0053b67c;
extern float DAT_0053b680;
extern int DAT_0053b684;

// USA 0053B588 <- EU 0053B560 (Ghidra, non-matching)
// GLOBAL DAT_0053b67c float
// GLOBAL DAT_0053b680 float
// GLOBAL DAT_0053b684 int

int func_0053B588(int param_1,float *param_2)

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
  
  iVar3 = -1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x15b3c)) {
    fVar6 = *param_2;
    fVar8 = DAT_0053b67c;
    do {
      iVar2 = param_1 + iVar1 * DAT_0053b684 * 4;
      bVar4 = *(float *)(iVar2 + 0x1840) == fVar6;
      bVar5 = fVar6 <= *(float *)(iVar2 + 0x1840);
      if (!bVar5 || bVar4) {
        bVar4 = fVar6 == *(float *)(iVar2 + 0x184c);
        bVar5 = *(float *)(iVar2 + 0x184c) <= fVar6;
      }
      if ((((!bVar5 || bVar4) && (*(float *)(iVar2 + 0x1844) <= param_2[1])) &&
          (param_2[1] <= *(float *)(iVar2 + 0x1850))) &&
         ((fVar7 = param_2[2], *(float *)(iVar2 + 0x1848) <= fVar7 &&
          (fVar7 <= *(float *)(iVar2 + 0x1854))))) {
        iVar2 = param_1 + iVar1 * DAT_0053b684 * 4;
        fVar9 = (*(float *)(iVar2 + 0x184c) - *(float *)(iVar2 + 0x1840)) * DAT_0053b680 -
                (fVar6 - *(float *)(iVar2 + 0x1c00));
        fVar7 = (*(float *)(iVar2 + 0x1854) - *(float *)(iVar2 + 0x1848)) * DAT_0053b680 -
                (fVar7 - *(float *)(iVar2 + 0x1c08));
        fVar7 = fVar9 * fVar9 + fVar7 * fVar7;
        if (fVar7 < fVar8) {
          iVar3 = iVar1;
          fVar8 = fVar7;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x15b3c));
  }
  return iVar3;
}

