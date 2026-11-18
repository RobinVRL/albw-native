#include "ghidra_types.h"

extern int func_0051E300(int param_1);

// USA 0012ED94 <- EU 0012ED94 (Ghidra, non-matching)

void func_0012ED94(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  
  piVar4 = *(int **)(param_1 + 0xe18);
  piVar6 = piVar4 + *(int *)(param_1 + 0xe10);
  for (; piVar4 != piVar6; piVar4 = piVar4 + 1) {
    piVar8 = (int *)*piVar4;
    if (((piVar8[0x1a] & 0x18U) != 0) && (iVar2 = func_0051E300((int)piVar8), iVar2 != 0)) {
      (**(code **)(*piVar8 + 0xc))(piVar8);
    }
  }
  for (piVar4 = *(int **)(param_1 + 0xe18); piVar4 != piVar6; piVar4 = piVar4 + 1) {
    if ((((int *)*piVar4)[0x1a] & 0x18U) != 0) {
      (**(code **)(*(int *)*piVar4 + 8))((int *)*piVar4);
    }
  }
  puVar9 = (uint *)(param_1 + 0x11a8);
  uVar5 = 0;
  uVar10 = *puVar9;
  if (0 < (int)uVar10) {
    do {
      if (uVar5 < *puVar9) {
        puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x11b0) + uVar5 * 4);
      }
      else {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7[4] == 0) {
        bVar1 = *(byte *)(puVar7 + 0x1c);
        if (puVar7[1] == 0) {
          if ((bVar1 & 4) != 0) {
            piVar4 = (int *)*puVar7;
            goto joined_r0x0012eea0;
          }
        }
        else if (((bVar1 & 4) != 0) && ((*(byte *)(puVar7[1] + 0x70) & 4) == 0)) {
          piVar4 = (int *)*puVar7;
joined_r0x0012eea0:
          bVar3 = bVar1 & 2;
          if ((bVar1 & 2) != 0) {
            bVar3 = 1;
          }
          (**(code **)(*piVar4 + 0x30))(piVar4,param_1 + 0x6b4,bVar3);
        }
        *(byte *)(puVar7 + 0x1c) = *(byte *)(puVar7 + 0x1c) & 0xf9;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar10);
  }
  *puVar9 = 0;
  return;
}

