#include "ghidra_types.h"

extern int *DAT_0016bc28;
extern int DAT_0016bc2c;
extern int DAT_0016bc30;

// USA 0016BAF8 <- EU 0016BAF8 (Ghidra, non-matching)
// GLOBAL DAT_0016bc28 int *
// GLOBAL DAT_0016bc2c int
// GLOBAL DAT_0016bc30 int

void func_0016BAF8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*DAT_0016bc28 == 0) {
    return;
  }
  iVar1 = *(int *)(*DAT_0016bc28 + 0x38);
  if (param_3 < 0) {
    return;
  }
  if ((param_3 < *(int *)(DAT_0016bc2c + iVar1)) &&
     (iVar1 = iVar1 + param_3 * DAT_0016bc30 * 4, iVar1 != -0x183c)) {
    uVar2 = 0;
    if (0 < *(int *)(param_1 + 0x90)) {
      uVar4 = *(uint *)(param_1 + 0x90);
      do {
        if (uVar2 < uVar4) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
        }
        else {
          iVar3 = 0;
        }
        if ((int)*(short *)(iVar3 + 6) == (int)*(char *)(iVar1 + 0x1c38)) {
          if (uVar2 < uVar4) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
          }
          else {
            iVar3 = 0;
          }
          if (*(int *)(iVar3 + 0x20) != 0) {
            if (uVar2 < uVar4) {
              iVar1 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
            }
            else {
              iVar1 = 0;
            }
            if ((*(int *)(param_1 + 0xf74) != iVar1) || (*(char *)(param_1 + 0xfa5) == param_3)) {
              if (uVar2 < uVar4) {
                iVar1 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
              }
              else {
                iVar1 = 0;
              }
              *(int *)(*(int *)(iVar1 + 0x20) + 0x164) =
                   *(int *)(*(int *)(iVar1 + 0x20) + 0x164) + param_2;
            }
            break;
          }
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar4);
    }
    if (*(char *)(param_1 + 0xf95) == param_3) {
      *(int *)(param_1 + 0xf78) = *(int *)(param_1 + 0xf78) + param_2;
    }
  }
  return;
}

