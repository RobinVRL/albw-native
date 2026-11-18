#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int DAT_00416e10;

// USA 004169CC <- EU 004169AC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00416e10 int

undefined4 func_004169CC(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((undefined4 *)(albw_frame + 0x0))
  #define iStack_34 (*(int *)(albw_frame + 0x2c))
  #define iStack_30 (*(int *)(albw_frame + 0x30))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  iVar4 = DAT_00416e10;
  iVar9 = 0;
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x3c) == *(uint *)(param_1 + 0x40)) {
    iVar8 = *(int *)(iVar1 + 0x28);
  }
  else {
    iVar8 = *(int *)(iVar1 + 0x1c);
  }
  iStack_34 = param_1;
  iStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  if ((*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x3c)) && (*(char *)(iVar1 + 8) != '\0')) {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x44);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))
              (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x4c),0);
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar6 = *(uint *)(param_1 + 0x20);
      if (uVar6 != 0) {
        uVar2 = uVar6 & 1;
        if (uVar2 == 1) {
          local_60[0] = *param_3;
        }
        uVar5 = (uint)(uVar2 == 1);
        if (uVar2 < uVar6) {
          do {
            uVar2 = uVar2 + 2;
            local_60[uVar5] = param_3[uVar5];
            local_60[uVar5 + 1] = param_3[uVar5 + 1];
            uVar5 = uVar5 + 2;
          } while (uVar2 < *(uint *)(param_1 + 0x20));
        }
      }
      iVar1 = (**(code **)(**(int **)(iVar4 + 4) + 0x10))
                        (*(int **)(iVar4 + 4),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x20),local_60);
      if (iVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  if (param_5 == 0) {
    if (*(char *)(param_1 + 0x54) != '\0') {
      iVar9 = *(int *)(param_1 + 0x50);
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 100);
    if (uVar6 <= (uint)(*(int *)(param_1 + 0x5c) + param_5)) {
      do {
        param_5 = param_5 - (uVar6 - *(int *)(param_1 + 0x5c));
        if (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\0') {
          if (*(code **)(param_1 + 0xc2c) == (code *)0x0) {
LAB_00416c1c:
            *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 100);
            *(undefined1 *)(param_1 + 0x55) = 1;
            *(undefined4 *)(param_2 + 0x20) = 0;
            return 1;
          }
          local_60[0] = *(undefined4 *)(param_1 + 0x58);
          iVar1 = (**(code **)(param_1 + 0xc2c))(local_60,*(undefined4 *)(param_1 + 0xc30));
          if (iVar1 == 0) goto LAB_00416c1c;
          *(undefined4 *)(param_1 + 0x58) = local_60[0];
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
          *(undefined4 *)(param_1 + 0x60) = 0;
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
        }
        uVar6 = *(uint *)(param_1 + 100);
        iVar7 = iVar7 + 1;
      } while (uVar6 <= (uint)(*(int *)(param_1 + 0x5c) + param_5));
    }
    uVar6 = param_5 + *(int *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0x5c) = uVar6;
    iVar1 = *(int *)(param_1 + 0x18);
    uVar10 = func_00110710(uVar6,*(uint *)(iVar1 + 0x1c));
    *(int *)(param_1 + 0x3c) = (int)uVar10;
    iVar9 = uVar6 - (int)uVar10 * *(int *)(iVar1 + 0x1c);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),0);
    uVar6 = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      do {
        if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x44) - 1U == uVar6)) {
          uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x4c) = uVar3;
        }
        (**(code **)(**(int **)(iVar4 + 4) + 0xc))
                  (*(int **)(iVar4 + 4),*(undefined4 *)(param_1 + 0x14));
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x3c));
    }
  }
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x44) + -1)
     ) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14));
  uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x3c))(*(int **)(param_1 + 0x14));
  if (uVar6 < uVar2) {
    if (iVar8 != 0) {
      uVar6 = *(uint *)(param_1 + 0x20);
      if (uVar6 != 0) {
        uVar2 = uVar6 & 1;
        if (uVar2 == 1) {
          local_60[0] = *param_3;
        }
        uVar5 = (uint)(uVar2 == 1);
        if (uVar2 < uVar6) {
          do {
            uVar2 = uVar2 + 2;
            local_60[uVar5] = param_3[uVar5];
            local_60[uVar5 + 1] = param_3[uVar5 + 1];
            uVar5 = uVar5 + 2;
          } while (uVar2 < *(uint *)(param_1 + 0x20));
        }
      }
      iVar4 = (**(code **)(**(int **)(iVar4 + 4) + 0x10))
                        (*(int **)(iVar4 + 4),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x20),local_60);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14));
      uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x3c))(*(int **)(param_1 + 0x14));
      if (uVar2 <= uVar6) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
      }
    }
  }
  else {
    iVar8 = 0;
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
  uVar6 = *(int *)(param_1 + 0x3c) + 1;
  *(uint *)(param_1 + 0x3c) = uVar6;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar8;
  if ((*(uint *)(param_1 + 0x40) < uVar6) && (*(char *)(*(int *)(param_1 + 0x18) + 8) == '\0')) {
    *(undefined1 *)(param_1 + 0x55) = 1;
  }
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar6 = *(uint *)(param_1 + 0x20) & 1;
    if (uVar6 == 1) {
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    if (uVar6 < *(uint *)(param_1 + 0x20)) {
      do {
        iVar4 = param_2 + uVar6 * 4;
        uVar6 = uVar6 + 2;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 0;
      } while (uVar6 < *(uint *)(param_1 + 0x20));
    }
  }
  *(undefined4 *)(param_2 + 0x18) = local_28;
  *(int *)(param_2 + 0x20) = iVar8;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(int *)(param_2 + 0x48) = iVar7;
  *(int *)(param_2 + 0x44) = iVar9;
  *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)(param_1 + 0x55);
  return 1;
}

