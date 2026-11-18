#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);
extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_00111A64(uint *param_1);
extern uint DAT_00110cf8;

// USA 00110B44 <- EU 00110B44 (Ghidra, non-matching)
// GLOBAL DAT_00110cf8 uint

int func_00110B44(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((uint *)(albw_frame + 0x8))
  iVar10 = 0;
  iVar9 = *(int *)(*param_1 + 0xc) + -1;
  uVar5 = param_3;
  if (-1 < iVar9) {
    do {
      iVar2 = (iVar10 + iVar9) / 2;
      iVar7 = param_1[2] + iVar2 * 0xc;
      uVar1 = func_0010FBAC(param_2,*(uint **)(iVar7 + 4));
      if ((int)uVar1 < 0) {
        iVar9 = iVar2 + -1;
      }
      if (0 < (int)uVar1) {
        iVar10 = iVar2 + 1;
      }
      if (uVar1 == 0) {
        iVar2 = (int)*(short *)(iVar7 + 8);
        iVar6 = (int)*(short *)(iVar7 + 10);
        iVar9 = 0;
        uVar1 = 0xffffffff;
        if (iVar2 <= iVar6) {
          iVar10 = param_1[4];
        }
        uVar8 = 0;
        iVar3 = iVar2;
        if (iVar2 <= iVar6) goto LAB_00110bdc;
        goto LAB_00110c68;
      }
    } while (iVar10 <= iVar9);
  }
  return 0;
LAB_00110bdc:
  do {
    iVar4 = iVar3 + 1;
    uVar5 = iVar10 + iVar3 * 0x44;
    if (*(char *)(uVar5 + 0x42) != '\0') {
      uVar5 = *(uint *)(uVar5 + 0xc);
      uVar8 = uVar8 + uVar5;
    }
    iVar3 = iVar4;
  } while (iVar4 <= iVar6);
  if ((int)uVar8 < 1) {
LAB_00110c68:
    if (iVar2 <= iVar6) {
      do {
        iVar10 = param_1[4] + iVar2 * 0x44;
        uVar8 = *(uint *)(iVar10 + 0xc);
        if (uVar8 == param_3) {
          uVar5 = *(uint *)(iVar10 + 0x14);
        }
        if (uVar8 == param_3 && uVar5 == param_4) {
          return iVar10;
        }
        uVar5 = 0;
        if (uVar8 == DAT_00110cf8) {
          uVar8 = *(uint *)(iVar10 + 0x14);
          uVar5 = (uint)(uVar8 == DAT_00110cf8);
          if ((uVar8 != DAT_00110cf8) && (uVar8 == param_4)) {
LAB_00110cd0:
            uVar5 = 10;
          }
LAB_00110cd4:
          if ((int)uVar1 < (int)uVar5) {
            iVar9 = iVar10;
            uVar1 = uVar5;
          }
        }
        else if (*(uint *)(iVar10 + 0x14) == DAT_00110cf8) {
          if (uVar8 == param_3) goto LAB_00110cd0;
          goto LAB_00110cd4;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar6);
    }
  }
  else {
    func_0010FD28(auStack_38,iVar2);
    uVar5 = func_00111A64(auStack_38);
    iVar10 = (int)*(short *)(iVar7 + 8);
    iVar2 = 0;
    if (iVar10 <= *(short *)(iVar7 + 10)) {
      do {
        iVar6 = param_1[4] + iVar10 * 0x44;
        iVar2 = iVar2 + *(int *)(iVar6 + 0xc);
        if ((int)((ulonglong)uVar8 * (ulonglong)uVar5 >> 0x20) <= iVar2) {
          return iVar6;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 <= *(short *)(iVar7 + 10));
    }
  }
  return iVar9;
}

