#include "ghidra_types.h"

extern int func_001139FC(int param_1);
extern int func_006026E0(int param_1);
extern int *DAT_005fedc4;
extern int *DAT_005fedc8;

// USA 005FEBCC <- EU 005FEBA4 (Ghidra, non-matching)
// GLOBAL DAT_005fedc4 int *
// GLOBAL DAT_005fedc8 int *

void func_005FEBCC(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  *param_1 = 0x42;
  iVar2 = *DAT_005fedc4;
  piVar8 = (int *)(iVar2 + 0x6a0);
  if ((*(uint *)(iVar2 + 8) & 0x200) != 0) {
    *(bool *)(iVar2 + 0x81c) = *(int *)(iVar2 + 0x5dc) != 0;
  }
  *(undefined1 *)(iVar2 + 0x76c) = 0;
  piVar1 = DAT_005fedc8;
  if (*(int *)(iVar2 + 0x5d8) == 0) {
    func_006026E0(0x10);
  }
  else if (*(int *)(*DAT_005fedc8 + 0x80c) == 0) {
    *(undefined1 *)(iVar2 + 0x76c) = 1;
    func_006026E0(0x10);
  }
  else {
    piVar7 = *(int **)(*(int *)(*DAT_005fedc8 + 0x80c) + 8);
    iVar3 = func_001139FC(*piVar7);
    *piVar8 = iVar3;
    *(int *)(iVar2 + 0x6e8) = piVar7[2];
  }
  iVar3 = 0;
  do {
    iVar5 = iVar2 + 0x458 + iVar3 * 0x18;
    if (*(char *)(iVar5 + 0x15) == '\0') {
      piVar8[iVar3 + 0x13] = iVar2 + 0x298 + iVar3 * 0x10;
      piVar8[iVar3 + 0x23] = 0;
    }
    else if (*(int *)(iVar5 + 0x10) == 0) {
      func_006026E0(iVar3);
    }
    else {
      iVar5 = *(int *)(*piVar1 + iVar3 * 4 + 0x810);
      if (iVar5 == 0) {
        *(undefined1 *)(iVar2 + 0x76c) = 1;
        func_006026E0(iVar3);
      }
      else {
        piVar7 = *(int **)(iVar5 + 8);
        iVar5 = *DAT_005fedc4;
        piVar9 = (int *)(iVar5 + 0x6a0);
        if (iVar3 == 0x10) {
          iVar2 = func_001139FC(*piVar7);
          *piVar9 = iVar2;
          *(int *)(iVar5 + 0x6e8) = piVar7[2];
          return;
        }
        piVar4 = (int *)(iVar5 + 0x458 + iVar3 * 0x18);
        iVar5 = func_001139FC(*piVar7 + *piVar4);
        piVar9[iVar3 + 1] = iVar5;
        piVar9[iVar3 + 0x13] = *piVar4 + piVar7[2];
        iVar5 = piVar4[2];
        bVar10 = iVar5 == 0x1400;
        if (!bVar10) {
          iVar5 = iVar5 + -0x1401;
          bVar10 = iVar5 == 0;
        }
        if (bVar10) {
          iVar5 = 1;
        }
        else if (iVar5 == 1) {
          iVar5 = 2;
        }
        else if (iVar5 == 5) {
          iVar5 = 4;
        }
        else {
          iVar5 = 0;
        }
        iVar6 = piVar4[3];
        if (iVar6 == 0) {
          iVar6 = piVar4[1] * iVar5;
        }
        piVar9[iVar3 + 0x23] = iVar6;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}

