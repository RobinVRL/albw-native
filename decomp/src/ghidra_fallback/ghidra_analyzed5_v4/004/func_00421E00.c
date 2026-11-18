#include "ghidra_types.h"

extern int func_003FF898(int param_1,int param_2);
extern int func_003FF8D0(int param_1,int param_2,int param_3);
extern int func_003FF904(int param_1,int param_2);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int DAT_004220cc;

// USA 00421E00 <- EU 00421DE0 (Ghidra, non-matching)
// GLOBAL DAT_004220cc int

undefined4 func_00421E00(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(int *)(albw_frame + 0x4))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  iVar7 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  iVar4 = *(int *)(**(int **)(param_2 + 0x1c) + 0x10);
  if (iVar7 != 0 && iVar4 != 0) {
    local_30 = *(undefined4 *)(iVar7 + 0x24);
    local_38 = *(undefined4 *)(iVar7 + 0x1c);
    uStack_34 = *(undefined4 *)(iVar7 + 0x20);
    func_003FFE6C(iVar7,(undefined4 *)(iVar4 + 0x1c));
    func_003FFE6C(iVar4,&local_38);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
    *(byte *)(*(int *)(param_2 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_2 + 0x1c) + 0x70) | 2;
    iVar3 = DAT_004220cc;
    iVar5 = *(int *)(iVar7 + 0xc);
    iVar6 = *(int *)(iVar4 + 0xc);
    iVar11 = 0;
    if (iVar5 != 0) {
      iVar11 = iVar6;
    }
    if (iVar5 != 0 && iVar11 != 0) {
      local_5c = 0;
      for (piVar9 = *(int **)(iVar5 + 0x14); piVar9 != (int *)(iVar5 + 0x14);
          piVar9 = (int *)*piVar9) {
        local_4c = (int)(piVar9 + 0x1f);
        local_50 = iVar3;
        piVar8 = (int *)(param_1 + 0x5c);
        (**(code **)(*(int *)(param_1 + 0x5c) + 8))(piVar8);
        (**(code **)(*piVar8 + 8))(piVar8);
        iVar11 = *(int *)(param_1 + 0x60);
        (**(code **)(local_50 + 8))(&local_50);
        if (iVar11 == local_4c) {
LAB_00421f68:
          bVar2 = true;
        }
        else {
          iVar11 = 0;
          do {
            cVar1 = *(char *)(*(int *)(param_1 + 0x60) + iVar11);
            if (cVar1 != *(char *)(local_4c + iVar11)) break;
            if (cVar1 == '\0') goto LAB_00421f68;
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x40001);
          bVar2 = false;
        }
        if (bVar2) {
          if (*piVar9 != iVar5 + 0x14) {
            local_5c = *piVar9 + -4;
          }
          break;
        }
      }
      iVar11 = 0;
      for (piVar9 = *(int **)(iVar6 + 0x14); piVar9 != (int *)(iVar6 + 0x14);
          piVar9 = (int *)*piVar9) {
        local_4c = (int)(piVar9 + 0x1f);
        local_50 = iVar3;
        piVar8 = (int *)(param_2 + 0x5c);
        (**(code **)(*(int *)(param_2 + 0x5c) + 8))(piVar8);
        (**(code **)(*piVar8 + 8))(piVar8);
        iVar10 = *(int *)(param_2 + 0x60);
        (**(code **)(local_50 + 8))(&local_50);
        if (iVar10 == local_4c) {
LAB_00422038:
          bVar2 = true;
        }
        else {
          iVar10 = 0;
          do {
            cVar1 = *(char *)(*(int *)(param_2 + 0x60) + iVar10);
            if (cVar1 != *(char *)(local_4c + iVar10)) break;
            if (cVar1 == '\0') goto LAB_00422038;
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x40001);
          bVar2 = false;
        }
        if (bVar2) {
          if (*piVar9 != iVar6 + 0x14) {
            iVar11 = *piVar9 + -4;
          }
          break;
        }
      }
      func_003FF904(iVar5,iVar7);
      func_003FF904(iVar6,iVar4);
      if (local_5c == 0) {
        func_003FF898(iVar5,iVar4);
      }
      else {
        func_003FF8D0(iVar5,local_5c,iVar4);
      }
      if (iVar11 == 0) {
        return func_003FF898(iVar6,iVar7);
      }
      func_003FF8D0(iVar6,iVar11,iVar7);
    }
  }
  return 0;
}

