#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0016B8DC(int param_1,undefined4 param_2,int param_3);
extern int func_0016E9D4(int param_1,undefined4 *param_2);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_002769DC(int param_1,int param_2,int param_3);
extern int func_00279BDC(uint *param_1,short *param_2,float *param_3);
extern int func_0027A3A8(int param_1);
extern int func_0027AE1C(int param_1);
extern int func_0027AE98(short *param_1,float *param_2);
extern int func_0027B7B4(char *param_1);
extern int func_00394834(int param_1,int param_2,uint *param_3);
extern int func_0048C258(int *param_1,undefined *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A872C(int param_1,int param_2);
extern int func_004AD1F4(int param_1,int param_2,int param_3);
extern int *DAT_002765a0;
extern int DAT_002765a4;
extern uint DAT_002765a8;
extern int *DAT_002765cc;
extern int *DAT_002765d0;
extern int DAT_002765d4;
extern int *DAT_002765d8;
extern undefined *DAT_002765dc;
extern float DAT_002765e0;
extern int *DAT_00276684;
extern int *DAT_00276688;
extern char s_Byaml__s_stage_byaml_002765ac[];
extern char s_World_002765c4[];
extern char s_cf_002765ac[];

// USA 002761A0 <- EU 002761C8 (Ghidra, non-matching)
// GLOBAL DAT_002765a0 int *
// GLOBAL DAT_002765a4 int
// GLOBAL DAT_002765a8 uint
// GLOBAL DAT_002765cc int *
// GLOBAL DAT_002765d0 int *
// GLOBAL DAT_002765d4 int
// GLOBAL DAT_002765d8 int *
// GLOBAL DAT_002765dc undefined *
// GLOBAL DAT_002765e0 float
// GLOBAL DAT_00276684 int *
// GLOBAL DAT_00276688 int *
// GLOBAL s_cf_002765ac string
// GLOBAL s_World_002765c4 string

undefined4 func_002761A0(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x170];
  #define local_170 (*(uint *)(albw_frame + 0x0))
  #define local_16c (*(undefined1 * *)(albw_frame + 0x4))
  #define local_168 (*(int *)(albw_frame + 0x8))
  #define local_164 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_65 (*(undefined1 *)(albw_frame + 0x10b))
  #define local_64 (*(int *)(albw_frame + 0x10c))
  #define local_60 (*(undefined1 * *)(albw_frame + 0x110))
  #define local_5c (*(undefined4 *)(albw_frame + 0x114))
  #define local_58 (*(undefined4 *)(albw_frame + 0x118))
  #define local_54 (*(undefined4 *)(albw_frame + 0x11c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x120))
  #define local_4c (*(undefined4 *)(albw_frame + 0x124))
  #define local_48 (*(undefined4 *)(albw_frame + 0x128))
  #define local_44 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x130))
  #define local_3c (*(undefined4 *)(albw_frame + 0x134))
  #define local_38 (*(int *)(albw_frame + 0x138))
  #define local_34 (*(char * *)(albw_frame + 0x13c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x140))
  #define local_2f (*(undefined1 *)(albw_frame + 0x141))
  #define local_2e (*(undefined1 *)(albw_frame + 0x142))
  #define local_2d (*(undefined1 *)(albw_frame + 0x143))
  #define local_2c (*(undefined1 *)(albw_frame + 0x144))
  #define local_28 (*(uint * *)(albw_frame + 0x148))
  iVar4 = DAT_002765a4;
  piVar10 = DAT_002765a0;
  iVar2 = *DAT_002765a0;
  local_16c = local_164;
  local_168 = 0x100;
  uStack_65 = 0;
  local_164[0] = 0;
  local_170 = DAT_002765a8;
  piVar9 = (int *)(iVar2 + 0x5b58);
  (**(code **)(*piVar9 + 8))(piVar9);
  func_004994B0((int)&local_170,s_Byaml__s_stage_byaml_002765ac,*(uint *)(iVar2 + 0x5b5c),param_4);
  local_64 = iVar4;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x20;
  uStack_50 = 0;
  local_48 = 0;
  local_34 = s_World_002765c4;
  local_44 = 0;
  local_30 = 7;
  local_2d = 0;
  local_40 = 0;
  local_2f = 0xff;
  local_4c = 0;
  local_38 = iVar4;
  local_60 = local_16c;
  local_2c = 1;
  local_3c = 0;
  local_2e = 0xf;
  puVar3 = func_001E1EDC(*DAT_002765cc,&local_64);
  local_28 = (uint *)(param_1 + 0x15b4c);
  func_00279BDC(local_28,(short *)puVar3[5],(float *)(*piVar10 + 0x5b44));
  func_0027AE98((short *)puVar3[5],(float *)(*piVar10 + 0x5b44));
  pcVar11 = (char *)(*DAT_002765d0 + 0x18);
  func_0027B7B4(pcVar11);
  func_0027AE1C((int)*pcVar11);
  iVar2 = 4;
  iVar4 = func_0010CEE0(0xb200,(int *)0x0,4);
  if (iVar4 != 0) {
    iVar2 = 0;
    iVar12 = 0x3f;
    *(int *)(param_1 + 0x628) = iVar4;
    do {
      iVar12 = iVar12 + -1;
      *(int *)(iVar4 + iVar2 * 4) = iVar4 + (iVar2 + 0xb1) * 4;
      iVar2 = iVar2 + 0xb1;
    } while (iVar12 != 0);
    *(undefined4 *)(iVar4 + 0xae3c) = 0;
    *(int *)(param_1 + 0x62c) = iVar4;
    iVar2 = iVar4 + 0xb100;
    func_0010B3EC((undefined4 *)(param_1 + 0x61c),0x40,iVar2);
  }
  iVar4 = param_1 + 0x183c;
  if (*param_2 < 0) {
LAB_00276474:
    iVar12 = *DAT_002765a0;
    sVar1 = (short)*(undefined4 *)(iVar12 + 0x771c);
    iVar6 = (int)sVar1;
    *(short *)(param_1 + 0x15b40) = sVar1;
    if (-1 < *(int *)(iVar12 + 0x771c)) {
      iVar2 = 0;
      func_002769DC(param_1,iVar6,0);
      uVar7 = extraout_r1_00;
      goto LAB_002764c0;
    }
  }
  else {
    iVar12 = param_1 + 0xe3c;
    iVar2 = -1;
    if (*(short *)(iVar12 + *param_2 * 0x28 + 0x20) >> 0x1f == -1) {
      iVar6 = 0;
      iVar2 = 0x40;
      iVar8 = 0;
      do {
        if (-1 < *(short *)(iVar12 + iVar6 * 0x28 + 0x20)) {
          *param_2 = iVar8;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar6 != 0x40);
      if (*param_2 < 0) goto LAB_00276474;
    }
    sVar1 = *(short *)(iVar12 + *param_2 * 0x28 + 0x1e);
    iVar6 = (int)sVar1;
    *(short *)(param_1 + 0x15b40) = sVar1;
    *(short *)(param_1 + 0x15b42) = sVar1;
    if (-1 < iVar6) {
      iVar2 = 0;
      func_002769DC(param_1,iVar6,0);
      iVar12 = (int)*pcVar11;
      uVar7 = iVar12 - 9;
      if (((uVar7 < 0xd) && (iVar12 != 0xb)) && (iVar12 != 0x11 && iVar12 != 0x14)) {
        iVar2 = 0;
        func_004AD1F4(*DAT_002765a0,
                      (int)*(short *)(iVar4 + (int)*(short *)(param_1 + 0x15b40) *
                                              (int)(short)DAT_002765d4 * 4 + 0x48),0);
        uVar7 = extraout_r1;
      }
      goto LAB_002764c0;
    }
  }
  func_0027A3A8(iVar6);
  uVar7 = extraout_r1_01;
LAB_002764c0:
  func_0016B8DC(*DAT_002765d8,uVar7,iVar2);
  local_170 = 0;
  local_16c = (undefined1 *)0x0;
  local_168 = 0;
  func_0010B3EC(&local_170,0x40,(int)local_164);
  piVar10 = (int *)(param_1 + 0x15b3c);
  iVar2 = 0;
  if (0 < *piVar10) {
    do {
      if ((int)local_170 < (int)local_16c) {
        *(int *)(local_168 + local_170 * 4) = iVar4 + iVar2 * DAT_002765d4 * 4;
        local_170 = local_170 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar10);
  }
  func_0048C258((int *)&local_170,DAT_002765dc);
  cVar5 = '\0';
  uVar7 = 0;
  fVar13 = DAT_002765e0;
  if (0 < (int)local_170) {
    do {
      if (uVar7 < local_170) {
        iVar2 = *(int *)(local_168 + uVar7 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(float *)(iVar2 + 8) == fVar13) {
        if (uVar7 < local_170) {
          iVar2 = *(int *)(local_168 + uVar7 * 4);
        }
        else {
          iVar2 = 0;
        }
        *(char *)(iVar2 + 0x3fd) = cVar5;
      }
      else {
        if (uVar7 < local_170) {
          iVar2 = *(int *)(local_168 + uVar7 * 4);
        }
        else {
          iVar2 = 0;
        }
        *(char *)(iVar2 + 0x3fd) = cVar5;
        if (uVar7 < local_170) {
          iVar2 = *(int *)(local_168 + uVar7 * 4);
        }
        else {
          iVar2 = 0;
        }
        cVar5 = cVar5 + '\x02';
        fVar13 = *(float *)(iVar2 + 8);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_170);
  }
  piVar9 = DAT_00276684;
  iVar2 = 0;
  if (0 < *piVar10) {
    do {
      iVar12 = iVar4 + iVar2 * DAT_002765d4 * 4;
      puVar3 = (undefined4 *)func_00394834(*piVar9,iVar12,local_28);
      func_0016E9D4(iVar12,puVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar10);
  }
  return func_004A872C(*DAT_00276688,param_1);
}

