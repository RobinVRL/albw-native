#include "ghidra_types.h"

extern uint *DAT_001b9970;
extern int DAT_001b9974;

// USA 001B975C <- EU 001B975C (Ghidra, non-matching)
// GLOBAL DAT_001b9970 uint *
// GLOBAL DAT_001b9974 int

uint func_001B975C(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  iVar3 = DAT_001b9974;
  uVar12 = 0;
  if (0 < (int)*DAT_001b9970) {
    do {
      uVar5 = DAT_001b9970[1];
      if (uVar12 < *DAT_001b9970) {
        uVar5 = uVar5 + uVar12 * 0x18;
      }
      if (**(char **)(uVar5 + 8) != '\0') {
        uVar5 = DAT_001b9970[1];
        if (uVar12 < *DAT_001b9970) {
          uVar5 = uVar5 + uVar12 * 0x18;
        }
        piVar8 = (int *)(uVar5 + 4);
        (**(code **)(*param_1 + 8))(param_1);
        iVar9 = 0;
        do {
          if (*(char *)(param_1[1] + iVar9) == '\0') {
            if (iVar9 < 0x40001) goto LAB_001b9804;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x40001);
        iVar9 = 0;
LAB_001b9804:
        (**(code **)(*piVar8 + 8))(piVar8);
        iVar11 = 0;
        do {
          if (*(char *)(*(int *)(uVar5 + 8) + iVar11) == '\0') {
            if (iVar11 < 0x40001) goto LAB_001b9844;
            break;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 0x40001);
        iVar11 = 0;
LAB_001b9844:
        iVar10 = 0;
        if (-1 < iVar9 - iVar11) {
          do {
            local_30 = iVar3;
            local_2c = param_1[1] + iVar10;
            (**(code **)(iVar3 + 8))(&local_30);
            (**(code **)(local_30 + 8))(&local_30);
            iVar2 = local_2c;
            (**(code **)(*piVar8 + 8))(piVar8);
            iVar6 = *(int *)(uVar5 + 8);
            if (iVar2 != iVar6) {
              if (iVar11 < 0x40001) {
                iVar2 = iVar11;
                if (iVar11 < 1) goto LAB_001b9904;
              }
              else {
                iVar2 = 0x40000;
              }
              iVar4 = 0;
              do {
                uVar7 = (uint)*(char *)(local_2c + iVar4);
                if (uVar7 == 0) {
                  in_r12 = (uint)*(byte *)(iVar6 + iVar4);
                }
                if (uVar7 == 0 && in_r12 == 0) break;
                if (((uVar7 == 0) || (in_r12 = (uint)*(char *)(iVar6 + iVar4), in_r12 == 0)) ||
                   (uVar7 != in_r12)) {
                  bVar1 = false;
                  goto LAB_001b9910;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar2);
            }
LAB_001b9904:
            bVar1 = true;
LAB_001b9910:
            if (bVar1) {
              if (iVar10 != -1) {
                uVar5 = DAT_001b9970[1];
                if (uVar12 < *DAT_001b9970) {
                  uVar5 = uVar5 + uVar12 * 0x18;
                }
                return uVar5;
              }
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 <= iVar9 - iVar11);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)*DAT_001b9970);
  }
  return 0;
}

