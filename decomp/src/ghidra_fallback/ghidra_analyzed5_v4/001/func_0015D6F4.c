#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001EA96C();
extern void func_001FE4C0(int param_1,float fparam_0);
extern int func_0028FE00(int param_1,int param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern void func_002C1540(int param_1,float fparam_0);
extern int func_002C15CC(int param_1,float fparam_0);
extern int func_002FF5BC(int param_1);
extern int func_002FF73C(int param_1);
extern int func_002FF74C(int param_1,int param_2,int param_3);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FA10(int param_1,uint param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0058A7D4(void);
extern float DAT_0015daa4;
extern float DAT_0015daa8;
extern float DAT_0015daac;
extern float DAT_0015dab0;
extern int DAT_0015dab4;
extern float DAT_0015dab8;
extern int DAT_0015dabc;
extern float DAT_0015dac0;
extern float DAT_0015dac4;
extern undefined4 DAT_0015dac8;
extern float DAT_0015dacc;
extern float DAT_0015dad0;
extern float DAT_0015dad4;
extern int DAT_0015dad8;
extern float *DAT_0015dadc;
extern undefined4 DAT_0015dae0;
extern float DAT_0015dae4;
extern undefined4 DAT_0015dae8;
extern float DAT_0015daec;
extern float DAT_0015e040;
extern undefined4 *DAT_0015e044;
extern float DAT_0015e048;
extern int DAT_0015e270;
extern undefined4 DAT_0015e274;
extern int *DAT_0015e278;

// USA 0015D6F4 <- EU 0015D6F8 (Ghidra, non-matching)
// GLOBAL DAT_0015daa4 float
// GLOBAL DAT_0015daa8 float
// GLOBAL DAT_0015daac float
// GLOBAL DAT_0015dab0 float
// GLOBAL DAT_0015dab4 int
// GLOBAL DAT_0015dab8 float
// GLOBAL DAT_0015dabc int
// GLOBAL DAT_0015dac0 float
// GLOBAL DAT_0015dac4 float
// GLOBAL DAT_0015dac8 undefined4
// GLOBAL DAT_0015dacc float
// GLOBAL DAT_0015dad0 float
// GLOBAL DAT_0015dad4 float
// GLOBAL DAT_0015dad8 int
// GLOBAL DAT_0015dadc float *
// GLOBAL DAT_0015dae0 undefined4
// GLOBAL DAT_0015dae4 float
// GLOBAL DAT_0015dae8 undefined4
// GLOBAL DAT_0015daec float
// GLOBAL DAT_0015e040 float
// GLOBAL DAT_0015e044 undefined4 *
// GLOBAL DAT_0015e048 float
// GLOBAL DAT_0015e270 int
// GLOBAL DAT_0015e274 undefined4
// GLOBAL DAT_0015e278 int *

void func_0015D6F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *puVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  float fVar15;
  int unaff_r11;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  uint uVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  _Alignas(8) unsigned char albw_frame[0x170];
  #define local_168 (*(float *)(albw_frame + 0x8))
  #define local_164 (*(float *)(albw_frame + 0xc))
  #define local_160 (*(float *)(albw_frame + 0x10))
  #define local_15c (*(float *)(albw_frame + 0x14))
  #define local_158 (*(undefined4 *)(albw_frame + 0x18))
  #define local_154 (*(float *)(albw_frame + 0x1c))
  #define local_150 (*(float *)(albw_frame + 0x20))
  #define local_14c (*(float *)(albw_frame + 0x24))
  #define local_148 (*(undefined4 *)(albw_frame + 0x28))
  #define local_144 (*(float *)(albw_frame + 0x2c))
  #define local_140 (*(float *)(albw_frame + 0x30))
  #define local_13c (*(float *)(albw_frame + 0x34))
  #define local_138 (*(float *)(albw_frame + 0x38))
  #define local_134 (*(float *)(albw_frame + 0x3c))
  #define local_130 (*(float *)(albw_frame + 0x40))
  #define local_12c (*(float *)(albw_frame + 0x44))
  #define local_128 (*(float *)(albw_frame + 0x48))
  #define local_124 (*(float *)(albw_frame + 0x4c))
  #define local_120 (*(float *)(albw_frame + 0x50))
  #define local_11c (*(float *)(albw_frame + 0x54))
  #define local_118 (*(undefined4 *)(albw_frame + 0x58))
  #define local_114 (*(float *)(albw_frame + 0x5c))
  #define local_110 (*(float *)(albw_frame + 0x60))
  #define local_10c (*(float *)(albw_frame + 0x64))
  #define local_108 (*(float *)(albw_frame + 0x68))
  #define local_104 (*(float *)(albw_frame + 0x6c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x70))
  #define local_fc (*(undefined4 *)(albw_frame + 0x74))
  #define local_f8 (*(float *)(albw_frame + 0x78))
  #define local_f4 (*(float *)(albw_frame + 0x7c))
  #define local_f0 (*(uint *)(albw_frame + 0x80))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x84))
  #define local_e8 (*(undefined4 * *)(albw_frame + 0x88))
  #define local_e4 ((undefined4 *)(albw_frame + 0x8c))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_d0 (*(undefined1 *)(albw_frame + 0xa0))
  #define local_cf (*(undefined1 *)(albw_frame + 0xa1))
  #define local_ce (*(undefined1 *)(albw_frame + 0xa2))
  #define local_cd (*(undefined1 *)(albw_frame + 0xa3))
  #define local_cc (*(undefined4 *)(albw_frame + 0xa4))
  #define local_c8 (*(int *)(albw_frame + 0xa8))
  #define local_c4 (*(int *)(albw_frame + 0xac))
  #define iStack_bc (*(int *)(albw_frame + 0xb4))
  #define local_b8 (*(int * *)(albw_frame + 0xb8))
  #define local_b4 (*(undefined4 * *)(albw_frame + 0xbc))
  iVar8 = DAT_0015dabc;
  fVar15 = DAT_0015dab8;
  fVar23 = DAT_0015dab0;
  fVar25 = DAT_0015daac;
  local_160 = DAT_0015daa8;
  fVar22 = DAT_0015daa4;
  local_b8 = (int *)(param_1 + 0x980);
  pfVar12 = (float *)(param_1 + 0x988);
  pfVar13 = (float *)(param_1 + 0x994);
  piVar14 = (int *)(param_1 + 0x984);
  if (*(char *)(param_1 + 0x9ae) == '\0') {
    *(undefined1 *)(param_1 + 0x9ac) = 0;
    fVar23 = *(float *)(param_1 + 0x3d0);
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
      fVar22 = local_160;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x3d8);
    *pfVar13 = fVar23;
    fVar22 = fVar22 + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x998) = fVar22;
    *(undefined4 *)(param_1 + 0x99c) = uVar9;
    *(float *)(param_1 + 0x9a0) = fVar23;
    *(float *)(param_1 + 0x9a4) = fVar22;
    *(undefined4 *)(param_1 + 0x9a8) = uVar9;
    *pfVar12 = fVar23;
    *(float *)(param_1 + 0x98c) = fVar22;
    *(undefined4 *)(param_1 + 0x990) = uVar9;
    iVar8 = *(int *)(param_1 + 0x980);
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 1;
      func_004CF478(*(int *)(param_1 + 0x980),0);
    }
    *(undefined1 *)(param_1 + 0x9ad) = 0;
    func_001FE4C0(*(int *)(param_1 + 0x984),fVar22);
    return;
  }
  uVar26 = CONCAT44(DAT_0015daac,DAT_0015daa8);
  if (*(int *)(param_1 + 0x97c) != 0) {
    uVar6 = *(int *)(param_1 + 0xe58) + DAT_0015dab4;
    param_4 = (int *)(uVar6 & 0xffffff);
    *(uint *)(param_1 + 0xe58) = uVar6;
    pfVar7 = (float *)(iVar8 + (uVar6 >> 0x18) * 0x10);
    fVar20 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = pfVar7[1];
    fVar21 = *pfVar7;
    iVar8 = *(int *)(param_1 + 0x97c);
    *(float *)(iVar8 + 0x16c) = fVar23;
    *(float *)(iVar8 + 0x170) = (fVar21 + fVar24 * fVar20 * fVar15) * fVar25 + DAT_0015dac0;
    *(float *)(iVar8 + 0x174) = fVar23;
    fVar25 = DAT_0015dac4;
    iVar8 = *(int *)(param_1 + 0x97c);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar8 + 0x164) == DAT_0015dac4) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      *(uint *)(iVar8 + 0x188) = *(uint *)(iVar8 + 0x188) | 8;
    }
    *(float *)(iVar8 + 0x164) = fVar25;
    *(undefined4 *)(*(int *)(param_1 + 0x97c) + 0x168) = DAT_0015dac8;
  }
  iVar8 = DAT_0015dad8;
  fVar15 = DAT_0015dad4;
  cVar1 = *(char *)(param_1 + 0x9ac);
  fVar25 = fVar23;
  if (cVar1 != '\0') {
    fVar25 = *(float *)(param_1 + 0x910) * *(float *)(param_1 + 0x9b0);
  }
  uVar6 = in_fpscr & 0xfffffff;
  fVar20 = fVar25;
  if (fVar25 != fVar23) {
    uVar6 = uVar6 | (uint)(fVar25 < fVar23) << 0x1f;
    fVar20 = DAT_0015dacc;
    if (fVar25 == fVar23 || SUB41(uVar6 >> 0x1f,0) != (NAN(fVar25) || NAN(fVar23))) {
      fVar20 = DAT_0015dad0;
    }
    fVar20 = *(float *)(param_1 + 0x9b0) * fVar20;
  }
  *(float *)(param_1 + 0x9b0) = DAT_0015dad4;
  local_11c = fVar23;
  local_10c = fVar15;
  local_108 = fVar15;
  local_104 = fVar15;
  local_100 = 0;
  local_fc = 0;
  uVar6 = uVar6 & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f | (uint)(fVar20 == fVar23) << 0x1e;
  uVar18 = uVar6 | (uint)(NAN(fVar20) || NAN(fVar23)) << 0x1c;
  local_f4 = fVar15;
  bVar19 = (byte)(uVar6 >> 0x18);
  fVar21 = fVar20;
  if ((bool)(bVar19 >> 6 & 1) || bVar19 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) {
    fVar21 = -fVar20;
  }
  uStack_ec = 4;
  local_d0 = 0;
  local_cf = 0;
  local_ce = 0;
  local_d4 = 0;
  local_cd = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  puVar10 = local_e4;
  if ((int)ALBW_AS_U32(fVar21) < iVar8) {
    unaff_r11 = 1;
  }
  local_130 = fVar23;
  if (iVar8 <= (int)ALBW_AS_U32(fVar21)) {
    unaff_r11 = 0;
  }
  local_12c = *DAT_0015dadc;
  local_128 = DAT_0015dadc[1];
  local_124 = DAT_0015dadc[2];
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
    local_118 = DAT_0015dae8;
    local_114 = DAT_0015dae4;
  }
  else {
    local_114 = fVar22;
    local_118 = DAT_0015dae0;
  }
  local_110 = local_114;
  local_f8 = fVar22;
  local_120 = DAT_0015daec;
  bVar17 = *(int *)(param_1 + 0xdd8) != 0;
  if (bVar17) {
    local_e4[0] = *(undefined4 *)(param_1 + 0xdd8);
  }
  local_f0 = (uint)bVar17;
  local_b4 = (undefined4 *)(param_1 + 0x964);
  local_134 = fVar20;
  local_e8 = puVar10;
  if (cVar1 == '\0') {
    local_164 = *(float *)(param_1 + 0x3d0);
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
      local_160 = fVar22;
    }
    local_15c = *(float *)(param_1 + 0x3d8);
    local_160 = local_160 + *(float *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0x40c);
    local_158 = *(undefined4 *)(iVar8 + 0x80);
    local_154 = *(float *)(iVar8 + 0x90);
    local_150 = *(float *)(iVar8 + 0xa0);
    local_14c = *(float *)(iVar8 + 0x84);
    local_148 = *(undefined4 *)(iVar8 + 0x94);
    local_144 = *(float *)(iVar8 + 0xa4);
    local_13c = *(float *)(iVar8 + 0x98);
    local_140 = *(float *)(iVar8 + 0x88);
    local_138 = *(float *)(iVar8 + 0xa8);
  }
  else {
    local_fc = *(undefined4 *)(param_1 + 0x980);
    iVar8 = *(int *)(param_1 + 0x984);
    local_158 = *(undefined4 *)(iVar8 + 0x3b4c);
    local_154 = *(float *)(iVar8 + 0x3b50);
    local_150 = *(float *)(iVar8 + 0x3b54);
    local_14c = *(float *)(iVar8 + 0x3b58);
    local_148 = *(undefined4 *)(iVar8 + 0x3b5c);
    local_144 = *(float *)(iVar8 + 0x3b60);
    local_140 = *(float *)(iVar8 + 0x3b64);
    local_13c = *(float *)(iVar8 + 0x3b68);
    local_138 = *(float *)(iVar8 + 0x3b6c);
    local_c8 = *piVar14 + 0x3ba4;
    local_c4 = *piVar14 + 0x3ba8;
    iVar8 = *piVar14;
    local_164 = *(float *)(iVar8 + 0x3b40);
    local_160 = *(float *)(iVar8 + 0x3b44);
    local_15c = *(float *)(iVar8 + 0x3b48);
    iVar8 = *(int *)(param_1 + 0x974);
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar8 + 0x80) = local_158;
    *(float *)(iVar8 + 0x84) = local_14c;
    *(float *)(iVar8 + 0x88) = local_140;
    *(float *)(iVar8 + 0x8c) = *pfVar12;
    *(float *)(iVar8 + 0x90) = local_154;
    *(undefined4 *)(iVar8 + 0x94) = local_148;
    *(float *)(iVar8 + 0x98) = local_13c;
    *(undefined4 *)(iVar8 + 0x9c) = *(undefined4 *)(param_1 + 0x98c);
    *(float *)(iVar8 + 0xa0) = local_150;
    *(float *)(iVar8 + 0xa4) = local_144;
    *(float *)(iVar8 + 0xa8) = local_138;
    uVar9 = *(undefined4 *)(param_1 + 0x990);
    *(undefined4 *)(iVar8 + 0xac) = uVar9;
    if (*(int **)(param_1 + 0x964) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x964),uVar9,puVar10,param_4);
      puVar10 = (undefined4 *)0x0;
      func_00168E9C((int *)*local_b4,*(int *)(param_1 + 0x974),(int *)0x0);
      uVar9 = extraout_r1;
    }
    if (*(int **)(param_1 + 0x968) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x968),uVar9,puVar10,param_4);
      puVar10 = (undefined4 *)0x0;
      func_00168E9C(*(int **)(param_1 + 0x968),*(int *)(param_1 + 0x974),(int *)0x0);
    }
    func_004CEAF0(*(int *)(param_1 + 0x974));
    uVar9 = extraout_r1_00;
    if (*(int **)(param_1 + 0x96c) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x96c),extraout_r1_00,puVar10,param_4);
      puVar10 = (undefined4 *)0x0;
      func_00168E9C(*(int **)(param_1 + 0x96c),*(int *)(param_1 + 0x978),(int *)0x0);
      uVar9 = extraout_r1_01;
    }
    if (*(int **)(param_1 + 0x970) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x970),uVar9,puVar10,param_4);
      func_00168E9C(*(int **)(param_1 + 0x970),*(int *)(param_1 + 0x978),(int *)0x0);
    }
    func_004CEAF0(*(int *)(param_1 + 0x978));
  }
  iVar8 = *(int *)(param_1 + 0x980);
  if (iVar8 != 0) {
    if (unaff_r11 == 0) {
      uVar6 = uVar18 & 0xfffffff | (uint)(fVar23 <= fVar20) << 0x1d;
      fVar21 = fVar15;
      if (SUB41(uVar6 >> 0x1d,0)) {
        fVar21 = DAT_0015e040;
      }
      func_002C1540(iVar8,fVar21);
      uVar18 = uVar6 & 0xfffffff | (uint)(fVar20 == fVar23) << 0x1e |
               (uint)(fVar23 <= fVar20) << 0x1d;
      iVar8 = *(int *)(param_1 + 0x980);
      if (!(bool)((byte)(uVar18 >> 0x1d) & 1)) {
        fVar15 = fVar23;
      }
    }
    else {
      func_002C1540(iVar8,fVar15);
      iVar8 = *local_b8;
      fVar15 = fVar23;
    }
    func_002C15CC(iVar8,fVar15);
    uVar6 = *(uint *)(*(int *)(param_1 + 0x980) + 0x164);
    if (*(char *)(param_1 + 0x9ad) == '\x01') {
      uVar6 = uVar6 & 0xfffffffe;
    }
    else {
      uVar6 = uVar6 | 1;
    }
    *(uint *)(*(int *)(param_1 + 0x980) + 0x164) = uVar6;
    func_004CF478(*(int *)(param_1 + 0x980),(int)*(char *)(param_1 + 0x9ad));
  }
  if (unaff_r11 == 0) {
    if (*(int *)(param_1 + 0x974) != 0) {
      uVar6 = uVar18 & 0xfffffff | (uint)(fVar20 < fVar23) << 0x1f |
              (uint)(fVar20 == fVar23) << 0x1e;
      uVar18 = uVar6 | (uint)(NAN(fVar20) || NAN(fVar23)) << 0x1c;
      bVar19 = (byte)(uVar6 >> 0x18);
      iVar8 = **(int **)(*(int *)(param_1 + 0x964) + 0x14);
      if ((bool)(bVar19 >> 6 & 1) || bVar19 >> 7 != ((byte)(uVar18 >> 0x1c) & 1)) {
        if (iVar8 != 0) {
          puVar4 = (uint *)func_002C11E8(&iStack_bc,0,0,0);
          func_0016898C(*(int *)(param_1 + 0x964),puVar4);
        }
      }
      else if (iVar8 != 1) {
        puVar4 = (uint *)func_002C11E8(&iStack_bc,1,0,0);
        func_0016898C(*(int *)(param_1 + 0x964),puVar4);
      }
      func_004CF478(*(int *)(param_1 + 0x974),1);
    }
    iVar8 = *(int *)(param_1 + 0x978);
  }
  else {
    if (*(int *)(param_1 + 0x978) != 0) {
      func_004CF478(*(int *)(param_1 + 0x978),1);
    }
    iVar8 = *(int *)(param_1 + 0x974);
  }
  if (iVar8 != 0) {
    func_004CF478(iVar8,0);
  }
  if (*(int *)(param_1 + 0x97c) != 0) {
    func_002FF73C(*(int *)(param_1 + 0x97c));
    if (unaff_r11 == 0) {
      func_002FF74C(*(int *)(param_1 + 0x97c),*(int *)(param_1 + 0x974),0);
    }
    else {
      func_002FF74C(*(int *)(param_1 + 0x97c),*(int *)(param_1 + 0x978),0);
    }
    func_002FF5BC(*(int *)(param_1 + 0x97c));
  }
  cVar2 = *(char *)(param_1 + 0x8c0);
  if (((cVar2 != '\a' && cVar2 != '\b') && cVar2 != '\t') || (*(int *)(param_1 + 0x8bc) < 2)) {
    func_001EA96C(*(undefined4 *)(param_1 + 0x984),&local_164);
    iVar16 = *piVar14;
    iVar8 = 0;
    piVar3 = (int *)*DAT_0015e044;
    if (0 < *piVar3) {
      do {
        piVar11 = *(int **)(piVar3[2] + iVar8 * 4);
        iVar8 = iVar8 + 1;
        *piVar11 = piVar3[3];
        piVar3[3] = (int)piVar11;
      } while (iVar8 < *piVar3);
    }
    *piVar3 = 0;
    iVar8 = 0;
    if (0 < piVar3[5]) {
      do {
        piVar11 = *(int **)(piVar3[7] + iVar8 * 4);
        iVar8 = iVar8 + 1;
        *piVar11 = piVar3[8];
        piVar3[8] = (int)piVar11;
      } while (iVar8 < piVar3[5]);
    }
    piVar3[5] = 0;
    piVar3[10] = 0;
    func_0049F5FC((undefined4 *)(iVar16 + 8));
    func_0049F5FC((undefined4 *)(iVar16 + 0x18));
    cVar2 = *(char *)(*(int *)(param_1 + 0x984) + 0x3bae);
    if ((cVar2 == '\x01') || ((*(char *)(param_1 + 0x9ad) == '\x01' && (cVar2 == '\x02')))) {
      *(undefined1 *)(param_1 + 0x9ad) = 1;
      fVar15 = *(float *)(param_1 + 0x988);
      fVar20 = *(float *)(param_1 + 0x990);
      *(undefined1 *)(param_1 + 0x9ac) = 1;
      iVar8 = *(int *)(param_1 + 0x984);
      if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
        fVar22 = ALBW_AS_F32(uVar26);
      }
      *pfVar12 = *(float *)(iVar8 + 0x3b40);
      fVar22 = fVar22 + *(float *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(iVar8 + 0x3b44);
      *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(iVar8 + 0x3b48);
      *(float *)(param_1 + 0x9a0) = *pfVar13;
      *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_1 + 0x998);
      *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_1 + 0x99c);
      iVar8 = *piVar14;
      func_00115D70(&local_14c,(float *)(iVar8 + 0x3b64),ALBW_AS_F32(((ulonglong)uVar26 >> 0x20)));
      bVar19 = (byte)(uVar18 >> 0x18);
      local_164 = local_14c;
      local_160 = ALBW_AS_F32(local_148);
      local_15c = local_144;
      func_00115C54(&local_150,(float *)(iVar8 + 0x3b40),&local_164);
      bVar17 = cVar1 == '\0';
      if (!bVar17) {
        bVar19 = (byte)(((uint)(fVar25 == fVar23) << 0x1e) >> 0x18);
      }
      *pfVar13 = local_150;
      *(undefined4 *)(param_1 + 0x99c) = local_148;
      if (!bVar17) {
        bVar17 = (bool)(bVar19 >> 6 & 1);
      }
      *(float *)(param_1 + 0x998) = fVar22;
      if ((bVar17) ||
         (fVar15 = fVar15 - *pfVar12, fVar20 = fVar20 - *(float *)(param_1 + 0x990),
         DAT_0015e270 <= (int)ALBW_AS_U32(SQRT(fVar15 * fVar15 + fVar20 * fVar20)))) {
        *(undefined4 *)(param_1 + 0x95c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x9b0) = DAT_0015e274;
      }
      bVar17 = func_00520FD4();
      if ((bVar17) &&
         (pfVar13 = (float *)func_00520FC0(), fVar22 = *(float *)(param_1 + 0x990) - pfVar13[2],
         (int)ALBW_AS_U32(SQRT((*pfVar12 - *pfVar13) * (*pfVar12 - *pfVar13) + fVar22 * fVar22)) < 0x3f800000)) {
        if (*DAT_0015e278 != 0) {
          func_0028FE00(*DAT_0015e278,1);
        }
        return;
      }
    }
    else {
      if (cVar1 == '\0') {
        *(undefined1 *)(param_1 + 0x9ac) = 0;
        if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
          fVar22 = ALBW_AS_F32(uVar26);
        }
        fVar23 = *(float *)(param_1 + 0x3d0);
        uVar9 = *(undefined4 *)(param_1 + 0x3d8);
        *pfVar13 = fVar23;
        fVar22 = fVar22 + *(float *)(param_1 + 0xc);
        *(float *)(param_1 + 0x998) = fVar22;
        *(undefined4 *)(param_1 + 0x99c) = uVar9;
        *(float *)(param_1 + 0x9a0) = fVar23;
        *(float *)(param_1 + 0x9a4) = fVar22;
        *(undefined4 *)(param_1 + 0x9a8) = uVar9;
        *pfVar12 = fVar23;
        *(float *)(param_1 + 0x98c) = fVar22;
        *(undefined4 *)(param_1 + 0x990) = uVar9;
        *(undefined4 *)(param_1 + 0x95c) = 0;
        return;
      }
      iVar8 = param_1 + 0x9b4;
      uVar6 = func_0054FBC4(iVar8,pfVar12,(float *)0x0);
      fVar25 = ALBW_AS_F32(((ulonglong)uVar26 >> 0x20));
      pfVar7 = (float *)func_0054FA10(iVar8,uVar6);
      local_144 = *pfVar7;
      local_140 = pfVar7[1];
      local_13c = pfVar7[2];
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      fVar22 = (float)VectorUnsignedToFloat(uVar5,(byte)(uVar18 >> 0x15) & 3);
      fVar25 = fVar22 * DAT_0015e048 * fVar25 + fVar25;
      pfVar7 = (float *)func_0054F9E4(iVar8,uVar6);
      func_00115D70(&local_120,&local_144,fVar25);
      local_168 = local_120;
      local_164 = local_11c;
      local_160 = ALBW_AS_F32(local_118);
      func_00115C54(&local_120,pfVar7,&local_168);
      local_12c = local_120;
      local_128 = local_11c;
      local_124 = ALBW_AS_F32(local_118);
      func_00115C70(&local_120,&local_12c,pfVar12);
      local_138 = local_120;
      local_130 = ALBW_AS_F32(local_118);
      local_134 = fVar23;
      func_00115DC8(&local_138);
      pfVar7 = (float *)(param_1 + 0x9a0);
      func_00115D70(&local_11c,&local_138,fVar25);
      local_15c = local_11c;
      local_158 = local_118;
      local_154 = local_114;
      func_00115C54(&local_11c,pfVar7,&local_15c);
      *pfVar7 = local_11c;
      *(undefined4 *)(param_1 + 0x9a4) = local_118;
      *(float *)(param_1 + 0x9a8) = local_114;
      *pfVar13 = *pfVar7;
      *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(param_1 + 0x9a4);
      *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(param_1 + 0x9a8);
      *pfVar12 = *pfVar13;
      *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_1 + 0x998);
      *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_1 + 0x99c);
      *(int *)(param_1 + 0x95c) = *(int *)(param_1 + 0x95c) + 1;
    }
  }
  return;
}

