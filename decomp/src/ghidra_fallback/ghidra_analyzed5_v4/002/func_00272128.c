#include "ghidra_types.h"

extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int DAT_0027231c;

// USA 00272128 <- EU 00272150 (Ghidra, non-matching)
// GLOBAL DAT_0027231c int

undefined4 * func_00272128(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((param_3 != 0) && (uVar8 = 0, 0 < (int)uVar2)) {
    puVar1 = *(undefined4 **)(param_1 + 0x24);
    do {
      puVar3 = puVar1;
      if (uVar8 < uVar2) {
        puVar3 = puVar1 + uVar8 * 0x188;
      }
      if (((*(char *)((int)puVar3 + 0x581) == *(char *)(param_3 + 0x581)) &&
          (*(char *)(puVar3 + 0x15e) == *(char *)(param_3 + 0x578))) &&
         (*(short *)((int)puVar3 + 0x576) == *(short *)(param_3 + 0x576))) {
        iVar5 = puVar3[0x175];
        if (iVar5 == *(int *)(param_3 + 0x5d4)) {
          uVar9 = 0;
          if (iVar5 < 1) {
LAB_0027226c:
            if (uVar8 < uVar2) {
              puVar1 = puVar1 + uVar8 * 0x188;
            }
            return puVar1;
          }
          while (uVar4 = 0, 0 < iVar5) {
            while( true ) {
              psVar6 = (short *)puVar3[0x177];
              if (uVar9 < (uint)puVar3[0x175]) {
                psVar6 = (short *)puVar3[0x177] + uVar9;
              }
              psVar7 = *(short **)(param_3 + 0x5dc);
              if (uVar4 < *(uint *)(param_3 + 0x5d4)) {
                psVar7 = *(short **)(param_3 + 0x5dc) + uVar4;
              }
              if (*psVar6 == *psVar7) break;
              uVar4 = uVar4 + 1;
              if (iVar5 <= (int)uVar4) goto LAB_00272294;
            }
            uVar9 = uVar9 + 1;
            if (iVar5 <= (int)uVar9) goto LAB_0027226c;
          }
        }
      }
LAB_00272294:
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x20)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar2 * 0x620);
    *(uint *)(param_1 + 0x1c) = uVar2 + 1;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  (**(code **)*puVar1)(puVar1);
  *(undefined1 *)((int)puVar1 + 0x581) = 3;
  func_00689894((int)(puVar1 + 1),param_2,0xffffffff);
  *(short *)(DAT_0027231c + (int)puVar1) = (short)*(undefined4 *)(param_1 + 0x1c) + -1;
  return puVar1;
}

