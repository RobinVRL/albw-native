#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0057D86C(int *param_1);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_0052f1d8;
extern int DAT_0052f1dc;
extern int DAT_0052f1e0;
extern int DAT_0052f1e4;

// USA 0052EF94 <- EU 0052EF6C (Ghidra, non-matching)
// GLOBAL DAT_0052f1d8 int *
// GLOBAL DAT_0052f1dc int
// GLOBAL DAT_0052f1e0 int
// GLOBAL DAT_0052f1e4 int

undefined4 func_0052EF94(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(uint * *)(albw_frame + 0x4))
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 ((uint *)(albw_frame + 0xc))
  #define uStack_35 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(uint * *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(int *)(albw_frame + 0x5c))
  if ((*(char *)(param_1 + 0x109) == '\0') &&
     (bVar3 = func_0057D86C(*(int **)(param_1 + 0x24)), !bVar3)) {
    return 0;
  }
  local_2c = (uint *)func_00588154(*DAT_0052f1d8,*(undefined4 *)(param_1 + 0xe0));
  iVar2 = DAT_0052f1dc;
  if (local_2c != (uint *)0x0) {
    local_30 = DAT_0052f1dc;
    local_78 = 0x40;
    iVar9 = 0;
    uStack_35 = 0;
    local_80 = DAT_0052f1e0;
    local_7c = local_74;
    (**(code **)(DAT_0052f1dc + 8))(&local_30);
    uVar7 = 0;
    do {
      if (*(char *)((int)local_2c + uVar7) == '\0') {
        if ((int)uVar7 < 0x40001) goto LAB_0052f02c;
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x40001);
    uVar7 = 0;
LAB_0052f02c:
    if (local_78 <= (int)uVar7) {
      uVar7 = local_78 - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(local_74,local_2c,uVar7);
    local_80 = DAT_0052f1e4;
    *(undefined1 *)((int)local_74 + uVar7) = 0;
    (**(code **)(local_80 + 8))(&local_80);
    iVar8 = 0;
    do {
      if (*(char *)((int)local_7c + iVar8) == '\0') {
        if (iVar8 < 0x40001) goto LAB_0052f0a4;
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40001);
    iVar8 = 0;
LAB_0052f0a4:
    (**(code **)(*param_2 + 8))(param_2);
    iVar4 = 0;
    do {
      if (*(char *)(param_2[1] + iVar4) == '\0') {
        if (iVar4 < 0x40001) {
          iVar9 = iVar4;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
    if (-1 < iVar8 - iVar9) {
      do {
        local_28 = iVar2;
        local_24 = (int)local_7c + iVar4;
        (**(code **)(iVar2 + 8))(&local_28);
        (**(code **)(local_28 + 8))(&local_28);
        iVar1 = local_24;
        (**(code **)(*param_2 + 8))(param_2);
        iVar6 = param_2[1];
        if (iVar1 != iVar6) {
          if (iVar9 < 0x40001) {
            iVar1 = iVar9;
            if (iVar9 < 1) goto LAB_0052f19c;
          }
          else {
            iVar1 = 0x40000;
          }
          iVar5 = 0;
          do {
            uVar7 = (uint)*(char *)(local_24 + iVar5);
            if (uVar7 == 0) {
              in_r12 = (uint)*(byte *)(iVar6 + iVar5);
            }
            if (uVar7 == 0 && in_r12 == 0) break;
            if (((uVar7 == 0) || (in_r12 = (uint)*(char *)(iVar6 + iVar5), in_r12 == 0)) ||
               (uVar7 != in_r12)) {
              bVar3 = false;
              goto LAB_0052f1a8;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
LAB_0052f19c:
        bVar3 = true;
LAB_0052f1a8:
        if (bVar3) {
          if (iVar4 == -1) {
            return 0;
          }
          return 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar8 - iVar9);
    }
  }
  return 0;
}

