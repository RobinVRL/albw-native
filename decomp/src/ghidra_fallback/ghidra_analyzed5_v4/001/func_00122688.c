#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_0048B57C(float *param_1,float *param_2,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491B3C(float *param_1,float *param_2);
extern float func_005909A0(float fparam_0);
extern float func_00590D4C(float fparam_0);
extern float func_00590DEC(undefined4 param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1);
extern float func_0059163C(float fparam_0);
extern void func_00690C88(int param_1,undefined4 *param_2,float fparam_0);
extern int func_006911F4(int param_1,undefined4 *param_2,float fparam_0);
extern int func_00691234(int param_1,int param_2,float fparam_0);
extern int *DAT_0012298c;
extern float DAT_00122990;
extern float DAT_00122994;
extern float DAT_00122998;
extern float DAT_0012299c;
extern float DAT_001229a0;
extern float *DAT_001229a4;
extern int DAT_00122c20;
extern int DAT_00122c24;
extern int DAT_00122c28;
extern int DAT_00122c2c;
extern float DAT_00122c30;
extern float DAT_00122c34;
extern float DAT_00122c38;
extern float DAT_00122c3c;

// USA 00122688 <- EU 00122688 (Ghidra, non-matching)
// GLOBAL DAT_0012298c int *
// GLOBAL DAT_00122990 float
// GLOBAL DAT_00122994 float
// GLOBAL DAT_00122998 float
// GLOBAL DAT_0012299c float
// GLOBAL DAT_001229a0 float
// GLOBAL DAT_001229a4 float *
// GLOBAL DAT_00122c20 int
// GLOBAL DAT_00122c24 int
// GLOBAL DAT_00122c28 int
// GLOBAL DAT_00122c2c int
// GLOBAL DAT_00122c30 float
// GLOBAL DAT_00122c34 float
// GLOBAL DAT_00122c38 float
// GLOBAL DAT_00122c3c float

void func_00122688(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 ((float *)(albw_frame + 0x18))
  #define local_98 (*(float *)(albw_frame + 0x48))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define auStack_8c ((undefined4 *)(albw_frame + 0x54))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define fStack_64 (*(float *)(albw_frame + 0x7c))
  #define local_60 (*(float *)(albw_frame + 0x80))
  #define local_5c (*(float *)(albw_frame + 0x84))
  #define local_58 (*(float *)(albw_frame + 0x88))
  #define local_54 (*(float *)(albw_frame + 0x8c))
  #define local_50 (*(float *)(albw_frame + 0x90))
  #define local_4c (*(float *)(albw_frame + 0x94))
  #define local_48 (*(float *)(albw_frame + 0x98))
  #define local_44 (*(float *)(albw_frame + 0x9c))
  #define local_40 (*(float *)(albw_frame + 0xa0))
  #define local_3c (*(float *)(albw_frame + 0xa4))
  #define local_38 ((float *)(albw_frame + 0xa8))
  piVar4 = DAT_0012298c;
  iVar7 = *param_1;
  if (iVar7 != 0) {
    uVar5 = (uint)*(byte *)(iVar7 + 4);
    fVar16 = ALBW_AS_F32(param_1[0x23]);
    fVar13 = DAT_00122990;
    fVar15 = DAT_00122994;
    if ((*(byte *)(iVar7 + 4) & 1) == 0) {
      uVar8 = in_fpscr & 0xfffffff | (uint)(fVar16 <= *(float *)(iVar7 + 8)) << 0x1d;
      fVar9 = *(float *)(iVar7 + 8);
      if ((SUB41(uVar8 >> 0x1d,0)) &&
         (uVar8 = in_fpscr & 0xfffffff | (uint)(DAT_00122990 <= fVar16) << 0x1d, fVar9 = fVar16,
         !SUB41(uVar8 >> 0x1d,0))) {
        fVar9 = DAT_00122990;
      }
    }
    else {
      uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00122990 < fVar16) << 0x1f |
              (uint)(DAT_00122990 == fVar16) << 0x1e;
      uVar8 = uVar1 | (uint)(NAN(DAT_00122990) || NAN(fVar16)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
        fVar14 = *(float *)(iVar7 + 8);
        fVar9 = func_00590D4C(-fVar16 / fVar14);
        fVar16 = fVar16 + (fVar9 + fVar15) * fVar14;
        param_2 = extraout_r1;
      }
      fVar9 = func_00590DEC(uVar5,param_2,param_3,fVar16,*(float *)(iVar7 + 8));
    }
    fVar16 = DAT_0012299c;
    local_74 = DAT_00122998;
    local_70 = DAT_00122998;
    local_6c = DAT_00122998;
    uVar5 = (uint)*(byte *)(*param_1 + 0x1a);
    fVar14 = DAT_00122998;
    if (uVar5 == 0xff) {
      local_74 = ALBW_AS_F32(param_1[0x12]);
      local_70 = ALBW_AS_F32(param_1[0x13]);
      local_6c = ALBW_AS_F32(param_1[0x14]);
    }
    else {
      func_00690C88(*(int *)(*(int *)(*param_1 + 0xc) + uVar5 * 4),auStack_8c,fVar9);
      if (local_74 == fVar16) {
        local_74 = ALBW_AS_F32(param_1[0x12]);
      }
      if (local_70 == fVar16) {
        local_70 = ALBW_AS_F32(param_1[0x13]);
      }
      if (local_6c == fVar16) {
        local_6c = ALBW_AS_F32(param_1[0x14]);
      }
    }
    local_38[0] = ALBW_AS_F32(param_1[0x21]);
    uVar5 = (uint)*(byte *)(*param_1 + 0x21);
    if (uVar5 != 0xff) {
      func_006911F4(*(int *)(*(int *)(*param_1 + 0xc) + uVar5 * 4),local_38,fVar9);
    }
    param_1[3] = (int)ALBW_AS_U32((local_38[0] * DAT_001229a0));
    param_1[10] = (int)ALBW_AS_U32(fVar13);
    param_1[0xb] = (int)ALBW_AS_U32(fVar13);
    param_1[0xc] = (int)ALBW_AS_U32(fVar13);
    *(undefined2 *)(param_1 + 0xd) = 0;
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    iVar7 = DAT_00122c24;
    cVar2 = *(char *)(*param_1 + 0x18);
    local_d0 = fVar14;
    local_cc = fVar14;
    if (cVar2 == '\0') {
      uVar5 = (uint)*(byte *)(*param_1 + 0x1b);
      if (uVar5 == 0xff) {
        local_d4 = ALBW_AS_F32(param_1[0xe]);
        local_d0 = ALBW_AS_F32(param_1[0xf]);
        local_cc = ALBW_AS_F32(param_1[0x10]);
      }
      else {
        local_d4 = fVar14;
        func_00691234(*(int *)(*(int *)(*param_1 + 0xc) + uVar5 * 4),(int)&local_d4,fVar9);
        if (local_d4 == fVar16) {
          local_d4 = ALBW_AS_F32(param_1[0xe]);
        }
        if (local_d0 == fVar16) {
          local_d0 = ALBW_AS_F32(param_1[0xf]);
        }
        if (local_cc == fVar16) {
          local_cc = ALBW_AS_F32(param_1[0x10]);
        }
      }
      param_1[0x17] = (int)ALBW_AS_U32(local_cc);
      param_1[0x15] = (int)ALBW_AS_U32(local_d4);
      param_1[0x16] = (int)ALBW_AS_U32(local_d0);
      iVar7 = *piVar4;
      pfVar6 = DAT_001229a4;
      if (iVar7 != 0) {
        pfVar6 = (float *)(iVar7 + 0x23c8);
      }
      func_00115C54((float *)(param_1 + 0x15),(float *)(param_1 + 0x15),pfVar6);
      local_98 = local_74 - local_d4;
      local_94 = local_70 - local_d0;
      local_90 = local_6c - local_cc;
      param_1[6] = (int)ALBW_AS_U32(SQRT(local_98 * local_98 + local_94 * local_94 + local_90 * local_90));
      iVar7 = func_004904CC(local_94,SQRT(local_98 * local_98 + local_90 * local_90));
      param_1[4] = iVar7;
      iVar7 = func_004904CC(local_98,local_90);
      param_1[5] = iVar7;
      uVar5 = (uint)*(byte *)(*param_1 + 0x1c);
      fVar16 = fVar13;
      local_68 = fVar13;
      if (uVar5 != 0xff) {
        func_006911F4(*(int *)(*(int *)(*param_1 + 0xc) + uVar5 * 4),&local_68,fVar9);
      }
      func_0048B57C(&local_60,&local_98,local_68);
      func_00491B3C(local_c8,&local_60);
      param_1[0x18] = (int)ALBW_AS_U32(fVar16);
      param_1[0x19] = (int)ALBW_AS_U32(fVar15);
      param_1[0x1a] = (int)ALBW_AS_U32(fVar16);
      func_00115D18((float *)(param_1 + 0x18),local_c8,(float *)(param_1 + 0x18));
    }
    else if (cVar2 == '\x01') {
      param_1[3] = DAT_00122c20;
      param_1[6] = iVar7;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    else if (cVar2 == '\x02') {
      uVar5 = (uint)*(byte *)(*param_1 + 0x1e);
      if (uVar5 == 0xff) {
        local_d0 = ALBW_AS_F32(param_1[0xe]);
        local_cc = ALBW_AS_F32(param_1[0xf]);
        local_c8[0] = ALBW_AS_F32(param_1[0x10]);
      }
      else {
        local_c8[0] = fVar14;
        func_00691234(*(int *)(*(int *)(*param_1 + 0xc) + uVar5 * 4),(int)&local_d0,fVar9);
        if (local_d0 == fVar16) {
          local_d0 = ALBW_AS_F32(param_1[0xe]);
        }
        if (local_cc == fVar16) {
          local_cc = ALBW_AS_F32(param_1[0xf]);
        }
        if (local_c8[0] == fVar16) {
          local_c8[0] = ALBW_AS_F32(param_1[0x10]);
        }
      }
      fVar16 = local_c8[0];
      fVar9 = local_cc;
      fVar14 = local_d0;
      fVar10 = func_0059163C(local_d0);
      fVar11 = func_0059163C(fVar9);
      fVar12 = func_0059163C(fVar16);
      fVar14 = func_005909A0(fVar14);
      fVar9 = func_005909A0(fVar9);
      fVar16 = func_005909A0(fVar16);
      local_58 = fVar14 * fVar12;
      local_60 = fVar14 * fVar11;
      local_40 = fVar14 * fVar9;
      local_54 = fVar14 * fVar16;
      local_50 = -fVar10;
      local_68 = fVar9 * fVar16 + fVar10 * fVar11 * fVar12;
      local_44 = fVar11 * fVar12 + fVar10 * fVar9 * fVar16;
      local_48 = fVar10 * fVar9 * fVar12 - fVar11 * fVar16;
      fStack_64 = fVar10 * fVar11 * fVar16 - fVar9 * fVar12;
      param_1[6] = DAT_00122c28;
      iVar7 = DAT_00122c2c;
      param_1[0x15] = (int)ALBW_AS_U32(fVar13);
      param_1[0x16] = (int)ALBW_AS_U32(fVar13);
      param_1[0x17] = iVar7;
      local_5c = fVar13;
      local_4c = fVar13;
      local_3c = fVar13;
      func_00115D18((float *)(param_1 + 0x15),&local_68,(float *)(param_1 + 0x15));
      param_1[0x15] = (int)ALBW_AS_U32((local_74 + ALBW_AS_F32(param_1[0x15])));
      param_1[0x16] = (int)ALBW_AS_U32((local_70 + ALBW_AS_F32(param_1[0x16])));
      param_1[0x17] = (int)ALBW_AS_U32((local_6c + ALBW_AS_F32(param_1[0x17])));
      iVar7 = *piVar4;
      pfVar6 = DAT_001229a4;
      if (iVar7 != 0) {
        pfVar6 = (float *)(iVar7 + 0x23c8);
      }
      func_00115C54((float *)(param_1 + 0x15),(float *)(param_1 + 0x15),pfVar6);
      fVar16 = DAT_00122c30;
      uVar17 = func_00114608((uint)ALBW_AS_U32(-(DAT_00122c30 * local_d0)),extraout_r1_00);
      param_1[4] = (int)uVar17;
      uVar17 = func_00114608((uint)ALBW_AS_U32((local_cc * fVar16)),(uint)((ulonglong)uVar17 >> 0x20));
      param_1[5] = (int)uVar17;
      param_1[0x18] = (int)ALBW_AS_U32(fVar13);
      param_1[0x19] = (int)ALBW_AS_U32(fVar15);
      param_1[0x1a] = (int)ALBW_AS_U32(fVar13);
      func_00115D18((float *)(param_1 + 0x18),&local_68,(float *)(param_1 + 0x18));
    }
    fVar9 = (float)VectorSignedToFloat(param_1[4],(byte)(uVar8 >> 0x15) & 3);
    fVar16 = fVar13;
    if ((DAT_00122c34 < fVar9) && (fVar16 = fVar15, fVar9 < DAT_00122c38)) {
      fVar16 = (fVar15 * (fVar9 - DAT_00122c34)) / DAT_00122c3c + fVar13;
    }
    param_1[0x22] = (int)ALBW_AS_U32(fVar16);
  }
  return;
}

