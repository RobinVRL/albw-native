#include "ghidra_types.h"

extern int DAT_0027680c;

// USA 002766D0 <- EU 002766F8 (Ghidra, non-matching)
// GLOBAL DAT_0027680c int

void * func_002766D0(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = 0;
  piVar7 = (int *)(param_1 + 0x15b3c);
  if (0 < *piVar7) {
    do {
      iVar5 = 0;
      iVar6 = param_1 + 0x183c + iVar4 * DAT_0027680c * 4;
      do {
        sVar1 = *(short *)(iVar6 + 0x76 + iVar5 * 6);
        if (sVar1 < 1) break;
        iVar2 = 0;
        if (0 < *piVar7) {
          do {
            if ((iVar2 != iVar4) &&
               (*(short *)(param_1 + iVar2 * DAT_0027680c * 4 + 0x18ac) == sVar1)) {
              iVar2 = param_1 + 0x183c + iVar2 * DAT_0027680c * 4;
              if (*(int *)(iVar6 + 800) < *(int *)(iVar6 + 0x324)) {
                *(int *)(*(int *)(iVar6 + 0x328) + *(int *)(iVar6 + 800) * 4) = iVar2;
                *(int *)(iVar6 + 800) = *(int *)(iVar6 + 800) + 1;
              }
              piVar3 = (int *)(iVar2 + 0x304);
              if (*piVar3 < *(int *)(iVar2 + 0x308)) {
                *(int *)(*(int *)(iVar2 + 0x30c) + *piVar3 * 4) = iVar6;
                *piVar3 = *piVar3 + 1;
              }
              break;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar7);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x60);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar7);
  }
  return (void *)param_1;
}

