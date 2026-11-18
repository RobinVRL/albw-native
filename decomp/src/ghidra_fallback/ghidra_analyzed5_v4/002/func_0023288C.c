#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0026E810(int *param_1,uint *param_2);
extern int func_003FD9B4(int *param_1,uint *param_2);
extern int func_003FDC34(int param_1,int *param_2,int param_3,uint param_4);
extern int func_003FDD44(undefined4 *param_1);
extern int func_003FDD6C(int param_1);
extern int func_003FDE0C(int param_1,char *param_2,int param_3);
extern int func_003FF1AC(int param_1,uint *param_2,char *param_3);
extern undefined4 *DAT_00232ba0;
extern undefined DAT_00232ba4;
extern int *DAT_00232ba8;
extern int DAT_00232bac;
extern undefined1 DAT_00232bb0;
extern uint *DAT_00232bb8;

// USA 0023288C <- EU 0023288C (Ghidra, non-matching)
// GLOBAL DAT_00232ba0 undefined4 *
// GLOBAL DAT_00232ba4 undefined
// GLOBAL DAT_00232ba8 int *
// GLOBAL DAT_00232bac int
// GLOBAL DAT_00232bb0 undefined1
// GLOBAL DAT_00232bb8 uint *

void func_0023288C(int param_1,uint *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x170];
  #define local_168 ((undefined1 *)(albw_frame + 0x8))
  #define local_68 (*(int *)(albw_frame + 0x108))
  #define local_64 (*(undefined1 * *)(albw_frame + 0x10c))
  #define local_60 (*(int *)(albw_frame + 0x110))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x114))
  #define local_58 (*(int *)(albw_frame + 0x118))
  #define local_54 (*(undefined1 * *)(albw_frame + 0x11c))
  #define local_50 (*(int *)(albw_frame + 0x120))
  #define local_4c (*(uint * *)(albw_frame + 0x124))
  #define aiStack_48 ((int *)(albw_frame + 0x128))
  #define local_2c (*(int *)(albw_frame + 0x144))
  #define local_28 (*(int *)(albw_frame + 0x148))
  if (param_4 == 0) {
    local_2c = 1;
  }
  else {
    local_2c = func_0010983C(*DAT_00232ba0,param_4);
  }
  func_003FF1AC(param_1 + 0xb4,param_2,&DAT_00232ba4);
  piVar4 = DAT_00232ba8;
  iVar8 = *(int *)(*DAT_00232ba8 + 0x10);
  (**(code **)(*(int *)(iVar8 + 0x48) + 8))((int *)(iVar8 + 0x48));
  func_003FDE0C(param_1 + 0xb4,*(char **)(iVar8 + 0x4c),iVar8);
  iVar8 = *(int *)(*piVar4 + 0x14);
  (**(code **)(*(int *)(iVar8 + 0x48) + 8))((int *)(iVar8 + 0x48));
  func_003FDE0C(param_1 + 0xb4,*(char **)(iVar8 + 0x4c),iVar8);
  func_003FDD44(aiStack_48);
  func_003FD9B4(aiStack_48,param_2);
  iVar8 = DAT_00232bac;
  local_28 = 0;
  local_168[0] = 0;
  do {
    do {
      uVar6 = func_003FDC34((int)aiStack_48,&local_28,(int)local_168,1);
      if (uVar6 == 0) {
        func_003FDD6C((int)aiStack_48);
        if (local_2c != 1) {
          func_0010983C(*DAT_00232ba0,local_2c);
        }
        return;
      }
      local_68 = iVar8;
      local_5c = &DAT_00232bb0;
      local_60 = iVar8;
      local_64 = local_168;
      (**(code **)(iVar8 + 8))(&local_68);
      iVar9 = 0;
      do {
        if (local_64[iVar9] == '\0') {
          if (iVar9 < 0x40001) goto LAB_002329c4;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x40001);
      iVar9 = 0;
LAB_002329c4:
      (**(code **)(local_60 + 8))(&local_60);
      iVar11 = 0;
      do {
        if (local_5c[iVar11] == '\0') {
          if (iVar11 < 0x40001) goto LAB_00232a04;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x40001);
      iVar11 = 0;
LAB_00232a04:
      iVar10 = 0;
      if (-1 < iVar9 - iVar11) {
        do {
          local_58 = iVar8;
          local_54 = local_64 + iVar10;
          (**(code **)(iVar8 + 8))(&local_58);
          (**(code **)(local_58 + 8))(&local_58);
          puVar5 = local_54;
          (**(code **)(local_60 + 8))(&local_60);
          if (puVar5 != local_5c) {
            if (iVar11 < 0x40001) {
              iVar3 = iVar11;
              if (iVar11 < 1) goto LAB_00232ac0;
            }
            else {
              iVar3 = 0x40000;
            }
            iVar7 = 0;
            do {
              uVar6 = (uint)(char)local_54[iVar7];
              if (uVar6 == 0) {
                in_r12 = (uint)(byte)local_5c[iVar7];
              }
              if (uVar6 == 0 && in_r12 == 0) break;
              if (((uVar6 == 0) || (in_r12 = (uint)(char)local_5c[iVar7], in_r12 == 0)) ||
                 (uVar6 != in_r12)) {
                bVar1 = false;
                goto LAB_00232acc;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
LAB_00232ac0:
          bVar1 = true;
LAB_00232acc:
          if (bVar1) {
            if (iVar10 != -1) {
              bVar2 = 1;
              goto LAB_00232af4;
            }
            break;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 <= iVar9 - iVar11);
      }
      bVar2 = 0;
LAB_00232af4:
    } while ((bool)(bVar2 ^ 1));
    (**(code **)(local_68 + 8))(&local_68);
    iVar9 = 0;
    do {
      local_4c = DAT_00232bb8;
      if (local_64[iVar9] == '\0') {
        if ((iVar9 < 0x40001) && (4 < iVar9)) {
          local_4c = (uint *)(local_64 + 5);
        }
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40001);
    local_50 = iVar8;
    (**(code **)(iVar8 + 8))(&local_50);
    func_0026E810((int *)(param_1 + 0xb4),local_4c);
  } while( true );
}

