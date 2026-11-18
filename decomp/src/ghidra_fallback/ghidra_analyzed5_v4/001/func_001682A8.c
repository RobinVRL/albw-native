#include "ghidra_types.h"

extern uint DAT_001683e8;

// USA 001682A8 <- EU 001682A8 (Ghidra, non-matching)
// GLOBAL DAT_001683e8 uint

void func_001682A8(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  longlong lVar8;
  
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar4 != 0) {
    lVar8 = (ulonglong)DAT_001683e8 << 0x20;
    do {
      iVar3 = iVar5 + iVar2 * 0x38;
      if (*(char *)(iVar3 + 0x35) != '\0') {
        fVar9 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20));
        if (*(char *)(iVar3 + 0x28) == '\0') {
          if (*(float *)(iVar3 + 0x1c) < fVar9) {
            if (*(float *)(iVar3 + 0x14) <= fVar9) goto LAB_00168320;
          }
          else if (*(float *)(iVar3 + 0x14) == *(float *)(iVar3 + 0x20)) {
LAB_00168320:
            (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))(*(int **)(iVar3 + 0x10),0);
            *(undefined1 *)(iVar3 + 0x35) = 0;
            goto LAB_001683d4;
          }
        }
        *(float *)(iVar3 + 0x18) = *(float *)(iVar3 + 0x14);
        fVar7 = *(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x1c);
        lVar8 = CONCAT44(fVar9,fVar7);
        pfVar1 = (float *)(iVar3 + 0x14);
        *(float *)(iVar3 + 0x14) = fVar7;
        fVar6 = *(float *)(iVar3 + 0x20);
        if (*(char *)(iVar3 + 0x28) == '\0') {
          if (fVar6 < fVar7) {
            *pfVar1 = fVar6;
          }
          else {
            if (fVar7 <= fVar9) {
              lVar8 = CONCAT44(fVar9,fVar9);
            }
            *pfVar1 = ALBW_AS_F32(lVar8);
          }
        }
        else if (fVar7 <= fVar6) {
          if (fVar7 < fVar9) {
            *pfVar1 = fVar7 + fVar6;
            *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
          }
        }
        else {
          *pfVar1 = fVar7 - fVar6;
          *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
        }
        *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x10) = *(undefined4 *)(iVar3 + 0x14);
      }
LAB_001683d4:
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar4);
  }
  return;
}

