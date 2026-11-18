#include "ghidra_types.h"

extern int func_0026FB30(int param_1);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern undefined4 DAT_0016c9ac;

// USA 0016C710 <- EU 0016C710 (Ghidra, non-matching)
// GLOBAL DAT_0016c9ac undefined4

void func_0016C710(int param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  *(undefined1 *)(param_1 + 0xfa8) = 1;
  iVar3 = param_1;
  if (param_2 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0xf74);
  }
  if (param_2 == (int *)0x0 || iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x7c);
    if (iVar3 != 0) {
      iVar10 = 0;
      if (0 < iVar3) {
        do {
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x84) + iVar10 * 4);
          iVar10 = iVar10 + 1;
          *puVar5 = *(undefined4 *)(param_1 + 0x88);
          *(undefined4 **)(param_1 + 0x88) = puVar5;
        } while (iVar10 < iVar3);
      }
      func_0048C320((int *)(param_1 + 0x7c),0,iVar3);
    }
  }
  else {
    sVar1 = *(short *)(iVar3 + 4);
    uVar8 = 0;
    piVar9 = (int *)(param_1 + 0xdac);
    do {
      if (uVar8 < 6) {
        param_2 = (int *)(uVar8 * 7);
      }
      uVar7 = (int)(short)(sVar1 * 6) + uVar8;
      piVar4 = piVar9;
      if (uVar8 < 6) {
        piVar4 = piVar9 + (int)param_2 * 2;
      }
      piVar6 = (int *)(param_1 + 0x284);
      if (uVar7 < 0x33) {
        piVar6 = (int *)(param_1 + 0x284 + uVar7 * 0x38);
      }
      uVar8 = uVar8 + 1;
      *piVar4 = *piVar6;
      piVar4[1] = piVar6[1];
      piVar4[2] = piVar6[2];
      piVar4[3] = piVar6[3];
      piVar4[4] = piVar6[4];
      *(char *)(piVar4 + 5) = (char)piVar6[5];
      *(undefined1 *)((int)piVar4 + 0x15) = *(undefined1 *)((int)piVar6 + 0x15);
      *(undefined1 *)((int)piVar4 + 0x16) = *(undefined1 *)((int)piVar6 + 0x16);
      *(undefined1 *)((int)piVar4 + 0x17) = *(undefined1 *)((int)piVar6 + 0x17);
      param_2 = piVar6 + 10;
      iVar3 = piVar6[7];
      iVar10 = piVar6[8];
      iVar11 = piVar6[9];
      piVar4[6] = piVar6[6];
      piVar4[7] = iVar3;
      piVar4[8] = iVar10;
      piVar4[9] = iVar11;
      iVar3 = piVar6[0xb];
      iVar10 = piVar6[0xc];
      iVar11 = piVar6[0xd];
      piVar4[10] = *param_2;
      piVar4[0xb] = iVar3;
      piVar4[0xc] = iVar10;
      piVar4[0xd] = iVar11;
    } while ((int)uVar8 < 6);
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0x7c)) {
      do {
        if (uVar8 < *(uint *)(param_1 + 0x7c)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + uVar8 * 4);
        }
        else {
          iVar3 = 0;
        }
        *(byte *)(iVar3 + 0x50) = *(byte *)(iVar3 + 0x50) & 0xfe;
        for (uVar7 = 0; (iVar3 != 0 && ((int)uVar7 < 6)); uVar7 = uVar7 + 1) {
          piVar4 = piVar9;
          if (uVar7 < 6) {
            piVar4 = piVar9 + uVar7 * 0xe;
          }
          if (*piVar4 == iVar3) {
            uVar8 = uVar8 + 1;
            goto LAB_0016c898;
          }
        }
        uVar7 = uVar8;
        if ((int)(uVar8 + 1) <= *(int *)(param_1 + 0x7c)) {
          do {
            puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x84) + uVar7 * 4);
            uVar7 = uVar7 + 1;
            *puVar5 = *(undefined4 *)(param_1 + 0x88);
            *(undefined4 **)(param_1 + 0x88) = puVar5;
          } while ((int)uVar7 < (int)(uVar8 + 1));
        }
        func_0048C320((int *)(param_1 + 0x7c),uVar8,1);
LAB_0016c898:
      } while ((int)uVar8 < *(int *)(param_1 + 0x7c));
    }
  }
  uVar2 = DAT_0016c9ac;
  uVar8 = 0;
  do {
    puVar5 = (undefined4 *)(param_1 + 0x284);
    if (uVar8 < 0x33) {
      puVar5 = (undefined4 *)(param_1 + 0x284 + uVar8 * 0x38);
    }
    uVar8 = uVar8 + 1;
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined1 *)((int)puVar5 + 0x15) = 1;
    *(undefined1 *)((int)puVar5 + 0x16) = 1;
    *(undefined1 *)((int)puVar5 + 0x17) = 1;
    puVar5[2] = uVar2;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
  } while ((int)uVar8 < 0x30);
  uVar8 = 0;
  do {
    piVar9 = (int *)(param_1 + 0xf9c);
    if (uVar8 < 2) {
      piVar9 = (int *)(param_1 + 0xf9c) + uVar8;
    }
    func_0026FB30(*piVar9);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x98) + iVar3 * 4);
      (**(code **)*puVar5)(puVar5);
      iVar3 = iVar3 + 1;
      *puVar5 = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 **)(param_1 + 0x9c) = puVar5;
    } while (iVar3 < *(int *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

