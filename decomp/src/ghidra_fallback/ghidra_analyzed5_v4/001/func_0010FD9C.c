#include "ghidra_types.h"

extern int func_001107D8(int *param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5);
extern int func_00110848(int param_1);

// USA 0010FD9C <- EU 0010FD9C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

void func_0010FD9C(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define piStack_34 (*(int * *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  iVar7 = *(int *)(param_4 + 0x58);
  piStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_2 == 0) {
LAB_0010ffb4:
    if (*param_1 == 0) goto LAB_00110070;
  }
  else {
    iVar4 = (int)*(short *)(param_2 + 8);
    uVar2 = *(short *)(param_2 + 10) - iVar4;
    if (0 < (int)(uVar2 + 1)) {
      iVar5 = iVar7 + iVar4 * 0x10;
      puVar3 = (undefined1 *)(iVar5 + -4);
      if ((uVar2 & 1) == 0) {
        puVar3 = (undefined1 *)(iVar5 + 0xc);
        *puVar3 = 0;
      }
      for (iVar4 = (*(short *)(param_2 + 10) - iVar4) + 1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3[0x10] = 0;
        puVar3 = puVar3 + 0x20;
        *puVar3 = 0;
      }
    }
    if (*param_1 == 0) {
      iVar4 = (int)*(short *)(param_2 + 8);
      if (*(short *)(param_2 + 10) < iVar4) goto LAB_00110070;
      do {
        iVar6 = *(int *)(param_5 + 0x10) + iVar4 * 0x3c;
        iVar1 = *(int *)(iVar6 + 0x10);
        bVar9 = SBORROW4(iVar1,param_3);
        iVar5 = iVar1 - param_3;
        if (iVar1 <= param_3) {
          bVar9 = SBORROW4(param_3,*(int *)(iVar6 + 0x14));
          iVar5 = param_3 - *(int *)(iVar6 + 0x14);
        }
        if (iVar5 < 0 != bVar9) {
          iVar1 = iVar7 + iVar4 * 0x10;
          iVar5 = *(int *)(iVar1 + 4);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(iVar1 + 8))) {
            func_00110848(iVar5);
          }
          func_001107D8(&local_40,local_28,*(uint **)(iVar6 + 0xc),iVar6,param_1);
          *(int *)(iVar1 + 4) = local_40;
          *(undefined4 *)(iVar1 + 8) = uStack_3c;
          *(undefined1 *)(iVar1 + 0xc) = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(short *)(param_2 + 10));
      goto LAB_0010ffb4;
    }
    iVar4 = (int)*(short *)(param_2 + 8);
    if (iVar4 <= *(short *)(param_2 + 10)) {
      do {
        iVar6 = *(int *)(param_5 + 0x10) + iVar4 * 0x3c;
        iVar1 = *(int *)(iVar6 + 0x10);
        bVar9 = SBORROW4(iVar1,param_3);
        iVar5 = iVar1 - param_3;
        if (iVar1 <= param_3) {
          bVar9 = SBORROW4(param_3,*(int *)(iVar6 + 0x14));
          iVar5 = param_3 - *(int *)(iVar6 + 0x14);
        }
        if (iVar5 < 0 != bVar9) {
          if (*(int *)(iVar6 + 4) != 0) {
            for (iVar5 = (int)*(short *)(*param_1 + 8); iVar5 <= *(short *)(*param_1 + 10);
                iVar5 = iVar5 + 1) {
              if (*(int *)(iVar6 + 4) == *(int *)(*(int *)(param_5 + 0x10) + iVar5 * 0x3c + 4)) {
                if (-1 < iVar5) {
                  iVar5 = iVar7 + iVar5 * 0x10;
                  iVar1 = iVar7 + iVar4 * 0x10;
                  uVar8 = *(undefined4 *)(iVar5 + 8);
                  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 4);
                  *(undefined4 *)(iVar1 + 8) = uVar8;
                  *(undefined4 *)(iVar5 + 4) = 0;
                  *(undefined4 *)(iVar5 + 8) = 0;
                  goto LAB_0010ff04;
                }
                break;
              }
            }
          }
          iVar1 = iVar7 + iVar4 * 0x10;
          iVar5 = *(int *)(iVar1 + 4);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(iVar1 + 8))) {
            func_00110848(iVar5);
          }
          func_001107D8(&local_40,local_28,*(uint **)(iVar6 + 0xc),iVar6,param_1);
          *(int *)(iVar1 + 4) = local_40;
          *(undefined4 *)(iVar1 + 8) = uStack_3c;
LAB_0010ff04:
          *(undefined1 *)(iVar7 + iVar4 * 0x10 + 0xc) = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(short *)(param_2 + 10));
      goto LAB_0010ffb4;
    }
  }
  iVar5 = (int)*(short *)(*param_1 + 8);
  iVar4 = (int)*(short *)(*param_1 + 10);
  if (param_2 == 0) {
    if (iVar5 <= iVar4) {
      do {
        iVar4 = iVar7 + iVar5 * 0x10;
        iVar1 = *(int *)(iVar4 + 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(iVar4 + 8))) {
          func_00110848(iVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(short *)(*param_1 + 10));
    }
  }
  else if (iVar5 <= iVar4) {
    do {
      if ((iVar5 < *(short *)(param_2 + 8)) || (*(short *)(param_2 + 10) < iVar5)) {
        iVar4 = iVar7 + iVar5 * 0x10;
        iVar1 = *(int *)(iVar4 + 4);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(iVar4 + 8))) {
          func_00110848(iVar1);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(short *)(*param_1 + 10));
  }
LAB_00110070:
  param_1[2] = param_3;
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

