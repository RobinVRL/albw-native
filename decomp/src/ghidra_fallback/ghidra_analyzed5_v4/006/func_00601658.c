#include "ghidra_types.h"

extern int func_00601934(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7);
extern int DAT_006017c0;
extern int DAT_006017c4;

// USA 00601658 <- EU 00601630 (Ghidra, non-matching)
// GLOBAL DAT_006017c0 int
// GLOBAL DAT_006017c4 int

void func_00601658(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  iVar1 = DAT_006017c0;
  uVar7 = 0;
  do {
    iVar2 = uVar7 + 0x400;
    bVar10 = param_1 != iVar2;
    if (bVar10) {
      iVar2 = param_1 + -0x400;
    }
    iVar6 = 0;
    if (!bVar10 || iVar2 == 2) {
      iVar8 = iVar1 + uVar7 * 4;
      iVar5 = *(int *)(iVar8 + 0x128);
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar2 == DAT_006017c4) {
        uVar3 = 3;
        uVar4 = 2;
      }
      else if (DAT_006017c4 < iVar2) {
        if (iVar2 - DAT_006017c4 == 1) {
          uVar3 = 0;
          uVar4 = 4;
        }
        else {
          if (iVar2 - DAT_006017c4 != 0xd0b) goto LAB_006016d0;
          uVar3 = 2;
          uVar4 = uVar3;
        }
      }
      else if (iVar2 == 0x8051) {
        uVar3 = 1;
        uVar4 = 3;
      }
      else if (iVar2 == 0x8056) {
        uVar3 = 4;
        uVar4 = 2;
      }
      else {
LAB_006016d0:
        uVar3 = 0;
        uVar4 = 0;
      }
      if (*(int *)(iVar5 + 0x14) == 0x10000) {
        uVar9 = 0x100;
      }
      else {
        uVar9 = 0x300;
      }
      uVar3 = uVar3 | uVar9;
      uVar9 = uVar3;
      if (uVar7 == 0) {
        iVar2 = *(int *)(iVar1 + 0x164);
        uVar9 = uVar3 | 0x40;
        if (((iVar2 != 0x700) && (uVar9 = uVar3, iVar2 != 0x701)) &&
           (uVar9 = uVar3 | 0x40, iVar2 == 0x702)) {
          iVar2 = *(int *)(iVar1 + 0x130);
          iVar6 = uVar4 * (*(int *)(iVar2 + 0xc) *
                           ((*(int *)(iVar2 + 0x10) - *(int *)(iVar1 + 8)) - *(int *)(iVar1 + 0x148)
                           ) + *(int *)(iVar1 + 0x13c)) + *(int *)(iVar2 + 4);
          uVar9 = uVar3 | 0x20;
        }
      }
      func_00601934(uVar7,*(undefined4 *)(iVar8 + 0x14c),
                    uVar4 * (*(int *)(iVar5 + 0xc) *
                             ((*(int *)(iVar5 + 0x10) - *(int *)(iVar8 + 8)) -
                             *(int *)(iVar8 + 0x140)) + *(int *)(iVar8 + 0x134)) +
                    *(int *)(iVar5 + 4),iVar6,*(int *)(iVar5 + 0xc) * uVar4,uVar9,
                    *(undefined4 *)(iVar8 + 0x14c));
      *(uint *)(iVar8 + 0x14c) = (uint)(*(int *)(iVar8 + 0x14c) == 0);
    }
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      return;
    }
  } while( true );
}

