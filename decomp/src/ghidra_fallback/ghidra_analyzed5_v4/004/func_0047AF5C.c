#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_00479214(int param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_0047b470;
extern int DAT_0047b474;
extern int DAT_0047b478;
extern int *DAT_0047b48c;
extern float DAT_0047b490;
extern char s_P_Memori__02d_0047b47c[];
extern char s_cf_0047b47c[];

// USA 0047AF5C <- EU 0047AF34 (Ghidra, non-matching)
// GLOBAL DAT_0047b470 int *
// GLOBAL DAT_0047b474 int
// GLOBAL DAT_0047b478 int
// GLOBAL DAT_0047b48c int *
// GLOBAL DAT_0047b490 float
// GLOBAL s_cf_0047b47c string

void func_0047AF5C(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 in_r3;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((float *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(undefined1 * *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 ((undefined1 *)(albw_frame + 0x28))
  #define uStack_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined1 * *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  uVar2 = 0;
  if (*(char *)(param_1 + 0x30f) != '\0') {
    return;
  }
  do {
    if (uVar2 < *(uint *)(param_1 + 0x300)) {
      pbVar5 = (byte *)(*(int *)(param_1 + 0x304) + uVar2);
    }
    else {
      pbVar5 = *(byte **)(param_1 + 0x304);
    }
    if (*pbVar5 < 0x14) {
      puVar6 = (undefined4 *)(param_1 + 0x168);
      if (uVar2 < 0x14) {
        puVar6 = puVar6 + uVar2;
      }
      *(undefined4 *)(param_1 + 0x118 + (uint)*pbVar5 * 4) = *puVar6;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x14);
  uVar2 = 0;
  while( true ) {
    piVar7 = (int *)(param_1 + 0x118);
    if (uVar2 < 0x14) {
      piVar7 = piVar7 + uVar2;
    }
    if (*piVar7 == 0) break;
    uVar2 = uVar2 + 1;
    if (0x13 < (int)uVar2) goto LAB_0047b00c;
  }
  uVar2 = 0;
  do {
    if (uVar2 < *(uint *)(param_1 + 0x300)) {
      puVar8 = (undefined1 *)(*(int *)(param_1 + 0x304) + uVar2);
    }
    else {
      puVar8 = *(undefined1 **)(param_1 + 0x304);
    }
    puVar6 = (undefined4 *)(param_1 + 0x168);
    *puVar8 = (char)uVar2;
    if (uVar2 < 0x14) {
      puVar6 = puVar6 + uVar2;
    }
    puVar9 = (undefined4 *)(param_1 + 0x118);
    if (uVar2 < 0x14) {
      puVar9 = puVar9 + uVar2;
    }
    uVar2 = uVar2 + 1;
    *puVar9 = *puVar6;
  } while ((int)uVar2 < 0x14);
LAB_0047b00c:
  iVar10 = *(int *)(param_1 + 0x120);
  func_0031B6A0(iVar10 + 0x78,2,0);
  *(undefined1 *)(iVar10 + 0xe0) = 2;
  iVar10 = *(int *)(param_1 + 300);
  func_0031B6A0(iVar10 + 0x78,3,0);
  *(undefined1 *)(iVar10 + 0xe0) = 3;
  iVar10 = *(int *)(param_1 + 0x11c);
  func_0031B6A0(iVar10 + 0x78,6,0);
  *(undefined1 *)(iVar10 + 0xe0) = 6;
  iVar10 = *(int *)(param_1 + 0x128);
  func_0031B6A0(iVar10 + 0x78,0xb,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0xb;
  iVar10 = *(int *)(param_1 + 0x118);
  func_0031B6A0(iVar10 + 0x78,0xc,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0xc;
  iVar10 = *(int *)(param_1 + 0x138);
  func_0031B6A0(iVar10 + 0x78,0xd,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0xd;
  iVar10 = *(int *)(param_1 + 0x13c);
  func_0031B6A0(iVar10 + 0x78,0xe,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0xe;
  iVar10 = *(int *)(param_1 + 0x124);
  func_0031B6A0(iVar10 + 0x78,4,0);
  *(undefined1 *)(iVar10 + 0xe0) = 4;
  iVar10 = *(int *)(param_1 + 0x140);
  func_0031B6A0(iVar10 + 0x78,8,0);
  *(undefined1 *)(iVar10 + 0xe0) = 8;
  iVar10 = *(int *)(param_1 + 0x144);
  func_0031B6A0(iVar10 + 0x78,9,0);
  *(undefined1 *)(iVar10 + 0xe0) = 9;
  iVar10 = *(int *)(param_1 + 0x134);
  func_0031B6A0(iVar10 + 0x78,7,0);
  *(undefined1 *)(iVar10 + 0xe0) = 7;
  iVar10 = *(int *)(param_1 + 0x130);
  func_0031B6A0(iVar10 + 0x78,10,0);
  *(undefined1 *)(iVar10 + 0xe0) = 10;
  iVar10 = *(int *)(param_1 + 0x160);
  func_0031B6A0(iVar10 + 0x78,0x10,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x10;
  iVar10 = *(int *)(param_1 + 0x15c);
  func_0031B6A0(iVar10 + 0x78,0x11,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x11;
  iVar10 = *(int *)(param_1 + 0x148);
  func_0031B6A0(iVar10 + 0x78,0x12,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x12;
  iVar10 = *(int *)(param_1 + 0x14c);
  func_0031B6A0(iVar10 + 0x78,0x13,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x13;
  iVar10 = *(int *)(param_1 + 0x150);
  func_0031B6A0(iVar10 + 0x78,0x14,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x14;
  iVar10 = *(int *)(param_1 + 0x154);
  func_0031B6A0(iVar10 + 0x78,0x15,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x15;
  iVar10 = *(int *)(param_1 + 0x158);
  func_0031B6A0(iVar10 + 0x78,0x16,0);
  *(undefined1 *)(iVar10 + 0xe0) = 0x16;
  iVar10 = *(int *)(param_1 + 0x164);
  func_0031B6A0(iVar10 + 0x78,5,0);
  *(undefined1 *)(iVar10 + 0xe0) = 5;
  func_00479214(param_1,1);
  piVar7 = DAT_0047b470;
  if ((*DAT_0047b470 == 0) || (iVar10 = func_0055696C(*DAT_0047b470,0x27), iVar10 == 0)) {
    if (*(char *)(*(int *)(param_1 + 500) + 0x3c) == '\0') {
      func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\f');
    }
  }
  else if (*(char *)(*(int *)(param_1 + 500) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\0');
  }
  if ((*piVar7 == 0) || (iVar10 = func_0055696C(*piVar7,0xc), iVar10 == 0)) {
    if (*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) == '\0') {
      func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\f');
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xf7) != '\0') {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\0');
  }
  iVar10 = DAT_0047b474;
  local_40 = local_38;
  uStack_3c = 0x10;
  uStack_29 = 0;
  local_38[0] = 0;
  uVar2 = 0;
  local_44 = DAT_0047b478;
  do {
    func_004994B0((int)&local_44,s_P_Memori__02d_0047b47c,uVar2,in_r3);
    (**(code **)(local_44 + 8))(&local_44);
    local_28 = iVar10;
    local_24 = local_40;
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),&local_28);
    fVar11 = DAT_0047b490;
    if (uVar2 < 5) {
      pfVar4 = local_58 + uVar2;
    }
    else {
      pfVar4 = local_58;
    }
    uVar2 = uVar2 + 1;
    *pfVar4 = *(float *)(iVar3 + 0x1c);
  } while ((int)uVar2 < 5);
  iVar3 = *(int *)(param_1 + 0x208);
  uVar1 = *(undefined1 *)(*DAT_0047b48c + 0x23a);
  *(float *)(iVar3 + 0x54) = local_58[0];
  *(float *)(iVar3 + 0x58) = local_58[1];
  *(float *)(iVar3 + 0x5c) = local_58[2];
  *(float *)(iVar3 + 0x60) = local_58[3];
  *(float *)(iVar3 + 100) = local_58[4];
  *(float *)(iVar3 + 0x6c) = (local_58[4] - local_58[0]) * fVar11;
  *(undefined1 *)(iVar3 + 0x78) = uVar1;
  iVar10 = *(int *)(**(int **)(iVar3 + 0x1c) + 0x10);
  local_20 = *(undefined4 *)(iVar10 + 0x24);
  local_24 = *(undefined1 **)(iVar10 + 0x20);
  local_28 = *(int *)(iVar3 + (uint)*(byte *)(iVar3 + 0x78) * 4 + 0x54);
  func_003FFE6C(*(int *)(**(int **)(iVar3 + 0x1c) + 0x10),&local_28);
  *(byte *)(*(int *)(iVar3 + 0x1c) + 0x70) = *(byte *)(*(int *)(iVar3 + 0x1c) + 0x70) | 2;
  fVar11 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(*(int *)(param_1 + 0x208) + 0x78),
                             (byte)(in_fpscr >> 0x15) & 3);
  func_002316CC(param_1 + 0x1dc,fVar11);
  *(undefined1 *)(param_1 + 0x30f) = 1;
  return;
}

