#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014F0B0(int param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004CEAF0(int param_1);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern float *DAT_0039e5b8;
extern float *DAT_0039e5bc;
extern float DAT_0039e5c0;
extern float DAT_0039e5c4;
extern float DAT_0039e5c8;
extern undefined4 DAT_0039e5cc;
extern undefined4 DAT_0039e5d0;
extern float *DAT_0039e5d4;
extern float *DAT_0039e5d8;
extern float *DAT_0039e5dc;
extern float *DAT_0039e5e0;
extern float *DAT_0039e5e4;
extern float *DAT_0039e5e8;
extern int *DAT_0039e5ec;
extern float DAT_0039e5f0;
extern float DAT_0039e5f4;
extern float DAT_0039e5f8;
extern float DAT_0039e5fc;
extern undefined4 DAT_0039e600;
extern undefined4 DAT_0039e604;
extern uint DAT_0039e8e4;
extern undefined4 DAT_0039e8e8;
extern undefined4 DAT_0039e8ec;
extern float DAT_0039e8f0;
extern float DAT_0039e8f4;
extern float DAT_0039e8f8;
extern int *DAT_0039e8fc;

// USA 0039E1DC <- EU 0039E1B8 (Ghidra, non-matching)
// GLOBAL DAT_0039e5b8 float *
// GLOBAL DAT_0039e5bc float *
// GLOBAL DAT_0039e5c0 float
// GLOBAL DAT_0039e5c4 float
// GLOBAL DAT_0039e5c8 float
// GLOBAL DAT_0039e5cc undefined4
// GLOBAL DAT_0039e5d0 undefined4
// GLOBAL DAT_0039e5d4 float *
// GLOBAL DAT_0039e5d8 float *
// GLOBAL DAT_0039e5dc float *
// GLOBAL DAT_0039e5e0 float *
// GLOBAL DAT_0039e5e4 float *
// GLOBAL DAT_0039e5e8 float *
// GLOBAL DAT_0039e5ec int *
// GLOBAL DAT_0039e5f0 float
// GLOBAL DAT_0039e5f4 float
// GLOBAL DAT_0039e5f8 float
// GLOBAL DAT_0039e5fc float
// GLOBAL DAT_0039e600 undefined4
// GLOBAL DAT_0039e604 undefined4
// GLOBAL DAT_0039e8e4 uint
// GLOBAL DAT_0039e8e8 undefined4
// GLOBAL DAT_0039e8ec undefined4
// GLOBAL DAT_0039e8f0 float
// GLOBAL DAT_0039e8f4 float
// GLOBAL DAT_0039e8f8 float
// GLOBAL DAT_0039e8fc int *

void func_0039E1DC(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(float *)(albw_frame + 0x0))
  #define fStack_ec (*(float *)(albw_frame + 0x4))
  #define fStack_e8 (*(float *)(albw_frame + 0x8))
  #define fStack_e4 (*(float *)(albw_frame + 0xc))
  #define fStack_e0 (*(float *)(albw_frame + 0x10))
  #define fStack_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_d0 (*(float *)(albw_frame + 0x20))
  #define fStack_cc (*(float *)(albw_frame + 0x24))
  #define fStack_c8 (*(float *)(albw_frame + 0x28))
  #define pfStack_c4 (*(float * *)(albw_frame + 0x2c))
  #define pfStack_c0 (*(float * *)(albw_frame + 0x30))
  #define iStack_bc (*(int *)(albw_frame + 0x34))
  #define fStack_b8 (*(float *)(albw_frame + 0x38))
  #define fStack_b4 (*(float *)(albw_frame + 0x3c))
  #define fStack_b0 (*(float *)(albw_frame + 0x40))
  #define fStack_ac (*(float *)(albw_frame + 0x44))
  #define fStack_a8 (*(float *)(albw_frame + 0x48))
  #define pfStack_a4 (*(float * *)(albw_frame + 0x4c))
  #define apuStack_a0 ((undefined4 * *)(albw_frame + 0x50))
  #define local_98 (*(float *)(albw_frame + 0x58))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(float *)(albw_frame + 0x60))
  #define fStack_8c (*(float *)(albw_frame + 0x64))
  #define fStack_88 (*(float *)(albw_frame + 0x68))
  #define local_84 (*(float *)(albw_frame + 0x6c))
  #define fStack_80 (*(float *)(albw_frame + 0x70))
  #define fStack_7c (*(float *)(albw_frame + 0x74))
  #define afStack_78 ((float *)(albw_frame + 0x78))
  #define uStack_68 (*(uint *)(albw_frame + 0x88))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x90))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x94))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x98))
  #define fStack_54 (*(float *)(albw_frame + 0x9c))
  #define uStack_50 (*(undefined1 *)(albw_frame + 0xa0))
  #define uStack_4f (*(undefined1 *)(albw_frame + 0xa1))
  #define local_4c (*(float *)(albw_frame + 0xa4))
  #define local_48 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xac))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0xb0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xb4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0xb8))
  pfVar11 = DAT_0039e5b8;
  iVar2 = *(int *)(param_1 + 0x4d4);
  pfVar10 = (float *)(iVar2 + 0x80);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  local_4c = *(float *)(iVar2 + 0x88);
  local_48 = *(undefined4 *)(iVar2 + 0x98);
  local_44 = *(undefined4 *)(iVar2 + 0xa8);
  func_00115CA8(&local_f0,pfVar10,pfVar11);
  func_00115CA8(&fStack_cc,pfVar10,DAT_0039e5bc);
  local_84 = local_f0;
  fStack_80 = fStack_ec;
  fStack_7c = fStack_e8;
  iVar2 = *(int *)(param_1 + 0x438);
  fVar15 = *(float *)(*(int *)(param_1 + 0x4d4) + 0x158);
  bVar13 = iVar2 < 0;
  piVar12 = (int *)(param_1 + 0x438);
  bVar1 = iVar2 != 0;
  if (bVar1) {
    bVar13 = fVar15 < DAT_0039e5c8;
  }
  fVar16 = DAT_0039e5c4;
  fVar17 = DAT_0039e5c0;
  fVar14 = DAT_0039e5c8;
  if (((iVar2 == 0 || fVar15 == DAT_0039e5c8) ||
       bVar13 != (bVar1 && (NAN(fVar15) || NAN(DAT_0039e5c8)))) ||
     (*(char *)(param_1 + 0x410) == '\x02')) {
    iVar5 = 0;
  }
  else {
    func_00115C70(&local_98,&local_f0,&fStack_cc);
    func_00115C54(afStack_78,&local_f0,&fStack_cc);
    func_00115D70(afStack_78,afStack_78,fVar17);
    fStack_d0 = SQRT(local_98 * local_98 + local_90 * local_90) + fVar16;
    local_d4 = DAT_0039e5cc;
    local_d8 = fVar16;
    func_00115D70(&local_d8,&local_d8,fVar15);
    uVar3 = func_0068C690(&local_4c);
    func_00491624((float *)&pfStack_c0,0,uVar3,0);
    func_00151150(*(int *)(param_1 + 0x438),&local_d8);
    func_0015133C(*piVar12,&pfStack_c0);
    func_001512B4(*piVar12,afStack_78);
    iVar2 = *piVar12;
    iVar5 = 1;
  }
  func_00151148(iVar2,iVar5);
  switch(*(undefined4 *)(param_1 + 0x49c)) {
  default:
    break;
  case 1:
  case 3:
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x30) = **(undefined2 **)(param_1 + 0x3a0);
    break;
  case 2:
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x30) = 0x14;
    goto LAB_0039e3a8;
  case 4:
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x30) = 0x10;
LAB_0039e3a8:
    iVar2 = *(int *)(param_1 + 0x434);
    uVar6 = 0x108000;
    goto LAB_0039e3b0;
  }
  iVar2 = *(int *)(param_1 + 0x434);
  uVar6 = DAT_0039e5d0;
LAB_0039e3b0:
  *(undefined4 *)(iVar2 + 0x2c) = uVar6;
  iVar2 = *(int *)(param_1 + 0x49c);
  if (iVar2 == 4) {
    func_00115CA8(&local_f0,pfVar10,DAT_0039e5d4);
    func_00115CA8(&fStack_cc,pfVar10,DAT_0039e5d8);
  }
  else if (iVar2 == 3) {
    func_00115CA8(&local_f0,pfVar10,DAT_0039e5dc);
    func_00115CA8(&fStack_cc,pfVar10,DAT_0039e5e0);
  }
  else if (iVar2 == 0) {
    func_00115CA8(&local_f0,pfVar10,DAT_0039e5e4);
    func_00115CA8(&fStack_cc,pfVar10,DAT_0039e5e8);
  }
  iVar2 = func_0052FBA0(*DAT_0039e5ec + 0x3dbbc,*(uint *)(param_1 + 0x50));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  fVar15 = DAT_0039e5f4;
  if ((*(int *)(param_1 + 0x49c) != 3) && (fVar15 = DAT_0039e5f0, *(int *)(param_1 + 0x49c) == 2)) {
    fVar15 = DAT_0039e5f8;
  }
  if (iVar2 != 0) {
    fStack_ec = *(float *)(iVar2 + 0x3d4) + fVar15 * fVar17;
    fStack_80 = *(float *)(iVar2 + 0x3d4) + fVar16;
    fVar16 = DAT_0039e5fc;
    fStack_c8 = fStack_ec;
    func_00115C70(&fStack_e4,&local_84,(float *)(param_1 + 0x490));
    fStack_e0 = fVar14;
    if (fVar16 < SQRT(fStack_e4 * fStack_e4 + fStack_dc * fStack_dc)) {
      func_0068A3EC(&fStack_e4,fVar16);
      func_00115C54(&local_84,&fStack_e4,(float *)(param_1 + 0x490));
    }
  }
  uVar6 = DAT_0039e600;
  iVar5 = *(int *)(param_1 + 0x49c);
  iVar4 = *(int *)(param_1 + 0x434);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  if (iVar5 == 3) {
    fStack_b8 = local_f0;
    fStack_b4 = fStack_ec;
    fStack_b0 = fStack_e8;
    fStack_ac = fStack_cc;
    fStack_a8 = fStack_c8;
    pfStack_a4 = pfStack_c4;
    pfVar11 = (float *)func_00520FC0();
    func_0049EF80(pfVar11,&fStack_b8,&local_90);
    local_f0 = fStack_b8 + (fStack_ac - fStack_b8) * local_90;
    fStack_ec = fStack_b4 + (fStack_a8 - fStack_b4) * local_90;
    fStack_e8 = fStack_b0 + (ALBW_AS_F32(pfStack_a4) - fStack_b0) * local_90;
    iVar5 = *(int *)(param_1 + 0x434);
    uVar7 = *(undefined4 *)(param_1 + 0x43c);
    uVar8 = *(undefined4 *)(param_1 + 0x440);
    uVar9 = *(undefined4 *)(param_1 + 0x444);
    *(float *)(iVar5 + 0x58) = local_f0;
    *(float *)(iVar5 + 0x5c) = fStack_ec;
    *(float *)(iVar5 + 0x60) = fStack_e8;
    *(undefined4 *)(iVar5 + 100) = uVar7;
    *(undefined4 *)(iVar5 + 0x68) = uVar8;
    *(undefined4 *)(iVar5 + 0x6c) = uVar9;
    *(float *)(iVar5 + 0x70) = fVar15;
    func_00115C70(&fStack_e4,&local_f0,(float *)(param_1 + 0x43c));
    fStack_e0 = fVar14;
    func_00115DC8(&fStack_e4);
    if (iVar2 != 0) {
      func_00115C70((float *)apuStack_a0,&local_f0,(float *)(iVar2 + 0x3d0));
      func_00115DC8((float *)apuStack_a0);
      func_00115C54(&fStack_e4,&fStack_e4,(float *)apuStack_a0);
      func_00115DC8(&fStack_e4);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x434);
    *(float *)(iVar2 + 0x58) = local_f0;
    *(float *)(iVar2 + 0x5c) = fStack_ec;
    *(float *)(iVar2 + 0x60) = fStack_e8;
    *(float *)(iVar2 + 100) = fStack_cc;
    *(float *)(iVar2 + 0x68) = fStack_c8;
    *(float **)(iVar2 + 0x6c) = pfStack_c4;
    *(float *)(iVar2 + 0x70) = fVar15;
    uVar7 = DAT_0039e604;
    if (*(int *)(param_1 + 0x49c) != 1 && *(int *)(param_1 + 0x49c) != 2) {
      iVar2 = *(int *)(param_1 + 0x430);
      *(float *)(iVar2 + 0x24) = fVar14;
      *(float *)(iVar2 + 0x28) = fVar14;
      *(float *)(iVar2 + 0x2c) = fVar14;
      *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x34) = uVar7;
      goto code_r0x0039e5b4;
    }
    func_00115C70(&fStack_e4,&local_f0,&fStack_cc);
    func_00115DC8(&fStack_e4);
  }
  iVar2 = *(int *)(param_1 + 0x430);
  *(float *)(iVar2 + 0x24) = fStack_e4;
  *(float *)(iVar2 + 0x28) = fStack_e0;
  *(float *)(iVar2 + 0x2c) = fStack_dc;
  *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x34) = uVar6;
code_r0x0039e5b4:
  func_004356B4(*(int **)(param_1 + 0x434));
  func_004CEAF0(*(int *)(param_1 + 0x4d4));
  uVar3 = *(uint *)(param_1 + 0x49c);
  bVar13 = false;
  pfVar11 = (float *)(param_1 + 0x484);
  if ((uVar3 == 1 || uVar3 == 2) || uVar3 == 3) {
    *(undefined1 *)(param_1 + 0x509) = 0;
    *pfVar11 = fVar14;
    *(float *)(param_1 + 0x488) = fVar14;
    uStack_68 = DAT_0039e8e4;
    *(float *)(param_1 + 0x48c) = fVar14;
    uStack_68 = uStack_68 | uVar3 & 0xffff0000;
    afStack_78[0] = 0.0;
    afStack_78[1] = 0.0;
    afStack_78[2] = 0.0;
    afStack_78[3] = 0.0;
    uStack_64 = 0xff;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4f = 1;
    fStack_54 = fVar14;
    func_00110D44(&pfStack_c0,(byte *)afStack_78,0x2a);
    uStack_40 = *(undefined4 *)(param_1 + 0x448);
    uStack_3c = *(undefined4 *)(param_1 + 0x44c);
    uStack_38 = *(undefined4 *)(param_1 + 0x450);
    iStack_bc = param_1 + 0x50c;
    apuStack_a0[0] = &uStack_40;
    pfStack_a4 = &local_84;
    uStack_94 = DAT_0039e8ec;
    fStack_b4 = *(float *)(param_1 + 0x2cc);
    fStack_ac = DAT_0039e8f0;
    fStack_b0 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&fStack_b0 + 2)),*(undefined2 *)(param_1 + 0x54)));
    pfStack_c0 = pfVar11;
    local_90 = fVar14;
    fStack_8c = fVar14;
    fStack_88 = fVar14;
    func_0014F0B0(param_1);
    iVar2 = func_004A7620(*DAT_0039e8fc,(uint *)&pfStack_c0,3,DAT_0039e8f8,DAT_0039e8f4);
    if (iVar2 != 0) {
      bVar13 = true;
    }
  }
  *(float *)(param_1 + 0x448) = local_84;
  *(float *)(param_1 + 0x44c) = fStack_80;
  *(float *)(param_1 + 0x450) = fStack_7c;
  if (bVar13) {
    func_00115C54((float *)(param_1 + 0x448),(float *)(param_1 + 0x448),pfVar11);
  }
  *(float *)(param_1 + 0x43c) = local_f0;
  *(float *)(param_1 + 0x440) = fStack_ec;
  *(float *)(param_1 + 0x444) = fStack_e8;
  return;
}

