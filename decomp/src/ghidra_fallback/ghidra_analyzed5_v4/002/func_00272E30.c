#include "ghidra_types.h"

extern int func_0016A91C(int param_1,int param_2);
extern int func_00270E38(int param_1,uint param_2);
extern int *DAT_00272fc0;
extern int *DAT_00272fc4;
extern int DAT_00272fc8;

// USA 00272E30 <- EU 00272E58 (Ghidra, non-matching)
// GLOBAL DAT_00272fc0 int *
// GLOBAL DAT_00272fc4 int *
// GLOBAL DAT_00272fc8 int

void func_00272E30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  
  iVar1 = *DAT_00272fc4;
  iVar8 = *(int *)(*DAT_00272fc0 + 0x38);
  iVar2 = func_0016A91C(iVar1,-1);
  if (iVar2 != 0) {
    func_00270E38(param_1,0xffffffff);
  }
  piVar7 = (int *)(iVar8 + 0x15b3c);
  iVar2 = 0;
  if (*piVar7 < 1) {
    return;
  }
  do {
    if (iVar2 < *piVar7) {
      iVar9 = iVar8 + 0x183c + iVar2 * DAT_00272fc8 * 4;
      goto LAB_00272ef4;
    }
    do {
      iVar9 = 0;
LAB_00272ef4:
      uVar4 = 0;
      uVar6 = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x1c)) {
        do {
          iVar5 = *(int *)(param_1 + 0x24);
          if (uVar4 < *(uint *)(param_1 + 0x1c)) {
            iVar5 = *(int *)(param_1 + 0x24) + uVar4 * 0x620;
          }
          uVar3 = 0;
          if (0 < *(int *)(iVar5 + 0x5d4)) {
            do {
              psVar10 = *(short **)(iVar5 + 0x5dc);
              if (uVar3 < *(uint *)(iVar5 + 0x5d4)) {
                psVar10 = *(short **)(iVar5 + 0x5dc) + uVar3;
              }
              uVar6 = uVar4;
              if (*psVar10 == *(short *)(iVar9 + 0x70)) goto LAB_00272f80;
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < (int)*(uint *)(iVar5 + 0x5d4));
          }
          uVar4 = uVar4 + 1;
          uVar6 = 0xffffffff;
        } while ((int)uVar4 < (int)*(uint *)(param_1 + 0x1c));
      }
LAB_00272f80:
      *(char *)(iVar9 + 0x3fc) = (char)uVar6;
      iVar9 = func_0016A91C(iVar1,uVar6);
      if (iVar9 != 0) {
        func_00270E38(param_1,uVar6);
      }
      iVar2 = iVar2 + 1;
      if (*piVar7 <= iVar2) {
        return;
      }
    } while (iVar2 < 0);
  } while( true );
}

