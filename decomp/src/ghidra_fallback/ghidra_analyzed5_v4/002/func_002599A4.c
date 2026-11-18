#include "ghidra_types.h"

extern int func_0010BB50(undefined4 *param_1,undefined1 param_2);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004EAA3C(int param_1);
extern int func_004EAE34(int param_1);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int *DAT_00259c80;
extern int *DAT_00259c84;
extern int *DAT_00259c88;
extern int DAT_00259c8c;
extern int DAT_00259c90;

// USA 002599A4 <- EU 002599CC (Ghidra, non-matching)
// GLOBAL DAT_00259c80 int *
// GLOBAL DAT_00259c84 int *
// GLOBAL DAT_00259c88 int *
// GLOBAL DAT_00259c8c int
// GLOBAL DAT_00259c90 int

void func_002599A4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  iVar4 = *DAT_00259c80;
  cVar3 = *(char *)(iVar4 + 0x18);
  if (param_2 != 0) {
    param_1[0xc] = param_1[9];
    param_1[0xd] = param_1[10];
    param_1[0xe] = param_1[0xb];
    uVar8 = *(undefined4 *)(iVar4 + 0x1c);
    uVar11 = *(undefined4 *)(iVar4 + 0x20);
    param_1[9] = *(undefined4 *)(iVar4 + 0x18);
    param_1[10] = uVar8;
    param_1[0xb] = uVar11;
    param_1[0x10] = param_1[0xf];
    puVar5 = (undefined4 *)
             func_00582260(*DAT_00259c84,(int)*(char *)(iVar4 + 0x18),*(uint *)(iVar4 + 0x1c));
    param_1[0xf] = *puVar5;
  }
  piVar7 = DAT_00259c88;
  if (cVar3 == '\v') {
    func_0010BB50(param_1,5);
    goto LAB_00259c74;
  }
  if (cVar3 < '\f') {
    if (cVar3 == '\b') {
LAB_00259ae8:
      func_0010BB50(param_1,2);
      goto LAB_00259c74;
    }
    if (cVar3 == '\t') {
      func_0010BB50(param_1,3);
      goto LAB_00259c74;
    }
    if (cVar3 == '\n') {
      func_0010BB50(param_1,4);
      goto LAB_00259c74;
    }
  }
  else {
    if (cVar3 == '\f') {
      func_0010BB50(param_1,6);
      goto LAB_00259c74;
    }
    if (cVar3 == '&') goto LAB_00259ae8;
  }
  if (param_1[0xf] == 0x11) {
    func_004EAA3C(*DAT_00259c88);
    iVar4 = *piVar7;
    *(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) | 4;
  }
  else if (param_1[0xf] == 0x13) {
    func_004EAE34(*DAT_00259c88);
    iVar4 = *piVar7;
    *(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) | 4;
  }
  uVar6 = (uint)*(char *)(param_1 + 1);
  bVar1 = *(byte *)(DAT_00259c8c + param_1[0xf]);
  if (uVar6 != bVar1) {
    if (uVar6 != 0xffffffff) {
      iVar4 = param_1[8];
      pcVar9 = *(code **)(iVar4 + uVar6 * 8);
      if ((pcVar9 != (code *)0x0) ||
         (uVar12 = *(uint *)(iVar4 + uVar6 * 8 + 4), (uVar12 & 1) != 0 && uVar12 != 0)) {
        uVar6 = *(uint *)(iVar4 + uVar6 * 8 + 4);
        piVar7 = (int *)(param_1[5] + ((int)uVar6 >> 1));
        if ((uVar6 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *piVar7);
        }
        (*pcVar9)(piVar7,(uint)bVar1);
      }
    }
    uVar2 = *(undefined1 *)(param_1 + 1);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 0;
    *(undefined1 *)((int)param_1 + 5) = uVar2;
    if (param_1[4] != 0) {
      if ((uint)(int)*(char *)(param_1 + 1) < (uint)param_1[2]) {
        piVar7 = (int *)(param_1[3] + *(char *)(param_1 + 1) * 0x24);
      }
      else {
        piVar7 = (int *)param_1[3];
      }
      (**(code **)(*piVar7 + 8))(piVar7);
      local_24 = piVar7[1];
      local_28 = DAT_00259c90;
      func_0010BEB4(param_1[4],&local_28);
    }
    iVar4 = (int)*(char *)(param_1 + 1);
    iVar10 = param_1[6];
    pcVar9 = *(code **)(iVar10 + iVar4 * 8);
    if ((pcVar9 != (code *)0x0) ||
       ((uVar6 = *(uint *)(iVar10 + iVar4 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
      uVar6 = *(uint *)(iVar10 + iVar4 * 8 + 4);
      if ((uVar6 & 1) != 0) {
        pcVar9 = *(code **)(pcVar9 + *(int *)(param_1[5] + ((int)uVar6 >> 1)));
      }
      (*pcVar9)((int)(param_1[5]) + ((int)uVar6 >> 1));
    }
  }
LAB_00259c74:
  param_1[0x15] = 0;
  return;
}

