#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0016E87C(int param_1);
extern int func_0016E8A8(int param_1);
extern int func_002724E0(int param_1,undefined2 param_2,undefined2 param_3);
extern int func_004A8610(int param_1,int param_2);
extern int *DAT_00276d98;
extern int DAT_00276d9c;
extern int *DAT_00276da0;
extern int DAT_00276da4;

// USA 002769DC <- EU 00276A04 (Ghidra, non-matching)
// GLOBAL DAT_00276d98 int *
// GLOBAL DAT_00276d9c int
// GLOBAL DAT_00276da0 int *
// GLOBAL DAT_00276da4 int

undefined4 func_002769DC(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  *(undefined2 *)(param_1 + 0x15b42) = *(undefined2 *)(param_1 + 0x15b40);
  *(short *)(param_1 + 0x15b40) = (short)param_2;
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  func_004A8610(*DAT_00276d98,param_1);
  iVar2 = local_30 + 0x183c;
  iVar12 = iVar2 + param_2 * DAT_00276d9c * 4;
  func_002724E0(*DAT_00276da0,*(undefined2 *)(iVar12 + 0x70),(short)param_2);
  iVar5 = DAT_00276da4;
  iVar3 = (int)*(char *)(iVar12 + 0x2e4);
  if ((iVar3 < 0) || (iVar3 != 1 && iVar3 != 2)) {
    if (param_3 == 0) {
      uVar10 = 2;
    }
    else {
      uVar10 = 1;
    }
    if (iVar3 != -1) {
      iVar6 = *(int *)(iVar12 + 0x300);
      pcVar7 = *(code **)(iVar6 + iVar3 * 8);
      if ((pcVar7 != (code *)0x0) ||
         ((uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
        uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4);
        piVar4 = (int *)(*(int *)(iVar12 + 0x2f4) + ((int)uVar8 >> 1));
        if ((uVar8 & 1) != 0) {
          pcVar7 = *(code **)(pcVar7 + *piVar4);
        }
        (*pcVar7)(piVar4,uVar10);
      }
    }
    uVar1 = *(undefined1 *)(iVar12 + 0x2e4);
    *(undefined1 *)(iVar12 + 0x2e4) = uVar10;
    *(undefined4 *)(iVar12 + 0x2e0) = 0;
    *(undefined1 *)(iVar12 + 0x2e5) = uVar1;
    if (*(int *)(iVar12 + 0x2f0) != 0) {
      if ((uint)(int)*(char *)(iVar12 + 0x2e4) < *(uint *)(iVar12 + 0x2e8)) {
        piVar4 = (int *)(*(int *)(iVar12 + 0x2ec) + *(char *)(iVar12 + 0x2e4) * 0x24);
      }
      else {
        piVar4 = *(int **)(iVar12 + 0x2ec);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_34 = piVar4[1];
      local_38 = iVar5;
      func_0010BEB4(*(int *)(iVar12 + 0x2f0),&local_38);
    }
    iVar6 = (int)*(char *)(iVar12 + 0x2e4);
    iVar3 = *(int *)(iVar12 + 0x2f8);
    pcVar7 = *(code **)(iVar3 + iVar6 * 8);
    if ((pcVar7 != (code *)0x0) ||
       ((uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
      uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4);
      if ((uVar8 & 1) != 0) {
        pcVar7 = *(code **)(pcVar7 + *(int *)(*(int *)(iVar12 + 0x2f4) + ((int)uVar8 >> 1)));
      }
      (*pcVar7)((int)(*(int *)(iVar12 + 0x2f4)) + ((int)uVar8 >> 1));
    }
  }
  uVar8 = *(uint *)(iVar12 + 0x304);
  uVar11 = 0;
  if (0 < (int)uVar8) {
    do {
      if (uVar11 < uVar8) {
        iVar3 = *(int *)(*(int *)(iVar12 + 0x30c) + uVar11 * 4);
      }
      else {
        iVar3 = 0;
      }
      iVar6 = (int)*(char *)(iVar3 + 0x2e4);
      if ((iVar6 < 0) || (iVar6 != 1 && iVar6 != 2)) {
        if (param_3 == 0) {
          uVar10 = 2;
        }
        else {
          uVar10 = 1;
        }
        if (iVar6 != -1) {
          iVar9 = *(int *)(iVar3 + 0x300);
          pcVar7 = *(code **)(iVar9 + iVar6 * 8);
          if ((pcVar7 != (code *)0x0) ||
             ((uVar8 = *(uint *)(iVar9 + iVar6 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
            uVar8 = *(uint *)(iVar9 + iVar6 * 8 + 4);
            piVar4 = (int *)(*(int *)(iVar3 + 0x2f4) + ((int)uVar8 >> 1));
            if ((uVar8 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *piVar4);
            }
            (*pcVar7)(piVar4,uVar10);
          }
        }
        uVar1 = *(undefined1 *)(iVar3 + 0x2e4);
        *(undefined1 *)(iVar3 + 0x2e4) = uVar10;
        *(undefined4 *)(iVar3 + 0x2e0) = 0;
        *(undefined1 *)(iVar3 + 0x2e5) = uVar1;
        if (*(int *)(iVar3 + 0x2f0) != 0) {
          if ((uint)(int)*(char *)(iVar3 + 0x2e4) < *(uint *)(iVar3 + 0x2e8)) {
            piVar4 = (int *)(*(int *)(iVar3 + 0x2ec) + *(char *)(iVar3 + 0x2e4) * 0x24);
          }
          else {
            piVar4 = *(int **)(iVar3 + 0x2ec);
          }
          (**(code **)(*piVar4 + 8))(piVar4);
          local_34 = piVar4[1];
          local_38 = iVar5;
          func_0010BEB4(*(int *)(iVar3 + 0x2f0),&local_38);
        }
        iVar9 = (int)*(char *)(iVar3 + 0x2e4);
        iVar6 = *(int *)(iVar3 + 0x2f8);
        pcVar7 = *(code **)(iVar6 + iVar9 * 8);
        if ((pcVar7 != (code *)0x0) ||
           ((uVar8 = *(uint *)(iVar6 + iVar9 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
          uVar8 = *(uint *)(iVar6 + iVar9 * 8 + 4);
          if ((uVar8 & 1) != 0) {
            pcVar7 = *(code **)(pcVar7 + *(int *)(*(int *)(iVar3 + 0x2f4) + ((int)uVar8 >> 1)));
          }
          (*pcVar7)((int)(*(int *)(iVar3 + 0x2f4)) + ((int)uVar8 >> 1));
        }
      }
      uVar8 = *(uint *)(iVar12 + 0x304);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar8);
  }
  iVar5 = (int)*(short *)(param_1 + 0x15b40);
  if ((-1 < iVar5) && (iVar5 < *(int *)(local_30 + 0x15b3c))) {
    func_0016E87C(iVar2 + iVar5 * DAT_00276d9c * 4);
  }
  return func_0016E8A8(iVar12);
}

