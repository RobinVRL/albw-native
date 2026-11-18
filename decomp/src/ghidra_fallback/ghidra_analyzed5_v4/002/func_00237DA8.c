#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002353B8(int param_1,uint param_2,int *param_3,int *param_4);
extern int func_0023542C(int param_1,uint param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_00522E00(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined *DAT_002381a8;
extern int *DAT_002381ac;
extern int *DAT_002381b0;

// USA 00237DA8 <- EU 00237DA8 (Ghidra, non-matching)
// GLOBAL DAT_002381a8 undefined *
// GLOBAL DAT_002381ac int *
// GLOBAL DAT_002381b0 int *

void func_00237DA8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(uint *)(albw_frame + 0x0))
  #define local_2c (*(undefined2 *)(albw_frame + 0x4))
  iVar9 = *(int *)(param_1 + 0x478);
  if (0 < iVar9) {
    puVar2 = (undefined4 *)func_0010CEE0(iVar9 * 0x104 + 8,(int *)0x0,4);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x104;
      puVar2[1] = iVar9;
      iVar3 = func_00100118((int)(puVar2 + 2),DAT_002381a8,0x104,iVar9);
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x634) = iVar3;
      *(int *)(param_1 + 0x630) = iVar9;
    }
  }
  piVar1 = DAT_002381ac;
  piVar11 = *(int **)(param_1 + 0x480);
  uVar10 = 0xffffffff;
  piVar12 = piVar11 + *(int *)(param_1 + 0x478);
  if (piVar11 != piVar12) {
    do {
      uVar10 = uVar10 + 1;
      func_0023542C(param_1,uVar10);
      if (*DAT_002381b0 != 0) {
        uVar4 = func_00522E00(*DAT_002381b0);
        if (uVar10 < *(uint *)(param_1 + 0x630)) {
          iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x634);
        }
        func_004CE804(*(int *)(iVar9 + 8),uVar4 & 0xffff,0,0,in_s0);
      }
      piVar5 = (int *)func_0054D964(param_1,0);
      local_2c = 0x84;
      *(undefined2 *)(piVar5 + 10) = 0x84;
      func_002353B8(param_1,uVar10,(int *)(*piVar11 + 4),piVar5);
      iVar9 = param_1 + 0x630;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      if (*(uint *)(param_1 + 0x630) <= uVar10) {
        iVar9 = *(int *)(iVar9 + 4);
      }
      if (uVar10 < *(uint *)(param_1 + 0x64c)) {
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x654) + uVar10 * 4);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(iVar9 + 0xc) = uVar8;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004CEA18(*(int *)(iVar9 + 0xc),1,0);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004CEA18(*(int *)(iVar9 + 0xc),0,1);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      puVar6 = (uint *)(*(int *)(iVar9 + 0xc) + 0x164);
      *puVar6 = *puVar6 | 0x90000;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(int **)(iVar9 + 0x1c) = piVar5;
      puVar7 = (undefined4 *)func_0010BAB4(0x48);
      puVar2 = (undefined4 *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        puVar2 = func_004EDC9C(puVar7);
      }
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(undefined4 **)(iVar9 + 0x88) = puVar2;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(int **)(*(int *)(iVar9 + 0x88) + 0x18) = piVar5;
      local_30 = *(uint *)(param_1 + 0x2cc);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004EDAD0(*(int *)(iVar9 + 0x88),&local_30);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(undefined2 *)(*(int *)(iVar9 + 0x88) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar3 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x634);
      }
      *(int *)(*(int *)(iVar9 + 0x88) + 0x28) = iVar3 + 0xbc;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004A879C(*piVar1,*(int *)(iVar9 + 0x88),2);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(int **)(iVar9 + 0x30) = piVar5;
      local_30 = *(uint *)(param_1 + 0x2cc);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004EDEA0(iVar9 + 0x20,&local_30);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(uint *)(iVar9 + 0x58) = uVar10;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(undefined2 *)(iVar9 + 0x38) = *(undefined2 *)(param_1 + 0x54);
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      *(undefined1 *)(iVar9 + 0x41) = 0;
      *(undefined1 *)(iVar9 + 0x42) = 0;
      *(undefined2 *)(iVar9 + 0x50) = 0;
      if (uVar10 < *(uint *)(param_1 + 0x630)) {
        iVar9 = *(int *)(param_1 + 0x634) + uVar10 * 0x104;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x634);
      }
      func_004A8BFC(*piVar1,iVar9 + 0x20,0xd);
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar12);
  }
  return;
}

