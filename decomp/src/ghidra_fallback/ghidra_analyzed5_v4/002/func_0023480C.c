#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001139F8(int param_1);
extern int func_0011E4B4(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0011E5E0(undefined4 *param_1,int param_2,uint param_3);
extern int func_0011E668(int param_1);
extern int func_00563710(uint *param_1,uint *param_2,int param_3);
extern undefined *DAT_00234a3c;
extern undefined *DAT_00234a40;

// USA 0023480C <- EU 0023480C (Ghidra, non-matching)
// GLOBAL DAT_00234a3c undefined *
// GLOBAL DAT_00234a40 undefined *

void func_0023480C(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define auStack_b0 ((undefined4 *)(albw_frame + 0x0))
  #define local_a0 (*(undefined2 *)(albw_frame + 0x10))
  #define local_9e (*(undefined2 *)(albw_frame + 0x12))
  #define auStack_90 ((undefined4 *)(albw_frame + 0x20))
  #define local_40 (*(uint *)(albw_frame + 0x70))
  #define local_3c (*(int *)(albw_frame + 0x74))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define local_30 (*(int *)(albw_frame + 0x80))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x84))
  #define piStack_28 (*(int * *)(albw_frame + 0x88))
  uint uVar2;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  piStack_28 = param_4;
  uVar1 = func_0011E668(param_2);
  uVar2 = (uint)uVar1;
  if (uVar2 != 0) {
    iVar3 = func_0010CEE0(uVar2 * 0xc,param_4,4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = func_00100118(iVar3,DAT_00234a3c,0xc,uVar2);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0xb8) = iVar4;
      *(uint *)(param_1 + 0xb4) = uVar2;
    }
  }
  if (uVar2 != 0) {
    iVar3 = func_0010CEE0(uVar2 * 0xa8,param_4,4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = func_00100118(iVar3,DAT_00234a40,0xa8,uVar2);
    }
    if (iVar4 != 0) {
      *(int *)(param_1 + 0xc0) = iVar4;
      *(uint *)(param_1 + 0xbc) = uVar2;
    }
  }
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      if (uVar11 < *(uint *)(param_1 + 0xbc)) {
        piVar10 = (int *)(*(int *)(param_1 + 0xc0) + uVar11 * 0xa8);
      }
      else {
        piVar10 = *(int **)(param_1 + 0xc0);
      }
      func_0011E5E0(auStack_b0,local_30,(int)(short)uVar11);
      local_3c = func_0011E4B4(&local_40,auStack_90,local_30,(int)(short)uVar11);
      if (uVar11 < *(uint *)(param_1 + 0xb4)) {
        puVar12 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar11 * 0xc);
      }
      else {
        puVar12 = *(undefined4 **)(param_1 + 0xb8);
      }
      iVar4 = func_0010CEE0(0x100,param_4,4);
      if (iVar4 != 0) {
        puVar12[2] = iVar4;
        puVar12[1] = 0x40;
        *puVar12 = 0;
      }
      *(undefined1 *)(piVar10 + 7) = 0;
      iVar4 = func_001139F8(local_3c);
      *piVar10 = iVar4;
      *(undefined2 *)(piVar10 + 1) = local_a0;
      *(undefined2 *)((int)piVar10 + 6) = local_9e;
      *(undefined1 *)((int)piVar10 + 10) = 0;
      *(undefined1 *)((int)piVar10 + 9) = 0;
      *(char *)(piVar10 + 2) = (char)auStack_b0[3];
      if (1 < (int)local_40) {
        *(undefined1 *)(piVar10 + 3) = 3;
        *(undefined1 *)((int)piVar10 + 0xb) = 1;
        *(undefined1 *)(piVar10 + 5) = 0;
        *(char *)((int)piVar10 + 0x15) = (char)local_40;
      }
      iVar4 = *(int *)(param_1 + 0xb8);
      if (uVar11 < *(uint *)(param_1 + 0xb4)) {
        iVar4 = iVar4 + uVar11 * 0xc;
      }
      puVar7 = *(uint **)(iVar4 + 8);
      if (uVar11 < *(uint *)(param_1 + 0xbc)) {
        puVar5 = (uint *)(*(int *)(param_1 + 0xc0) + uVar11 * 0xa8);
      }
      else {
        puVar5 = *(uint **)(param_1 + 0xc0);
      }
      puVar5 = func_00563710(puVar5,puVar7,1);
      uVar8 = *(uint *)(param_1 + 0xb4);
      iVar4 = param_1 + 0xb4;
      uVar9 = uVar8;
      if (uVar11 < uVar8) {
        uVar9 = *(uint *)(param_1 + 0xb8);
        iVar4 = uVar11 * 3;
      }
      if (uVar11 < uVar8) {
        puVar6 = (uint *)(uVar9 + iVar4 * 4);
      }
      else {
        puVar6 = *(uint **)(iVar4 + 4);
      }
      uVar9 = (int)puVar5 - (int)puVar7 >> 2;
      uVar11 = uVar11 + 1;
      if (uVar9 <= puVar6[1]) {
        *puVar6 = uVar9;
      }
    } while ((int)uVar11 < (int)uVar2);
  }
  return;
}

