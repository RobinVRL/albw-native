#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0011E694(int param_1);
extern int func_0011E6B0(int param_1,int param_2);
extern int func_0011E6EC(int param_1,int param_2);
extern int func_0011E728(int param_1,uint param_2);
extern int func_0011E7CC(int param_1,int param_2,undefined1 *param_3);
extern int func_0011E824(int param_1);
extern int func_0011E87C(int param_1);
extern int func_0011E9A4(int param_1,uint param_2);
extern int func_0011EA68(int param_1,uint param_2);
extern int func_0011EAE8(int param_1,uint param_2);
extern int func_0011EB24(int param_1);
extern int func_0011EED0(int param_1);
extern int func_0011F054(void *param_1,undefined4 param_2);
extern undefined4 *DAT_00490938;
extern undefined4 DAT_0049093c;
extern undefined4 DAT_00490940;
extern undefined *DAT_00490944;

// USA 00490724 <- EU 004906FC (Ghidra, non-matching)
// GLOBAL DAT_00490938 undefined4 *
// GLOBAL DAT_0049093c undefined4
// GLOBAL DAT_00490940 undefined4
// GLOBAL DAT_00490944 undefined *

undefined4 func_00490724(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_r3;
  uint uVar12;
  int iVar13;
  uint uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  uVar3 = DAT_00490940;
  uVar2 = DAT_0049093c;
  puVar7 = DAT_00490938;
  *DAT_00490938 = param_3;
  local_28 = in_r3;
  func_0011F054(uVar3,uVar2);
  piVar5 = func_0011EED0(param_2);
  *(int **)(param_1 + 4) = piVar5;
  func_0011F054(0,0);
  *puVar7 = 0;
  iVar6 = func_0011E824(*(int *)(param_1 + 4));
  if (0 < iVar6) {
    puVar7 = (undefined4 *)func_0010CEE0(iVar6 * 4 + 8,param_3,4);
    iVar8 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 4;
      puVar7[1] = iVar6;
      iVar8 = func_00100118((int)(puVar7 + 2),DAT_00490944,4,iVar6);
    }
    if (iVar8 != 0) {
      *(int *)(param_1 + 0xc) = iVar8;
      *(int *)(param_1 + 8) = iVar6;
    }
    iVar8 = *(int *)(param_1 + 8);
    iVar13 = *(int *)(param_1 + 0xc);
    iVar6 = 0;
    if (iVar8 != 0) {
      do {
        func_0011E7CC(*(int *)(param_1 + 4),iVar6,(undefined1 *)&local_28);
        puVar9 = (undefined1 *)(iVar13 + iVar6 * 4);
        puVar9[3] = (undefined1)local_28;
        puVar9[2] = (*(undefined1 *)((char *)&local_28 + 1));
        iVar6 = iVar6 + 1;
        puVar9[1] = (*(undefined1 *)((char *)&local_28 + 2));
        *puVar9 = (*(undefined1 *)((char *)&local_28 + 3));
      } while (iVar6 != iVar8);
    }
  }
  iVar6 = func_0011EB24(*(int *)(param_1 + 4));
  if (0 < iVar6) {
    iVar8 = func_0010CEE0(iVar6 << 4,param_3,4);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x14) = iVar8;
      *(int *)(param_1 + 0x10) = iVar6;
    }
    uVar14 = *(uint *)(param_1 + 0x10);
    iVar6 = *(int *)(param_1 + 0x14);
    uVar12 = 0;
    if (uVar14 != 0) {
      do {
        uVar10 = func_0011EAE8(*(int *)(param_1 + 4),uVar12);
        *(uint *)(iVar6 + uVar12 * 0x10) = uVar10;
        uVar10 = func_0011EA68(*(int *)(param_1 + 4),uVar12);
        *(uint *)(iVar6 + uVar12 * 0x10 + 4) = uVar10;
        uVar10 = func_0011E9A4(*(int *)(param_1 + 4),uVar12);
        if ((int)uVar10 < 0) {
          *(undefined4 *)(iVar6 + uVar12 * 0x10 + 8) = 0xffffffff;
        }
        else {
          *(uint *)(iVar6 + uVar12 * 0x10 + 8) = uVar10;
        }
        uVar10 = func_0011E728(*(int *)(param_1 + 4),uVar12);
        if ((int)uVar10 < 0) {
          *(undefined4 *)(iVar6 + uVar12 * 0x10 + 0xc) = 0xffffffff;
        }
        else {
          *(uint *)(iVar6 + uVar12 * 0x10 + 0xc) = uVar10;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar14);
    }
  }
  iVar6 = func_0011E694(*(int *)(param_1 + 4));
  if (0 < iVar6) {
    iVar8 = func_0010CEE0(iVar6 << 3,param_3,4);
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x1c) = iVar8;
      *(int *)(param_1 + 0x18) = iVar6;
    }
    iVar13 = *(int *)(param_1 + 0x18);
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar6 = 0;
    if (iVar13 != 0) {
      do {
        uVar4 = func_0011E6EC(*(int *)(param_1 + 4),iVar6);
        *(undefined1 *)(iVar8 + iVar6 * 8) = uVar4;
        iVar1 = iVar6 * 8;
        iVar11 = func_0011E6B0(*(int *)(param_1 + 4),iVar6);
        iVar6 = iVar6 + 1;
        *(int *)(iVar8 + iVar1 + 4) = iVar11;
      } while (iVar6 != iVar13);
    }
  }
  iVar6 = func_0011E87C(*(int *)(param_1 + 4));
  if (iVar6 < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar6;
  }
  return 1;
}

