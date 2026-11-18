#include "ghidra_types.h"

extern undefined4 DAT_003d31cc;

// USA 003D30B8 <- EU 003D3094 (Ghidra, non-matching)
// GLOBAL DAT_003d31cc undefined4

void func_003D30B8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 *puVar9;
  
  piVar8 = (int *)(param_1 + 0x24);
  puVar9 = (undefined2 *)(*(int *)(param_2 + -0xc) + param_2);
  puVar7 = (undefined2 *)((param_2 + -0x10) - (((uint)*(ushort *)(param_2 + -0xe) << 0x11) >> 0x19))
  ;
  iVar2 = *(int *)(param_2 + -8);
  iVar4 = *(int *)(param_2 + -4);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x2c) = iVar4;
  }
  else {
    *(int *)(iVar2 + 0xc) = iVar4;
  }
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    *(int *)(iVar4 + 8) = iVar2;
  }
  puVar6 = (undefined2 *)0x0;
  puVar3 = (undefined2 *)0x0;
  puVar5 = (undefined2 *)*piVar8;
  if ((undefined2 *)*piVar8 != (undefined2 *)0x0) {
    do {
      if (puVar7 <= puVar5) {
        if (puVar9 == puVar5) {
          puVar9 = (undefined2 *)((int)puVar5 + *(int *)(puVar5 + 2) + 0x10);
          iVar4 = *(int *)(puVar5 + 4);
          iVar2 = *(int *)(puVar5 + 6);
          if (iVar4 == 0) {
            *piVar8 = iVar2;
          }
          else {
            *(int *)(iVar4 + 0xc) = iVar2;
          }
          if (iVar2 == 0) {
            *(int *)(param_1 + 0x28) = iVar4;
          }
          else {
            *(int *)(iVar2 + 8) = iVar4;
          }
        }
        break;
      }
      puVar1 = (undefined4 *)(puVar5 + 6);
      puVar3 = puVar5;
      puVar5 = (undefined2 *)*puVar1;
    } while ((undefined2 *)*puVar1 != (undefined2 *)0x0);
    puVar6 = puVar3;
    if ((puVar3 != (undefined2 *)0x0) &&
       ((undefined2 *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10) == puVar7)) {
      puVar6 = *(undefined2 **)(puVar3 + 4);
      iVar2 = *(int *)(puVar3 + 6);
      if (puVar6 == (undefined2 *)0x0) {
        *piVar8 = iVar2;
      }
      else {
        *(int *)(puVar6 + 6) = iVar2;
      }
      puVar7 = puVar3;
      if (iVar2 == 0) {
        *(undefined2 **)(param_1 + 0x28) = puVar6;
      }
      else {
        *(undefined2 **)(iVar2 + 8) = puVar6;
      }
    }
  }
  if (0xf < (uint)((int)puVar9 - (int)puVar7)) {
    *puVar7 = (short)DAT_003d31cc;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 2) = ((int)puVar9 - (int)puVar7) - 0x10;
    *(undefined2 **)(puVar7 + 4) = puVar6;
    *(undefined4 *)(puVar7 + 6) = 0;
    if (puVar6 == (undefined2 *)0x0) {
      iVar2 = *piVar8;
      *piVar8 = (int)puVar7;
    }
    else {
      iVar2 = *(int *)(puVar6 + 6);
      *(undefined2 **)(puVar6 + 6) = puVar7;
    }
    *(int *)(puVar7 + 6) = iVar2;
    if (iVar2 == 0) {
      *(undefined2 **)(param_1 + 0x28) = puVar7;
    }
    else {
      *(undefined2 **)(iVar2 + 8) = puVar7;
    }
  }
  return;
}

