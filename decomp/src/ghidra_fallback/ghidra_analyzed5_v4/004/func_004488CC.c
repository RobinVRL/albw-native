#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);

// USA 004488CC <- EU 004488A4 (Ghidra, non-matching)

void func_004488CC(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  bVar10 = true;
  uVar8 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0x188);
    if (uVar8 < 4) {
      puVar2 = puVar2 + uVar8;
    }
    uVar3 = *puVar2;
    bVar9 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar9) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar9 || uVar3 != 0) {
      piVar4 = (int *)(param_1 + 0x188);
      if (uVar8 < 4) {
        piVar4 = piVar4 + uVar8;
      }
      cVar1 = *(char *)(*piVar4 + 0xd);
      bVar10 = cVar1 == '\x03';
      if (bVar10) {
        cVar1 = *(char *)(*piVar4 + 0xe);
      }
      if (bVar10 && cVar1 == '\x03') {
        piVar4 = (int *)(param_1 + 0x188);
        if (uVar8 < 4) {
          piVar4 = piVar4 + uVar8;
        }
        func_0012C718(*piVar4);
      }
      bVar10 = false;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  uVar8 = 0;
  do {
    uVar3 = *(uint *)(param_1 + 0x1ac);
    if (uVar8 < uVar3) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
    }
    else {
      iVar5 = 0;
    }
    if (*(char *)(iVar5 + 0x6c) != '\0') {
      if (uVar8 < uVar3) {
        uVar6 = *(uint *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
      }
      else {
        uVar6 = 0;
      }
      bVar9 = *(char *)(uVar6 + 0xd) == '\0';
      if (bVar9) {
        uVar6 = (uint)*(byte *)(uVar6 + 0xe);
      }
      if (!bVar9 || uVar6 != 0) {
        if (uVar8 < uVar3) {
          uVar6 = *(uint *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
        }
        else {
          uVar6 = 0;
        }
        bVar10 = *(char *)(uVar6 + 0xd) == '\x03';
        if (bVar10) {
          uVar6 = (uint)*(byte *)(uVar6 + 0xe);
        }
        if (bVar10 && uVar6 == 3) {
          if (uVar8 < uVar3) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar8 * 4);
          }
          else {
            iVar5 = 0;
          }
          func_0012C718(iVar5);
        }
        bVar10 = false;
      }
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x14);
  if (bVar10) {
    uVar8 = (uint)*(short *)(param_1 + 0xd6);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (-1 < (int)uVar8) {
      if (uVar8 < *(uint *)(iVar5 + 8)) {
        iVar7 = *(int *)(iVar5 + 0xc) + uVar8 * 0x38;
      }
      else {
        iVar7 = *(int *)(iVar5 + 0xc);
      }
      if (*(char *)(iVar7 + 0x35) != '\0') {
        return;
      }
    }
    uVar8 = (uint)*(short *)(param_1 + 0x106);
    if (-1 < (int)uVar8) {
      if (uVar8 < *(uint *)(iVar5 + 8)) {
        iVar7 = *(int *)(iVar5 + 0xc) + uVar8 * 0x38;
      }
      else {
        iVar7 = *(int *)(iVar5 + 0xc);
      }
      if (*(char *)(iVar7 + 0x35) != '\0') {
        return;
      }
    }
    uVar8 = (uint)*(short *)(param_1 + 0x11e);
    if (-1 < (int)uVar8) {
      if (uVar8 < *(uint *)(iVar5 + 8)) {
        iVar5 = *(int *)(iVar5 + 0xc) + uVar8 * 0x38;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0xc);
      }
      if (*(char *)(iVar5 + 0x35) != '\0') {
        return;
      }
    }
    func_0066CC58((undefined4 *)(param_1 + 0x158),10);
  }
  return;
}

