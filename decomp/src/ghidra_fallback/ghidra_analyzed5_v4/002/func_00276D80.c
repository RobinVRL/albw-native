#include "ghidra_types.h"

extern int func_001303C8(int param_1,int *param_2);
extern int func_0051E520(int param_1);
extern int *DAT_00276e88;
extern int DAT_00276e8c;
extern int *DAT_00276e90;

// USA 00276D80 <- EU 00276DA8 (Ghidra, non-matching)
// GLOBAL DAT_00276e88 int *
// GLOBAL DAT_00276e8c int
// GLOBAL DAT_00276e90 int *

undefined1 func_00276D80(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  bVar2 = func_0051E520(*DAT_00276e88);
  piVar1 = DAT_00276e90;
  uVar3 = 0;
  if (bVar2) {
    iVar8 = 0;
    iVar4 = param_1 + 0x183c + param_2 * DAT_00276e8c * 4;
    if (0 < *(int *)(param_1 + 0x15b3c)) {
      do {
        if ((iVar8 != param_2) &&
           ('\0' < *(char *)(param_1 + 0x183c + iVar8 * DAT_00276e8c * 4 + 0x2e4))) {
          uVar6 = *(uint *)(iVar4 + 0x304);
          uVar5 = 0;
          if (0 < (int)uVar6) {
            do {
              if (uVar5 < uVar6) {
                iVar7 = *(int *)(*(int *)(iVar4 + 0x30c) + uVar5 * 4);
              }
              else {
                iVar7 = 0;
              }
              if (*(int *)(iVar7 + 0x3c0) == iVar8) goto LAB_00276e70;
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < (int)uVar6);
          }
          func_001303C8(*piVar1,*(int **)(param_1 + iVar8 * DAT_00276e8c * 4 + 0x1bfc));
        }
LAB_00276e70:
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x15b3c));
    }
    uVar3 = 1;
  }
  return uVar3;
}

