#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern int func_001E6720(int *param_1,undefined4 *param_2);
extern int func_001E6778(int *param_1,int param_2,uint param_3,undefined1 param_4,undefined1 param_5, float fparam_0);
extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern int func_002DD4B0(int param_1,int param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern float DAT_002dd88c;
extern int *DAT_002dd890;
extern int *DAT_002dd894;
extern uint *DAT_002dd898;
extern undefined4 *DAT_002dd89c;
extern undefined4 DAT_002dd8a0;
extern uint DAT_002dd8a4;
extern float DAT_002dd8a8;
extern float DAT_002dd8ac;
extern undefined4 *DAT_002dd8b0;
extern int *DAT_002dd8b4;

// USA 002DD5B0 <- EU 002DD58C (Ghidra, non-matching)
// GLOBAL DAT_002dd88c float
// GLOBAL DAT_002dd890 int *
// GLOBAL DAT_002dd894 int *
// GLOBAL DAT_002dd898 uint *
// GLOBAL DAT_002dd89c undefined4 *
// GLOBAL DAT_002dd8a0 undefined4
// GLOBAL DAT_002dd8a4 uint
// GLOBAL DAT_002dd8a8 float
// GLOBAL DAT_002dd8ac float
// GLOBAL DAT_002dd8b0 undefined4 *
// GLOBAL DAT_002dd8b4 int *

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_002DD5B0(int param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint extraout_r1;
  bool bVar8;
  float fVar9;
  float fparam_0;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  piVar3 = DAT_002dd890;
  fVar9 = DAT_002dd88c;
  pfVar5 = *(float **)(param_1 + 0x34);
  *pfVar5 = DAT_002dd88c;
  pfVar5[2] = fVar9;
  *(undefined4 *)(param_1 + 0x78) = 0;
  bVar4 = func_005822A0(*piVar3,0x8a,3);
  if ((!bVar4) || (bVar4 = func_005822A0(*piVar3,0x8b,3), bVar4)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  fparam_0 = DAT_002dd8ac;
  switch(param_2[1]) {
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
    if ((char)param_2[2] != '\x15') {
      *(bool *)(param_1 + 0x89) = (char)param_2[2] == '\x13';
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 4);
      bVar1 = *(byte *)(*(int *)(param_1 + 0x2c) + 0xcb);
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xcb) = 0;
      *(byte *)(param_1 + 0x8b) = bVar1 ^ 1;
      puVar6 = (undefined4 *)func_0052FBA0(*DAT_002dd894 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*DAT_002dd898 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002dd898), iVar7 != 0)) {
        *DAT_002dd89c = DAT_002dd8a0;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002dd89c), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        iVar7 = func_004D80EC(*(float **)(param_1 + 0x30),(float *)(puVar6 + 0xf4),
                              **(int **)(param_1 + 0x3c));
        uVar10 = func_00114608(DAT_002dd8a4,extraout_r1);
        *(uint *)(param_1 + 0x58) = (int)uVar10 + iVar7 & 0xe0000000;
      }
    }
    break;
  case 0x96:
    sVar2 = param_2[8];
    *(short *)(param_1 + 0x8c) = sVar2;
    *(short *)(param_1 + 0x8e) = param_2[9];
    *(undefined1 *)(param_1 + 0x8a) = 1;
    func_002DD4B0(param_1,(int)sVar2);
    if (*param_2 == 0x96) {
      *(undefined2 *)(param_1 + 0x90) = 0xffff;
    }
    else {
      *(short *)(param_1 + 0x90) = *param_2;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xcc) = 0;
    if (!bVar4) {
      return;
    }
    goto LAB_002dd720;
  case 0x97:
    *(float *)(param_1 + 0x94) = fVar9;
    func_0028C920(*(int *)(param_1 + 0x4c),0,DAT_002dd8b0,fparam_0,DAT_002dd8a8);
    objStack_30[0] = 0;
    func_001E6778(*(int **)(param_1 + 0x70),*(int *)(param_1 + 0x28),(uint)*(byte *)(param_2 + 10),
                  *(undefined1 *)((int)param_2 + 0x15),0,fparam_0);
    if (*(char *)(*DAT_002dd8b4 + 0x18) == '\x10') {
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6c6) = 1;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      func_001E6720(*(int **)(param_1 + 0x70),objStack_30);
      *(undefined4 *)(param_1 + 0xa4) = local_2c;
    }
    sVar2 = *param_2;
    if (sVar2 != 0x97) {
      if ((char)param_2[2] == '\x15') {
        *(short *)(param_1 + 0x90) = sVar2;
      }
      else if (sVar2 == 0x58) {
        *(undefined2 *)(param_1 + 0x90) = 0x91;
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 4);
        *(undefined1 *)(param_1 + 0x8b) = 1;
      }
      else {
        *(undefined2 *)(param_1 + 0x90) = 0;
      }
    }
    if (*param_2 == 0x96) {
      sVar2 = *(short *)(param_1 + 0x8c);
      bVar8 = sVar2 != 10;
      if (bVar8) {
        sVar2 = *(short *)(param_1 + 0x8e);
      }
      if (!bVar8 || sVar2 == 10) {
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xcc) != '\0') {
      *(undefined1 *)(param_1 + 0x98) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xcc) = 0;
    }
    if (fVar9 < *(float *)(param_2 + 0xc)) {
      *(float *)(param_1 + 0xa0) = *(float *)(param_2 + 0xc);
      *(undefined1 *)(param_1 + 0x98) = 2;
    }
    *(undefined2 *)(param_1 + 0x8c) = 0xffff;
    *(undefined2 *)(param_1 + 0x8e) = 0xffff;
    *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
    break;
  default:
    goto switchD_002dd608_default;
  }
  if (bVar4) {
LAB_002dd720:
    objStack_30[0] = (uint)ALBW_AS_U32(fVar9);
    func_001DC3C4(*(int *)(param_1 + 0x28),objStack_30,1);
  }
switchD_002dd608_default:
  return;
}

