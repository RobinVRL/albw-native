#include "ghidra_types.h"

extern uint DAT_0048a4b4;
extern int DAT_0048a4b8;

// USA 0048A374 <- EU 0048A34C (Ghidra, non-matching)
// GLOBAL DAT_0048a4b4 uint
// GLOBAL DAT_0048a4b8 int

uint func_0048A374(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r4;
  uint uVar5;
  int unaff_r5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 != 0) {
    uVar3 = param_1;
    if (-2 < param_4) {
      uVar3 = 0;
    }
    if (-1 < param_4) {
      unaff_r5 = 0;
    }
    if (-2 < param_4) {
      unaff_r4 = uVar3;
    }
    if (param_4 == -1) {
      unaff_r5 = 1;
    }
    if (-2 < param_4) {
      if (param_4 == -1) goto LAB_0048a390;
      while (uVar4 = uVar3, (int)unaff_r4 < param_4) {
LAB_0048a390:
        iVar2 = DAT_0048a4b8;
        uVar1 = DAT_0048a4b4;
        uVar5 = unaff_r4;
        do {
          uVar8 = (uint)*(byte *)(param_3 + uVar5);
          uVar4 = uVar3;
          if ((uVar8 == 0) || (unaff_r4 = uVar5 + 1, uVar4 = param_2 - 1U, param_2 - 1U <= uVar3))
          goto LAB_0048a4a0;
          uVar6 = uVar8;
          if ((0x80 < uVar8) && (uVar6 = uVar1, uVar8 != 0xa0)) {
            if (uVar8 - 0xa1 < 0x3f) {
              uVar6 = uVar8 - 0x140 & 0xffff;
            }
            else {
              if (uVar8 < 0xfd) {
                if ((unaff_r5 == 0) && (uVar4 = uVar3, param_4 <= (int)unaff_r4)) goto LAB_0048a4a0;
                uVar6 = (uint)*(byte *)(param_3 + unaff_r4);
                unaff_r4 = uVar5 + 2;
                uVar4 = uVar3;
                if ((uVar6 < 0x40) || ((uVar6 == 0x7f || (0xfc < uVar6)))) goto LAB_0048a4a0;
                if (uVar6 < 0x80) {
                  iVar7 = uVar6 - 0x40;
                }
                else {
                  iVar7 = uVar6 - 0x41;
                }
                if (9 < uVar8 - 0xf0) {
                  if (uVar8 < 0xa0) {
                    iVar9 = uVar8 - 0x81;
                  }
                  else if (uVar8 < 0xe1) {
                    iVar9 = uVar8 - 0xc1;
                  }
                  else {
                    iVar9 = uVar8 - 0xcb;
                  }
                  uVar6 = (uint)*(ushort *)(iVar2 + (iVar7 + iVar9 * 0xbc) * 2);
                  if (uVar6 != 0) goto LAB_0048a488;
                  goto LAB_0048a4a0;
                }
                uVar8 = iVar7 + uVar8 * 0xbc + 0x2fc0;
              }
              else {
                uVar8 = uVar8 + 0xf7f4;
              }
              uVar6 = uVar8 & 0xffff;
            }
          }
LAB_0048a488:
          iVar7 = uVar3 * 2;
          uVar3 = uVar3 + 1;
          *(short *)(param_1 + iVar7) = (short)uVar6;
          uVar5 = unaff_r4;
        } while (unaff_r5 != 0);
      }
LAB_0048a4a0:
      *(undefined2 *)(param_1 + uVar4 * 2) = 0;
      return uVar4;
    }
  }
  return 0;
}

