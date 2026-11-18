#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010EEE0(int param_1);
extern int func_00522FA4(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5);
extern undefined4 *DAT_00233820;
extern int DAT_00233824;

// USA 002335E0 <- EU 002335E0 (Ghidra, non-matching)
// GLOBAL DAT_00233820 undefined4 *
// GLOBAL DAT_00233824 int

uint func_002335E0(int param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int local_3c;
  
  uVar10 = 0xffffffff;
  if (param_3 == (int *)0x0) {
    local_3c = 1;
  }
  else {
    local_3c = func_0010983C(*DAT_00233820,param_3);
  }
  iVar6 = 0;
  piVar9 = param_3;
  do {
    uVar7 = 0;
    iVar1 = param_1 + 0x10 + iVar6 * DAT_00233824 * 4;
    iVar4 = *(int *)(iVar1 + 0x80);
    if (0 < iVar4) {
      do {
        iVar3 = *(int *)(iVar1 + 0x88);
        if (uVar7 < *(uint *)(iVar1 + 0x80)) {
          iVar3 = *(int *)(iVar1 + 0x88) + uVar7 * 0x70;
        }
        if (*(char *)(iVar3 + 0x6c) == '\0') {
          if (uVar7 != 0xffffffff) goto LAB_002336a8;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)*(uint *)(iVar1 + 0x80));
    }
    iVar3 = iVar4;
    if (iVar4 < *(int *)(iVar1 + 0x84)) {
      iVar3 = iVar4 + 1;
    }
    uVar7 = iVar3 - 1;
    if (iVar4 < *(int *)(iVar1 + 0x84)) {
      *(int *)(iVar1 + 0x80) = iVar3;
    }
LAB_002336a8:
    if (uVar7 < *(uint *)(iVar1 + 0x80)) {
      puVar5 = (uint *)(*(int *)(iVar1 + 0x88) + uVar7 * 0x70);
    }
    else {
      puVar5 = *(uint **)(iVar1 + 0x88);
    }
    func_0010C0B8((int)(puVar5 + 0x14));
    if (*(char *)((int)puVar5 + 0x6d) != '\0') {
      *(undefined1 *)((int)puVar5 + 0x6d) = 0;
      puVar5[0x13] = 0;
      if (puVar5[6] != 0) {
        puVar5[4] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
      }
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    func_00522FA4(*(int *)(param_2 + 0x50),puVar5 + 2,puVar5,piVar9,piVar9);
    uVar8 = puVar5[1];
    uVar2 = func_0010CEE0(uVar8,piVar9,4);
    if ((0 < (int)uVar8) && (uVar2 != 0)) {
      puVar5[6] = uVar2;
      puVar5[4] = 0;
      puVar5[5] = uVar8;
    }
    if (uVar8 <= puVar5[5]) {
      puVar5[4] = uVar8;
    }
    if (0 < (int)puVar5[4]) {
      uVar2 = puVar5[4] & 1;
      if (uVar2 == 1) {
        *(undefined1 *)puVar5[6] = 0;
      }
      uVar8 = (uint)(uVar2 == 1);
      if ((int)uVar2 < (int)puVar5[4]) {
        do {
          uVar2 = uVar2 + 2;
          *(undefined1 *)(puVar5[6] + uVar8) = 0;
          *(undefined1 *)(puVar5[6] + uVar8 + 1) = 0;
          uVar8 = uVar8 + 2;
        } while ((int)uVar2 < (int)puVar5[4]);
      }
    }
    *(undefined1 *)(puVar5 + 0x1b) = 1;
    puVar5[0x13] = param_2;
    *(undefined1 *)((int)puVar5 + 0x6d) = 0;
    func_0010EEE0((int)(puVar5 + 0x14));
    if ((int)uVar10 < 0) {
      uVar10 = uVar7;
    }
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      if (local_3c != 1) {
        func_0010983C(*DAT_00233820,local_3c);
      }
      return uVar10;
    }
    piVar9 = param_3;
    if (iVar6 != 0) {
      piVar9 = param_4;
    }
  } while( true );
}

