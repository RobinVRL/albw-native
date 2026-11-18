#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_00588F08(int param_1);
extern int *DAT_001e89a8;

// USA 001E8660 <- EU 001E8660 (Ghidra, non-matching)
// GLOBAL DAT_001e89a8 int *

undefined4 func_001E8660(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  bool bVar11;
  
  if (*param_3 != 0) {
    bVar11 = *(char *)(param_1 + 0xef8) != '\0';
    iVar1 = 0;
    if (bVar11) {
      iVar1 = *(int *)(param_1 + 0xe34);
    }
    if (bVar11 && iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xef8) = 0;
      *(undefined4 *)(param_1 + 0xefc) = 0x41;
      puVar2 = (undefined4 *)func_00588F08(*DAT_001e89a8);
      *(undefined4 *)(param_1 + 0xf00) = *puVar2;
      *(undefined4 *)(param_1 + 0xf04) = puVar2[1];
      *(undefined4 *)(param_1 + 0xf08) = puVar2[2];
    }
    iVar1 = *(int *)(param_1 + 0xe30) + -1;
    if (-1 < iVar1) {
      do {
        piVar3 = (int *)(param_1 + 0x14 + iVar1 * 0x2d0);
        if (piVar3[1] == *param_3) {
          (**(code **)(*piVar3 + 8))(piVar3);
          piVar3 = (int *)(param_1 + 0xe24);
          *(bool *)param_2 = *(int *)(param_1 + 0xe30) + -1 == iVar1;
          iVar4 = *(int *)(param_1 + 0xe30);
          if (((0 < iVar4) && (-1 < iVar1)) && (iVar1 < iVar4)) {
            iVar7 = iVar1;
            if (iVar1 < iVar4 + -1) {
              do {
                iVar6 = *(int *)(param_1 + 0xe28);
                iVar4 = *(int *)(param_1 + 0xe2c) + iVar7;
                if (iVar6 <= iVar4) {
                  iVar4 = iVar4 - iVar6;
                }
                iVar5 = *(int *)(param_1 + 0xe2c) + iVar7 + 1;
                if (iVar6 <= iVar5) {
                  iVar5 = iVar5 - iVar6;
                }
                func_001163A0((uint *)(*piVar3 + iVar4 * 0x2d0),(uint *)(*piVar3 + iVar5 * 0x2d0),
                              0x2d0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(param_1 + 0xe30) + -1);
            }
            *(int *)(param_1 + 0xe30) = *(int *)(param_1 + 0xe30) + -1;
          }
          iVar7 = *(int *)(param_1 + 0xe30);
          iVar4 = iVar7;
          if (iVar7 < 0) {
            iVar4 = *piVar3;
          }
          if (iVar7 == 0) {
            *(undefined4 *)(param_1 + 0xe34) = 0;
          }
          else {
            if (0 < iVar7) {
              iVar4 = iVar4 + -1 + *(int *)(param_1 + 0xe2c);
              if (*(int *)(param_1 + 0xe28) <= iVar4) {
                iVar4 = iVar4 - *(int *)(param_1 + 0xe28);
              }
              iVar4 = *piVar3 + iVar4 * 0x2d0;
            }
            *(int *)(param_1 + 0xe34) = iVar4;
            (**(code **)(**(int **)(param_1 + 0xe34) + 0x14))(*(int **)(param_1 + 0xe34));
            iVar7 = iVar1 + -1;
            bVar11 = iVar7 == 0;
            iVar4 = extraout_r1;
            if (-1 < iVar7) {
              iVar4 = *(int *)(param_1 + 0xeb4);
              bVar11 = iVar4 == iVar7;
            }
            if (!bVar11 && (-1 < iVar7 && iVar7 <= iVar4)) {
              iVar6 = *(int *)(param_1 + 0xef4);
              if (iVar4 <= iVar1) {
                iVar1 = iVar7;
              }
              if (((0 < iVar6) && (-1 < iVar1)) && (iVar1 < iVar6)) {
                if (iVar1 < iVar6 + -1) {
                  do {
                    iVar6 = *(int *)(param_1 + 0xeec);
                    iVar4 = *(int *)(param_1 + 0xef0) + iVar1;
                    if (iVar6 <= iVar4) {
                      iVar4 = iVar4 - iVar6;
                    }
                    iVar5 = *(int *)(param_1 + 0xef0) + iVar1 + 1;
                    if (iVar6 <= iVar5) {
                      iVar5 = iVar5 - iVar6;
                    }
                    iVar1 = iVar1 + 1;
                    puVar9 = (undefined4 *)(*(int *)(param_1 + 0xee8) + iVar5 * 0xc);
                    uVar8 = puVar9[1];
                    uVar10 = puVar9[2];
                    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xee8) + iVar4 * 0xc);
                    *puVar2 = *puVar9;
                    puVar2[1] = uVar8;
                    puVar2[2] = uVar10;
                  } while (iVar1 < *(int *)(param_1 + 0xef4) + -1);
                }
                *(int *)(param_1 + 0xef4) = *(int *)(param_1 + 0xef4) + -1;
              }
              iVar1 = *(int *)(param_1 + 0xeb4);
              if (0 < iVar1) {
                bVar11 = iVar7 == 0;
                if (-1 < iVar7) {
                  bVar11 = iVar1 == iVar7;
                }
                if (!bVar11 && (-1 < iVar7 && iVar7 <= iVar1)) {
                  if (iVar7 < iVar1 + -1) {
                    do {
                      iVar4 = *(int *)(param_1 + 0xeac);
                      iVar1 = *(int *)(param_1 + 0xeb0) + iVar7;
                      if (iVar4 <= iVar1) {
                        iVar1 = iVar1 - iVar4;
                      }
                      iVar6 = *(int *)(param_1 + 0xeb0) + iVar7 + 1;
                      if (iVar4 <= iVar6) {
                        iVar6 = iVar6 - iVar4;
                      }
                      puVar9 = (undefined4 *)(*(int *)(param_1 + 0xea8) + iVar6 * 0x1c);
                      puVar2 = (undefined4 *)(*(int *)(param_1 + 0xea8) + iVar1 * 0x1c);
                      iVar7 = iVar7 + 1;
                      *puVar2 = *puVar9;
                      puVar2[1] = puVar9[1];
                      puVar2[2] = puVar9[2];
                      puVar2[3] = puVar9[3];
                      puVar2[4] = puVar9[4];
                      puVar2[5] = puVar9[5];
                      puVar2[6] = puVar9[6];
                    } while (iVar7 < *(int *)(param_1 + 0xeb4) + -1);
                  }
                  *(int *)(param_1 + 0xeb4) = *(int *)(param_1 + 0xeb4) + -1;
                }
              }
            }
          }
          *param_3 = 0;
          return 1;
        }
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
    *param_3 = 0;
  }
  return 0;
}

