#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_003E6600(int *param_1,int param_2,uint param_3,int *param_4);
extern int func_003E6680(int param_1,int param_2);
extern int DAT_003fd858;
extern int DAT_003fd85c;
extern int DAT_003fd860;
extern uint DAT_003fd864;

// USA 003FD738 <- EU 003FD718 (Ghidra, non-matching)
// GLOBAL DAT_003fd858 int
// GLOBAL DAT_003fd85c int
// GLOBAL DAT_003fd860 int
// GLOBAL DAT_003fd864 uint

undefined4 func_003FD738(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int unaff_r7;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  iVar12 = *(int *)(param_2 + param_3 + -4);
  piVar8 = (int *)(param_2 + (iVar12 + 3U & 0xfffffffc));
  iVar4 = func_003E6600(piVar8,DAT_003fd858,0x3000000,(int *)0x1);
  if (iVar4 == 0) {
    return 0;
  }
  piVar9 = (int *)0x0;
  piVar5 = (int *)0x0;
  bVar13 = (short)piVar8[4] != 0;
  if (bVar13) {
    unaff_r7 = DAT_003fd85c;
  }
  iVar4 = 0;
  if (bVar13) {
    do {
      piVar5 = (int *)func_003E6680((int)piVar8,(int)piVar5);
      iVar4 = iVar4 + 1;
      if (*piVar5 + unaff_r7 == 0) {
        piVar9 = piVar5;
      }
    } while (iVar4 < (int)(uint)*(ushort *)(piVar8 + 4));
    if (piVar9 != (int *)0x0) {
      bVar1 = *(byte *)((int)piVar9 + 0xe);
      uVar10 = (uint)*(ushort *)(piVar9 + 2);
      uVar3 = piVar9[2];
      uVar11 = (uint)*(ushort *)((int)piVar9 + 10);
      uVar6 = *(uint *)(DAT_003fd860 + (uint)bVar1 * 0x14 + 0xc);
      uVar7 = uVar6 & 0xffff;
      do {
        bVar13 = uVar7 == 0;
        bVar14 = uVar10 != uVar7;
        bVar15 = uVar7 <= uVar10;
        if (!bVar13 && uVar7 < uVar10) {
          uVar7 = DAT_003fd864 & uVar7 << 1;
        }
      } while ((bVar13 || bVar15) && (!bVar13 && bVar14));
      uVar6 = uVar6 & 0xffff;
      do {
        bVar13 = uVar6 == 0;
        bVar14 = uVar11 != uVar6;
        bVar15 = uVar6 <= uVar11;
        if (!bVar13 && uVar6 < uVar11) {
          uVar6 = DAT_003fd864 & uVar6 << 1;
        }
      } while ((bVar13 || bVar15) && (!bVar13 && bVar14));
      func_003E35DC(param_2,iVar12);
      iVar4 = func_001139F8(param_2);
      bVar2 = *(byte *)((int)piVar9 + 0xf);
      param_1[4] = iVar4;
      *param_1 = 0;
      param_1[1] = uVar3;
      param_1[3] = uVar7 & 0xffff | uVar6 << 0x10;
      *(byte *)(param_1 + 2) = bVar1;
      *(byte *)((int)param_1 + 9) = (byte)(((uint)bVar2 << 0x1c) >> 0x1e);
      return 1;
    }
  }
  return 0;
}

