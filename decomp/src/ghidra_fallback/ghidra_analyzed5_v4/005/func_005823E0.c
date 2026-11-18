#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined1 DAT_0058266c;
extern int DAT_00582670;
extern int DAT_00582674;
extern int DAT_00582678;

// USA 005823E0 <- EU 005823B8 (Ghidra, non-matching)
// GLOBAL DAT_0058266c undefined1
// GLOBAL DAT_00582670 int
// GLOBAL DAT_00582674 int
// GLOBAL DAT_00582678 int

undefined4 func_005823E0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(undefined1 * *)(albw_frame + 0x4))
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(uint * *)(albw_frame + 0xc))
  #define local_80 (*(int *)(albw_frame + 0x10))
  #define local_7c ((uint *)(albw_frame + 0x14))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x53))
  #define local_38 (*(int *)(albw_frame + 0x58))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define piStack_2c (*(int * *)(albw_frame + 0x64))
  #define piStack_28 (*(int * *)(albw_frame + 0x68))
  iVar2 = DAT_00582670;
  local_8c = &DAT_0058266c;
  local_90 = DAT_00582670;
  local_30 = param_1;
  piStack_2c = param_2;
  piStack_28 = param_3;
  (**(code **)(*param_3 + 8))(param_3);
  iVar8 = 0;
  do {
    if (*(char *)(param_3[1] + iVar8) == '\0') {
      if (iVar8 < 0x40001) goto LAB_00582418;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_00582418:
  (**(code **)(local_90 + 8))(&local_90);
  iVar11 = 0;
  do {
    if (local_8c[iVar11] == '\0') {
      if (iVar11 < 0x40001) goto LAB_00582458;
      break;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x40001);
  iVar11 = 0;
LAB_00582458:
  uVar9 = 0;
  if (-1 < iVar8 - iVar11) {
    do {
      local_88 = iVar2;
      local_84 = (uint *)(param_3[1] + uVar9);
      (**(code **)(iVar2 + 8))(&local_88);
      (**(code **)(local_88 + 8))(&local_88);
      puVar10 = local_84;
      (**(code **)(local_90 + 8))(&local_90);
      if (puVar10 != (uint *)local_8c) {
        if (iVar11 < 0x40001) {
          iVar1 = iVar11;
          if (iVar11 < 1) goto LAB_00582514;
        }
        else {
          iVar1 = 0x40000;
        }
        iVar4 = 0;
        do {
          puVar7 = (undefined1 *)(int)*(char *)((int)local_84 + iVar4);
          if (puVar7 == (undefined1 *)0x0) {
            puVar10 = (uint *)(uint)(byte)local_8c[iVar4];
          }
          if (puVar7 == (undefined1 *)0x0 && puVar10 == (uint *)0x0) break;
          if (((puVar7 == (undefined1 *)0x0) ||
              (puVar10 = (uint *)(int)(char)local_8c[iVar4], puVar10 == (uint *)0x0)) ||
             ((uint *)puVar7 != puVar10)) {
            bVar3 = false;
            goto LAB_00582520;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
LAB_00582514:
      bVar3 = true;
LAB_00582520:
      if (bVar3) goto LAB_00582538;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 <= iVar8 - iVar11);
  }
  uVar9 = 0xffffffff;
LAB_00582538:
  if (uVar9 == 0) {
    uVar5 = 0;
  }
  else {
    local_80 = 0x40;
    uStack_3d = 0;
    (*(undefined1 *)((char *)&local_7c[0] + 0)) = 0;
    local_88 = DAT_00582674;
    uVar6 = uVar9;
    local_84 = local_7c;
    if ((int)uVar9 < 0) {
      (**(code **)(*param_3 + 8))(param_3);
      uVar6 = 0;
      do {
        if (*(char *)(param_3[1] + uVar6) == '\0') {
          if ((int)uVar6 < 0x40001) goto LAB_005825bc;
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x40001);
      uVar6 = 0;
    }
LAB_005825bc:
    if (local_80 <= (int)uVar6) {
      uVar6 = local_80 - 1;
    }
    (**(code **)(*param_3 + 8))(param_3);
    func_0010E3C4(local_7c,(uint *)param_3[1],uVar6);
    *(undefined1 *)((int)local_7c + uVar6) = 0;
    iVar11 = uVar9 + 1;
    (**(code **)(*param_3 + 8))(param_3);
    iVar8 = 0;
    do {
      if (*(char *)(param_3[1] + iVar8) == '\0') {
        if (iVar8 < 0x40001) goto LAB_00582634;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40001);
    iVar8 = 0;
LAB_00582634:
    local_34 = DAT_00582678;
    if (-1 < iVar11 && iVar11 <= iVar8) {
      local_34 = param_3[1];
    }
    local_38 = iVar2;
    if (-1 < iVar11 && iVar11 <= iVar8) {
      local_34 = local_34 + iVar11;
    }
    else {
      local_34 = *(int *)(local_34 + 4);
    }
    uVar5 = func_005826A4(local_30,piStack_2c,&local_88,&local_38);
  }
  return uVar5;
}

