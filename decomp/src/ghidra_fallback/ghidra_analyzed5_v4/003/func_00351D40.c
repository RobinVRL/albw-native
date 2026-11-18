#include "ghidra_types.h"

extern int func_0053F7A8(int param_1);
extern int func_0053F9B8(int param_1);
extern int *DAT_00351f44;

// USA 00351D40 <- EU 00351D1C (Ghidra, non-matching)
// GLOBAL DAT_00351f44 int *

void func_00351D40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = DAT_00351f44;
  uVar5 = *(uint *)(param_1 + 0x24);
  if ((uVar5 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  if ((uVar5 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  if ((uVar5 & 1) != 0) {
    uVar5 = 0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    do {
      uVar4 = uVar5 & 0xff;
      if (uVar4 == 0x1d) {
        uVar4 = func_0053F7A8(*piVar3);
LAB_00351e8c:
        if (uVar4 != 0) {
LAB_00351e94:
          uVar4 = (uVar5 & 0xff) >> 5;
          uVar2 = 1 << (uVar5 & 0x1f);
          if (((*(uint *)(*(int *)(param_1 + 0x10) + uVar4 * 4) & uVar2) == 0) &&
             ((uVar5 & 0xff) < 0x32)) {
            *(uint *)(param_1 + 0x1c + uVar4 * 4) = uVar2 | *(uint *)(param_1 + 0x1c + uVar4 * 4);
          }
        }
      }
      else {
        if (0x1d < uVar4) {
          if (uVar4 == 0x2d) {
            uVar4 = (*(uint *)(param_1 + 0x28) & 0x2000) >> 0xd;
          }
          else if (uVar4 == 0x2e) {
            uVar4 = (*(uint *)(param_1 + 0x28) & 0x4000) >> 0xe;
          }
          else if (uVar4 == 0x30) {
            uVar4 = (*(uint *)(param_1 + 0x28) & 0x10000) >> 0x10;
          }
          else {
            if (uVar4 != 0x31) goto LAB_00351de8;
            uVar4 = (*(uint *)(param_1 + 0x28) & 0x20000) >> 0x11;
          }
          uVar4 = uVar4 ^ 1;
          goto LAB_00351e8c;
        }
        if (uVar4 != 2) {
          if (uVar4 < 2) {
            if (uVar4 == 0) {
              if (0 < *(int *)(param_1 + 0x14)) goto LAB_00351e94;
            }
            else {
              if (uVar4 != 1) goto LAB_00351de8;
              if (4 < *(int *)(param_1 + 0x14)) goto LAB_00351e94;
            }
            goto LAB_00351ef0;
          }
          if (uVar4 == 3) {
            if (0x13 < *(int *)(param_1 + 0x14)) goto LAB_00351e94;
            goto LAB_00351ef0;
          }
          if (uVar4 == 0x1a) {
            uVar4 = func_0053F9B8(*piVar3);
            goto LAB_00351e8c;
          }
LAB_00351de8:
          if ((*(uint *)(param_1 + 0x24 + (uVar4 >> 5) * 4) & 1 << (uVar5 & 0x1f)) == 0)
          goto LAB_00351ef0;
          goto LAB_00351e94;
        }
        if (9 < *(int *)(param_1 + 0x14)) goto LAB_00351e94;
      }
LAB_00351ef0:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x32);
  }
  uVar5 = 0;
  do {
    iVar1 = (int)uVar5 >> 5;
    uVar4 = 1 << (uVar5 & 0x1f);
    if (((*(uint *)(*(int *)(param_1 + 0x10) + iVar1 * 4) & uVar4) != 0) && (uVar5 < 0x32)) {
      *(uint *)(param_1 + 0x1c + iVar1 * 4) = *(uint *)(param_1 + 0x1c + iVar1 * 4) & ~uVar4;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x32);
  return;
}

