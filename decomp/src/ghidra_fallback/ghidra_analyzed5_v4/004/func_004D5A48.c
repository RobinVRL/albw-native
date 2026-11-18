#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int *DAT_004d5e6c;
extern int *DAT_004d5e70;
extern int *DAT_004d5e74;
extern float DAT_004d5e78;
extern float DAT_004d5e7c;
extern float DAT_004d5e80;
extern float DAT_004d5e84;
extern float DAT_004d5e88;
extern float DAT_004d5e8c;
extern float DAT_004d5e90;
extern float DAT_004d5e94;
extern float DAT_004d5e98;
extern float DAT_004d5e9c;
extern float DAT_004d5ea0;
extern int DAT_004d5ea4;
extern int DAT_004d5ebc;
extern char s_SE_Rupee_APPEAR_1_004d5ea8[];

// USA 004D5A48 <- EU 004D5A20 (Ghidra, non-matching)
// GLOBAL DAT_004d5e6c int *
// GLOBAL DAT_004d5e70 int *
// GLOBAL DAT_004d5e74 int *
// GLOBAL DAT_004d5e78 float
// GLOBAL DAT_004d5e7c float
// GLOBAL DAT_004d5e80 float
// GLOBAL DAT_004d5e84 float
// GLOBAL DAT_004d5e88 float
// GLOBAL DAT_004d5e8c float
// GLOBAL DAT_004d5e90 float
// GLOBAL DAT_004d5e94 float
// GLOBAL DAT_004d5e98 float
// GLOBAL DAT_004d5e9c float
// GLOBAL DAT_004d5ea0 float
// GLOBAL DAT_004d5ea4 int
// GLOBAL DAT_004d5ebc int
// GLOBAL s_SE_Rupee_APPEAR_1_004d5ea8 string

undefined4 func_004D5A48(int param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c ((int *)(albw_frame + 0x24))
  #define local_5c (*(uint *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(undefined1 *)(albw_frame + 0x44))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_38 (*(int *)(albw_frame + 0x58))
  #define local_34 (*(char * *)(albw_frame + 0x5c))
  if (*(char *)(param_1 + 0x10e) != '\0') {
    *(char *)(param_1 + 0x10e) = *(char *)(param_1 + 0x10e) + -1;
  }
  if ((*(char *)(param_1 + 0x10d) == '\0') || (*(char *)(param_1 + 0x10e) != '\0')) {
    return 0;
  }
  if (((*(char *)(param_1 + 0x10c) == '\x03') && (sVar2 = *(short *)(param_1 + 0x114), sVar2 != 0))
     && (*(short *)(param_1 + 0x114) = sVar2 + -1, sVar2 == 1)) {
    *(undefined1 *)(param_1 + 0x10c) = 0;
    iVar8 = *(int *)(param_1 + 0xc4);
    if (iVar8 == 0) {
      return 0;
    }
    if (*(int *)(iVar8 + 0x1c) != *(int *)(param_1 + 200)) {
      return 0;
    }
    iVar5 = *(int *)(iVar8 + 0x20);
    if (((iVar5 != 0) && (*(int *)(iVar8 + 0x24) == *(int *)(iVar5 + 0xc))) &&
       (0 < *(int *)(iVar5 + 4))) {
      *(undefined1 *)(iVar5 + 0x280) = 1;
    }
    *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) & 0xfffffffb | 8;
    return 0;
  }
  local_5c = param_4 & 0xffff0000 | 0xffff;
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_58 = 0xff;
  uStack_54 = 0;
  local_4c = 0;
  local_6c[3] = param_2[0xb3];
  local_50 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = func_004A8F40(*DAT_004d5e6c,local_6c,0x200);
  if (uVar4 == 0) {
    return 0;
  }
  iVar8 = *DAT_004d5e70;
  if (iVar8 == 0) {
    return 0;
  }
  local_78 = *(float *)(param_3 + 4);
  uStack_70 = *(undefined4 *)(param_3 + 0xc);
  local_74 = *(float *)(param_3 + 8) + DAT_004d5e78;
  puVar7 = (uint *)(*DAT_004d5e74 + 0x660);
  func_00115C70(&local_84,&local_78,*(float **)(iVar8 + 0x1c));
  local_80 = DAT_004d5e7c;
  fVar13 = DAT_004d5e7c;
  uVar4 = func_00111A64(puVar7);
  fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = SQRT(local_84 * local_84 + local_80 * local_80 + local_7c * local_7c);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
  uVar10 = uVar4 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
  bVar3 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
    fVar14 = (fVar11 * DAT_004d5e80 * fVar13 + DAT_004d5e84) / fVar14;
    local_7c = local_7c * fVar14;
    local_80 = local_80 * fVar14;
    local_84 = local_84 * fVar14;
  }
  fVar11 = DAT_004d5e88;
  fVar15 = DAT_004d5e80;
  uVar4 = func_00111A64(puVar7);
  fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x15) & 3);
  local_80 = fVar14 * fVar15 * fVar11 + DAT_004d5e8c;
  fVar11 = DAT_004d5e90;
  uVar4 = func_00111A64(puVar7);
  fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x15) & 3);
  local_84 = fVar14 * fVar15 * fVar11 + DAT_004d5e94 + local_84;
  fVar14 = DAT_004d5e94;
  uVar4 = func_00111A64(puVar7);
  fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x15) & 3);
  local_7c = fVar12 * fVar15 * fVar11 + fVar14 + local_7c;
  uVar9 = **(uint **)(iVar8 + 0x24);
  fVar11 = DAT_004d5e98;
  uVar4 = func_00111A64(puVar7);
  fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x15) & 3);
  func_004D80A4(&fStack_48,uVar9,fVar14 * fVar15 * fVar11 + DAT_004d5e9c);
  local_44 = fVar13;
  func_00115C54(&local_84,&local_84,&fStack_48);
  fVar13 = DAT_004d5ea0;
  uVar4 = func_00111A64(puVar7);
  uVar9 = 0;
  fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar10 >> 0x15) & 3);
  fVar13 = fVar11 * fVar15 * fVar13;
  if (fVar13 <= *(float *)(DAT_004d5ea4 + 0x2c)) {
    uVar9 = *(uint *)(DAT_004d5ea4 + 0x28) & 0xff;
  }
  else if (fVar13 <= *(float *)(DAT_004d5ea4 + 0x34)) {
    uVar9 = *(uint *)(DAT_004d5ea4 + 0x30) & 0xff;
  }
  else if (fVar13 <= *(float *)(DAT_004d5ea4 + 0x3c)) {
    uVar9 = *(uint *)(DAT_004d5ea4 + 0x38) & 0xff;
  }
  func_001D6FD0(&local_78,uVar9,2,(int *)&local_84,-1);
  cVar1 = *(char *)(param_1 + 0x10d);
  *(undefined1 *)(param_1 + 0x10e) = 0x14;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x10c) = 0;
    iVar8 = *(int *)(param_1 + 0xc4);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x1c) != *(int *)(param_1 + 200))) goto LAB_004d5e3c;
    iVar5 = *(int *)(iVar8 + 0x20);
    if ((iVar5 != 0) && (*(int *)(iVar8 + 0x24) == *(int *)(iVar5 + 0xc))) {
      iVar6 = *(int *)(iVar5 + 4);
joined_r0x004d5e28:
      if (0 < iVar6) {
        *(undefined1 *)(iVar5 + 0x280) = 1;
      }
    }
  }
  else {
    *(char *)(param_1 + 0x10d) = cVar1 + -1;
    if (cVar1 != '\x01') {
      *(undefined1 *)(param_1 + 0x10c) = 3;
      goto LAB_004d5e3c;
    }
    *(undefined1 *)(param_1 + 0x10c) = 0;
    iVar8 = *(int *)(param_1 + 0xc4);
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x1c) != *(int *)(param_1 + 200))) goto LAB_004d5e3c;
    iVar5 = *(int *)(iVar8 + 0x20);
    if ((iVar5 != 0) && (*(int *)(iVar8 + 0x24) == *(int *)(iVar5 + 0xc))) {
      iVar6 = *(int *)(iVar5 + 4);
      goto joined_r0x004d5e28;
    }
  }
  *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) & 0xfffffffb | 8;
LAB_004d5e3c:
  local_34 = s_SE_Rupee_APPEAR_1_004d5ea8;
  local_38 = DAT_004d5ebc;
  return func_0014DBF4(param_2,&local_38,&local_78,0);
}

