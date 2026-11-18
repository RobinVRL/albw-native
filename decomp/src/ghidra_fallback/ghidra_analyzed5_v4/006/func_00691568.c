#include "ghidra_types.h"

extern int DAT_006916c0;

// USA 00691568 <- EU 00691540 (Ghidra, non-matching)
// GLOBAL DAT_006916c0 int

int func_00691568(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  (**(code **)(*param_1 + 8))(param_1);
  iVar7 = 0;
  do {
    if (*(char *)(param_1[1] + iVar7) == '\0') {
      if (iVar7 < 0x40001) goto LAB_00691594;
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x40001);
  iVar7 = 0;
LAB_00691594:
  (**(code **)(*param_2 + 8))(param_2);
  iVar3 = DAT_006916c0;
  iVar8 = 0;
  do {
    if (*(char *)(param_2[1] + iVar8) == '\0') {
      if (iVar8 < 0x40001) goto LAB_006915d4;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_006915d4:
  iVar7 = iVar7 - iVar8;
  if (iVar7 < 0) {
    iVar7 = -1;
  }
  else {
    do {
      local_28 = iVar3;
      local_24 = param_1[1] + iVar7;
      (**(code **)(iVar3 + 8))(&local_28);
      (**(code **)(local_28 + 8))(&local_28);
      iVar2 = local_24;
      (**(code **)(*param_2 + 8))(param_2);
      iVar5 = param_2[1];
      if (iVar2 != iVar5) {
        if (iVar8 < 0x40001) {
          iVar2 = iVar8;
          if (iVar8 < 1) goto LAB_00691698;
        }
        else {
          iVar2 = 0x40000;
        }
        iVar4 = 0;
        do {
          uVar6 = (uint)*(char *)(local_24 + iVar4);
          if (uVar6 == 0) {
            in_r12 = (uint)*(byte *)(iVar5 + iVar4);
          }
          if (uVar6 == 0 && in_r12 == 0) break;
          if (((uVar6 == 0) || (in_r12 = (uint)*(char *)(iVar5 + iVar4), in_r12 == 0)) ||
             (uVar6 != in_r12)) {
            bVar1 = false;
            goto LAB_006916a4;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
LAB_00691698:
      bVar1 = true;
LAB_006916a4:
    } while ((!bVar1) && (iVar7 = iVar7 + -1, -1 < iVar7));
  }
  return iVar7;
}

