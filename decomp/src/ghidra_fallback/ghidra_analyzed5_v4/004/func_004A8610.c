#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int DAT_004a8700;

// USA 004A8610 <- EU 004A85E8 (Ghidra, non-matching)
// GLOBAL DAT_004a8700 int

void func_004A8610(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = param_2 + 0x183c + (int)*(short *)(param_2 + 0x15b40) * (int)(short)DAT_004a8700 * 4;
  piVar2 = (int *)(iVar4 + 0x400 + *(int *)(param_1 + 0xbf48));
  piVar1 = piVar2 + 1;
  if (*piVar1 == 0) {
    piVar2 = (int *)*piVar2;
  }
  if (*piVar1 == 0 && piVar2 == (int *)0x0) {
    func_0010F1DC((int *)(param_1 + 0xbf3c),(int *)(*(int *)(param_1 + 0xbf48) + iVar4 + 0x400));
    *(int *)(param_1 + 0xbf44) = *(int *)(param_1 + 0xbf44) + 1;
  }
  uVar7 = *(uint *)(iVar4 + 0x304);
  uVar6 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar5 = *(uint *)(iVar4 + 0x304);
      if (uVar6 < uVar5) {
        iVar3 = *(int *)(*(int *)(iVar4 + 0x30c) + uVar6 * 4);
      }
      else {
        iVar3 = 0;
      }
      piVar2 = (int *)(param_2 + *(int *)(iVar3 + 0x3c0) * DAT_004a8700 * 4 + 0x1c3c +
                      *(int *)(param_1 + 0xbf48));
      piVar1 = piVar2 + 1;
      if (*piVar1 == 0) {
        piVar2 = (int *)*piVar2;
      }
      if (*piVar1 == 0 && piVar2 == (int *)0x0) {
        if (uVar6 < uVar5) {
          iVar3 = *(int *)(*(int *)(iVar4 + 0x30c) + uVar6 * 4);
        }
        else {
          iVar3 = 0;
        }
        func_0010F1DC((int *)(param_1 + 0xbf3c),
                      (int *)(*(int *)(param_1 + 0xbf48) +
                             param_2 + *(int *)(iVar3 + 0x3c0) * DAT_004a8700 * 4 + 0x1c3c));
        *(int *)(param_1 + 0xbf44) = *(int *)(param_1 + 0xbf44) + 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar7);
  }
  return;
}

