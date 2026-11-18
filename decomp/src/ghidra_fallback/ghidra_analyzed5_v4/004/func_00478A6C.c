#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0031BEC0(int param_1,int param_2);
extern int func_00421E00(int param_1,int param_2);

// USA 00478A6C <- EU 00478A44 (Ghidra, non-matching)

void func_00478A6C(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int in_r3;
  int *piVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 != param_3) {
    piVar9 = (int *)(param_1 + 0x168) + param_3;
    piVar5 = (int *)(param_1 + 0x168);
    if (param_3 < 0x14) {
      piVar5 = piVar9;
    }
    piVar10 = (int *)(param_1 + 0x168) + param_2;
    piVar4 = (int *)(param_1 + 0x168);
    if (param_2 < 0x14) {
      piVar4 = piVar10;
    }
    func_00421E00(*piVar4,*piVar5);
    piVar5 = (int *)(param_1 + 0x168);
    if (param_2 < 0x14) {
      piVar5 = piVar10;
    }
    cVar3 = *(char *)(*piVar5 + 0xe3);
    piVar5 = (int *)(param_1 + 0x168);
    if (param_3 < 0x14) {
      piVar5 = piVar9;
    }
    if (*(char *)(*piVar5 + 0xe3) == '\0') {
      piVar5 = (int *)(param_1 + 0x168);
      if (param_2 < 0x14) {
        piVar5 = piVar10;
      }
      iVar11 = *piVar5;
      *(undefined1 *)(iVar11 + 0xe3) = 0;
      cVar1 = *(char *)(iVar11 + 0xd);
      bVar12 = cVar1 == '\0';
      if (bVar12) {
        cVar1 = *(char *)(iVar11 + 0xe);
      }
      if ((!bVar12 || cVar1 != '\0') && (*(char *)(iVar11 + 0x3c) == '\0')) {
        func_002313DC(iVar11 + 200);
        func_0031BEC0(iVar11 + 0x78,0);
      }
    }
    else {
      piVar5 = (int *)(param_1 + 0x168);
      if (param_2 < 0x14) {
        piVar5 = piVar10;
      }
      iVar11 = *piVar5;
      *(undefined1 *)(iVar11 + 0xe3) = 1;
      cVar1 = *(char *)(iVar11 + 0xd);
      bVar12 = cVar1 == '\0';
      if (bVar12) {
        cVar1 = *(char *)(iVar11 + 0xe);
      }
      if ((!bVar12 || cVar1 != '\0') && (*(char *)(iVar11 + 0x3c) == '\0')) {
        func_00231524(iVar11 + 200);
        func_0031BEC0(iVar11 + 0x78,1);
      }
    }
    if (cVar3 == '\0') {
      piVar5 = (int *)(param_1 + 0x168);
      if (param_3 < 0x14) {
        piVar5 = piVar9;
      }
      iVar11 = *piVar5;
      *(undefined1 *)(iVar11 + 0xe3) = 0;
      cVar3 = *(char *)(iVar11 + 0xd);
      bVar12 = cVar3 == '\0';
      if (bVar12) {
        cVar3 = *(char *)(iVar11 + 0xe);
      }
      if ((!bVar12 || cVar3 != '\0') && (*(char *)(iVar11 + 0x3c) == '\0')) {
        func_002313DC(iVar11 + 200);
        func_0031BEC0(iVar11 + 0x78,0);
      }
    }
    else {
      piVar5 = (int *)(param_1 + 0x168);
      if (param_3 < 0x14) {
        piVar5 = piVar9;
      }
      iVar11 = *piVar5;
      *(undefined1 *)(iVar11 + 0xe3) = 1;
      cVar3 = *(char *)(iVar11 + 0xd);
      bVar12 = cVar3 == '\0';
      if (bVar12) {
        cVar3 = *(char *)(iVar11 + 0xe);
      }
      if ((!bVar12 || cVar3 != '\0') && (*(char *)(iVar11 + 0x3c) == '\0')) {
        func_00231524(iVar11 + 200);
        func_0031BEC0(iVar11 + 0x78,1);
      }
    }
    piVar5 = (int *)(param_1 + 0x168);
    if (param_2 < 0x14) {
      piVar5 = piVar10;
    }
    iVar11 = *piVar5;
    piVar5 = (int *)(param_1 + 0x168);
    if (param_3 < 0x14) {
      piVar5 = piVar9;
    }
    puVar8 = (undefined1 *)*piVar5;
    if (0x13 < param_2) {
      piVar10 = (int *)(param_1 + 0x168);
    }
    if (0x13 < param_3) {
      piVar9 = (int *)(param_1 + 0x168);
    }
    *piVar10 = (int)puVar8;
    *piVar9 = iVar11;
    uVar6 = *(uint *)(param_1 + 0x300);
    if (param_2 < uVar6) {
      puVar8 = *(undefined1 **)(param_1 + 0x304);
      puVar7 = puVar8 + param_2;
    }
    else {
      puVar7 = *(undefined1 **)(param_1 + 0x304);
    }
    if (param_3 < uVar6) {
      in_r3 = *(int *)(param_1 + 0x304);
    }
    else {
      puVar8 = *(undefined1 **)(param_1 + 0x304);
    }
    uVar2 = *puVar7;
    if (param_3 < uVar6) {
      puVar8 = (undefined1 *)(in_r3 + param_3);
    }
    puVar7 = *(undefined1 **)(param_1 + 0x304);
    if (param_2 < uVar6) {
      puVar7 = puVar7 + param_2;
    }
    *puVar7 = *puVar8;
    puVar8 = *(undefined1 **)(param_1 + 0x304);
    if (param_3 < *(uint *)(param_1 + 0x300)) {
      puVar8 = puVar8 + param_3;
    }
    *puVar8 = uVar2;
    return;
  }
  return;
}

