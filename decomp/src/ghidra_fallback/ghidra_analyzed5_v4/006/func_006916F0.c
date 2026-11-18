#include "ghidra_types.h"

extern int DAT_00691858;

// USA 006916F0 <- EU 006916C8 (Ghidra, non-matching)
// GLOBAL DAT_00691858 int

undefined4 func_006916F0(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_r7;
  int iVar8;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  (**(code **)(*param_1 + 8))(param_1);
  iVar8 = 0;
  iVar7 = 0;
  do {
    if (*(char *)(param_1[1] + iVar7) == '\0') {
      if (iVar7 < 0x40001) goto LAB_0069171c;
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40001);
  iVar7 = 0;
LAB_0069171c:
  (**(code **)(*param_2 + 8))(param_2);
  iVar3 = 0;
  do {
    if (*(char *)(param_2[1] + iVar3) == '\0') {
      if (iVar3 < 0x40001) {
        iVar8 = iVar3;
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  iVar7 = iVar7 - iVar8;
  if (-1 < iVar7) {
    unaff_r7 = DAT_00691858;
  }
  iVar3 = 0;
  if (-1 < iVar7) {
    do {
      local_2c = param_1[1] + iVar3;
      local_30 = unaff_r7;
      (**(code **)(unaff_r7 + 8))(&local_30);
      (**(code **)(local_30 + 8))(&local_30);
      iVar1 = local_2c;
      (**(code **)(*param_2 + 8))(param_2);
      iVar5 = param_2[1];
      if (iVar1 != iVar5) {
        if (iVar8 < 0x40001) {
          iVar1 = iVar8;
          if (iVar8 < 1) goto LAB_0069181c;
        }
        else {
          iVar1 = 0x40000;
        }
        iVar4 = 0;
        do {
          uVar6 = (uint)*(char *)(local_2c + iVar4);
          if (uVar6 == 0) {
            in_r12 = (uint)*(byte *)(iVar5 + iVar4);
          }
          if (uVar6 == 0 && in_r12 == 0) break;
          if (((uVar6 == 0) || (in_r12 = (uint)*(char *)(iVar5 + iVar4), in_r12 == 0)) ||
             (uVar6 != in_r12)) {
            bVar2 = false;
            goto LAB_00691828;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
LAB_0069181c:
      bVar2 = true;
LAB_00691828:
      if (bVar2) {
        if (iVar3 == -1) {
          return 0;
        }
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar7);
  }
  return 0;
}

