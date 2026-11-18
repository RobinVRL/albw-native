#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0015B580(int param_1,uint param_2);
extern int func_0015C534(undefined4 *param_1);
extern int func_0015D6F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0015F8F4(int param_1);
extern int func_00161178(undefined4 *param_1);
extern int func_0019B04C(uint param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_002AFEC4(int param_1,int param_2,int param_3);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00361610(int param_1,undefined1 param_2);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F790C(int param_1,float *param_2,float *param_3);
extern int func_004F7A00(int param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FCEDC(int param_1,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern float func_0058A404(int param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00160ca0;
extern float DAT_00160ca4;
extern int DAT_00160ca8;
extern int DAT_00160cac;
extern undefined4 DAT_00160cb0;
extern uint DAT_00160cbc;
extern float DAT_00160cc0;
extern int DAT_00160cc4;
extern int *DAT_00161148;
extern int DAT_0016114c;
extern float DAT_00161150;
extern float *DAT_00161154;
extern int DAT_00161158;
extern uint *DAT_0016115c;
extern uint *DAT_00161160;
extern float DAT_00161164;
extern int *DAT_00161168;
extern char s_Barrier_00160cb4[];

// USA 001608B0 <- EU 001608B4 (Ghidra, non-matching)
// GLOBAL DAT_00160ca0 float
// GLOBAL DAT_00160ca4 float
// GLOBAL DAT_00160ca8 int
// GLOBAL DAT_00160cac int
// GLOBAL DAT_00160cb0 undefined4
// GLOBAL DAT_00160cbc uint
// GLOBAL DAT_00160cc0 float
// GLOBAL DAT_00160cc4 int
// GLOBAL DAT_00161148 int *
// GLOBAL DAT_0016114c int
// GLOBAL DAT_00161150 float
// GLOBAL DAT_00161154 float *
// GLOBAL DAT_00161158 int
// GLOBAL DAT_0016115c uint *
// GLOBAL DAT_00161160 uint *
// GLOBAL DAT_00161164 float
// GLOBAL DAT_00161168 int *
// GLOBAL s_Barrier_00160cb4 string

undefined4 func_001608B0(int *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  uint extraout_r1;
  int *piVar9;
  undefined4 extraout_r1_00;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define local_330 (*(int *)(albw_frame + 0x0))
  #define local_32c (*(float *)(albw_frame + 0x4))
  #define local_328 (*(undefined4 *)(albw_frame + 0x8))
  #define local_324 (*(float *)(albw_frame + 0xc))
  #define local_31c (*(float *)(albw_frame + 0x14))
  #define local_318 (*(undefined4 *)(albw_frame + 0x18))
  #define local_314 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_310 (*(int *)(albw_frame + 0x20))
  #define local_30c (*(int * *)(albw_frame + 0x24))
  #define local_308 (*(undefined4 *)(albw_frame + 0x28))
  #define local_304 (*(float *)(albw_frame + 0x2c))
  #define uStack_300 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2e8 (*(float *)(albw_frame + 0x48))
  #define local_2e4 (*(int *)(albw_frame + 0x4c))
  #define local_2e0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_2dc (*(undefined2 *)(albw_frame + 0x54))
  #define local_2b4 (*(uint *)(albw_frame + 0x7c))
  #define uStack_2b0 (*(uint *)(albw_frame + 0x80))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x84))
  #define local_2a8 (*(float *)(albw_frame + 0x88))
  #define local_2a4 (*(float *)(albw_frame + 0x8c))
  #define local_2a0 (*(float *)(albw_frame + 0x90))
  #define local_29c (*(undefined4 *)(albw_frame + 0x94))
  #define local_70 (*(undefined4 *)(albw_frame + 0x2c0))
  #define local_64 (*(float *)(albw_frame + 0x2cc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x2d0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x2d4))
  #define local_58 (*(float *)(albw_frame + 0x2d8))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2dc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x2e0))
  #define local_4c (*(float *)(albw_frame + 0x2e4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x2e8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2ec))
  #define local_40 (*(float *)(albw_frame + 0x2f0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x2f4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x2f8))
  uVar5 = in_fpscr & 0xfffffff;
  uVar15 = uVar5 | (uint)(*(float *)(param_1[0x103] + 0x134) == ALBW_AS_F32(param_1[0x3e9])) << 0x1e;
  if (!SUB41(uVar15 >> 0x1e,0)) {
    fVar16 = *(float *)(param_1[0x103] + 0x134);
    fVar17 = ALBW_AS_F32(param_1[0x3e9]);
    fVar18 = fVar17 - fVar16;
    uVar1 = uVar5 | (uint)(fVar18 < DAT_00160ca0) << 0x1f | (uint)(fVar18 == DAT_00160ca0) << 0x1e;
    uVar15 = uVar1 | (uint)(NAN(fVar18) || NAN(DAT_00160ca0)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) {
      uVar15 = uVar5 | (uint)(DAT_00160ca4 <= fVar18) << 0x1d;
      if (!SUB41(uVar15 >> 0x1d,0)) {
        fVar17 = fVar16 - DAT_00160ca0;
      }
    }
    else {
      fVar17 = fVar16 + DAT_00160ca0;
    }
    func_004FCEDC((int)(param_1 + 0x16a),fVar17);
  }
  uVar5 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar5 < 4) && (1 < uVar5)) {
    iVar6 = uVar5 - 2;
  }
  else {
    iVar6 = -1;
  }
  if ((iVar6 < 0) && (fVar16 = func_0058A404((int)param_1), (int)ALBW_AS_U32(fVar16) <= DAT_00160ca8)) {
    uVar5 = (uint)*(short *)((int)param_1 + 0x2e);
    if ((uVar5 & 0xff) != 0) {
      uVar5 = uVar5 & 0xff;
      if ((uVar5 < 4) && (1 < uVar5)) {
        iVar6 = uVar5 - 2;
      }
      else {
        iVar6 = -1;
      }
      if (-1 < iVar6) goto LAB_00160a00;
    }
    uVar5 = 0;
    if ((short)param_1[0x142] < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 2;
    }
    *(undefined1 *)((int)param_1 + 0x859) = uVar8;
    do {
      puVar7 = func_0015B580((int)param_1,uVar5);
      if (puVar7 != (undefined4 *)0x0) {
        uVar8 = 2;
        if (*(short *)(DAT_00160cac + (int)puVar7) < 1) {
          uVar8 = 0;
        }
        *(undefined1 *)((int)puVar7 + 0x859) = uVar8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
  }
LAB_00160a00:
  func_002AFEC4((int)param_1,-1,0x1e);
  uVar5 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar5 < 4) && (1 < uVar5)) {
    iVar6 = uVar5 - 2;
  }
  else {
    iVar6 = -1;
  }
  if (iVar6 < 0) {
    iVar6 = func_0015C534(param_1);
    if (iVar6 == 0) {
      func_003521F0((int)(param_1 + 0xc9),0);
    }
    else {
      func_003521F0((int)(param_1 + 0xc9),2);
    }
  }
  else {
    func_003521F0((int)(param_1 + 0xc9),1);
  }
  func_0015F8F4((int)param_1);
  uVar20 = DAT_00160cb0;
  uVar5 = param_1[0x388];
  if (uVar5 < (uint)param_1[0x389]) {
    uVar5 = uVar5 + 1;
    param_1[0x388] = uVar5;
  }
  local_30c = param_1 + 0x22f;
  if ((uVar5 < (uint)param_1[0x389]) ||
     (uVar5 = (uint)*(short *)((int)param_1 + 0x2e), (uVar5 & 0xff) == 0)) {
LAB_00160d10:
    if ((uint)param_1[0x388] < (uint)param_1[0x389]) goto LAB_00160d24;
    bVar13 = false;
  }
  else {
    uVar5 = uVar5 & 0xff;
    if ((uVar5 < 4) && (1 < uVar5)) {
      iVar6 = uVar5 - 2;
    }
    else {
      iVar6 = -1;
    }
    uVar5 = (iVar6 >> 0x1f) + 1;
    bVar13 = uVar5 != 0;
    if (!bVar13) {
      uVar5 = (uint)*(byte *)(param_1 + 0x26b);
    }
    if ((((bVar13 || uVar5 != 0) || ((short)param_1[0x142] < 1)) ||
        (*(char *)(param_1[0x144] + 4) != '\0')) ||
       (iVar6 = (int)(char)param_1[0x230], iVar6 == 0x16)) goto LAB_00160d10;
    bVar13 = iVar6 == 0x12;
    bVar14 = iVar6 == 0x18;
    if (!bVar13 && !bVar14) {
      iVar6 = param_1[0x386];
    }
    if (((bVar13 || bVar14) || iVar6 == 0) || (iVar6 = func_004F7A00(iVar6), iVar6 == 0))
    goto LAB_00160d10;
    iVar6 = *(int *)(param_1[0x386] + 0x34);
    local_31c = *(float *)(iVar6 + 0x14);
    local_318 = *(undefined4 *)(iVar6 + 0x18);
    local_314 = *(undefined4 *)(iVar6 + 0x1c);
    if (param_1[0xd1] == 0) {
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else {
      func_004A1B9C((int *)&local_2a8,param_1[0xd1],(uint *)s_Barrier_00160cb4);
      fVar16 = local_2a8;
      fVar17 = local_2a4;
    }
    func_00115C70(&local_2a8,&local_31c,(float *)(param_1 + 0xf4));
    local_32c = local_2a8;
    local_324 = local_2a0;
    local_328 = uVar20;
    func_00115DC8(&local_32c);
    fVar18 = SQRT(local_32c * local_32c + local_324 * local_324);
    uVar19 = local_318;
    iVar6 = func_0068C690(&local_32c);
    uVar21 = func_00114608(DAT_00160cbc,extraout_r1);
    uVar5 = (int)uVar21 + iVar6 & 0xe0000000;
    func_004D80A4(&local_32c,uVar5,DAT_00160cc0);
    local_328 = uVar20;
    func_00115D70(&local_2a4,&local_32c,fVar18);
    local_308 = ALBW_AS_U32(local_2a4);
    local_304 = local_2a0;
    uStack_300 = local_29c;
    func_00115C54(&local_2a4,(float *)&local_308,(float *)(param_1 + 0xf4));
    local_31c = local_2a4;
    local_314 = local_29c;
    local_2ac = 0;
    local_2b4 = 0;
    local_318 = uVar19;
    uStack_2b0 = uVar5;
    func_0049216C(&local_2e8,&local_2b4,&local_31c);
    if ((fVar16 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar16) + 0x1c) == fVar17)) {
      func_004A2D1C((int)ALBW_AS_U32(fVar16),&local_2e8);
    }
    iVar6 = DAT_00160cc4;
    param_1[0x389] = 0xc;
    param_1[0x38a] = iVar6;
    param_1[0x388] = 0;
    cVar2 = (char)param_1[0x230];
    if (cVar2 == '\r') {
LAB_00160d00:
      param_1[0xfa] = uVar5;
      func_0065836C(local_30c,0x18);
      goto LAB_00160d10;
    }
    if (cVar2 < '\x0e') {
      if (cVar2 == '\x02' || cVar2 == '\x03') goto LAB_00160d00;
    }
    else if (cVar2 == '\x0f' || cVar2 == '\x11') goto LAB_00160d00;
LAB_00160d24:
    bVar13 = true;
  }
  uVar5 = (param_1[0x167] & 0x80U) >> 7;
  if (bVar13) {
    param_1[0x167] = param_1[0x167] & 0xffffff7f;
  }
  iVar6 = func_004F70A8(param_1);
  if (iVar6 == 0) {
    if (uVar5 == 0) {
      uVar5 = param_1[0x167] & 0xffffff7f;
    }
    else {
      uVar5 = param_1[0x167] | 0x80;
    }
    param_1[0x167] = uVar5;
    return 0;
  }
  if (uVar5 == 0) {
    uVar5 = param_1[0x167] & 0xffffff7f;
  }
  else {
    uVar5 = param_1[0x167] | 0x80;
  }
  param_1[0x167] = uVar5;
  uVar5 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar5 < 4) && (1 < uVar5)) {
    iVar6 = uVar5 - 2;
  }
  else {
    iVar6 = -1;
  }
  if (((iVar6 < 0) && ((short)param_1[0x142] < 1)) && ((char)param_1[999] == '\0')) {
    func_00361610(*DAT_00161148,1);
    *(undefined1 *)(param_1 + 999) = 1;
  }
  if (((char)param_1[0x230] != '\x14' && (char)param_1[0x230] != '\x15') &&
     (iVar6 = func_004F8998(param_1,0,(char *)0x0), iVar6 != 0)) {
    func_0065836C(local_30c,0x14);
  }
  piVar4 = local_30c;
  piVar11 = (int *)local_30c[5];
  piVar9 = (int *)(local_30c[7] + (char)local_30c[1] * 8);
  uVar5 = *(uint *)(local_30c[7] + (char)local_30c[1] * 8 + 4);
  if ((uVar5 & 1) != 0) {
    piVar9 = (int *)(*piVar9 + *(int *)((int)piVar11 + ((int)uVar5 >> 1)));
  }
  (*(code *)*piVar9)();
  iVar6 = *piVar4;
  iVar10 = piVar4[4];
  *piVar4 = iVar6 + 1;
  if (iVar10 != 0) {
    fVar16 = (float)VectorUnsignedToFloat(iVar6 + 1,(byte)(uVar15 >> 0x15) & 3);
    func_00352210(iVar10,1,fVar16);
  }
  if ((uint)param_1[0x24b] < (uint)param_1[0x24c]) {
    param_1[0x24b] = param_1[0x24b] + 1;
  }
  if (*(char *)((int)param_1 + 0x9ae) == '\0') {
    if (*(char *)((int)param_1 + 0xf9d) != '\x01') goto LAB_00160eb8;
    uVar8 = 2;
  }
  else {
    uVar8 = 0;
  }
  *(undefined1 *)((int)param_1 + 0xf9d) = uVar8;
LAB_00160eb8:
  if ((uint)param_1[0x24e] < (uint)param_1[0x24f]) {
    param_1[0x24e] = param_1[0x24e] + 1;
  }
  if ((uint)param_1[0x251] < (uint)param_1[0x252]) {
    param_1[0x251] = param_1[0x251] + 1;
  }
  if ((uint)param_1[0x254] < (uint)param_1[0x255]) {
    param_1[0x254] = param_1[0x254] + 1;
  }
  if ((uint)param_1[0x238] < (uint)param_1[0x239]) {
    param_1[0x238] = param_1[0x238] + 1;
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_0015D6F4((int)param_1,extraout_r1_00,iVar10,piVar11);
  iVar6 = DAT_0016114c;
  pfVar12 = (float *)0x7fffffff;
  if (ALBW_AS_F32(param_1[0xf5]) < ALBW_AS_F32(param_1[3])) {
    param_1[0xf5] = param_1[3];
  }
  func_0051D2F4(param_1 + 0x3ed,param_1[0x3ee],iVar6,0x7fffffff,DAT_00161150);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x1,pfVar12);
  if (param_1[0x386] != 0) {
    func_004F790C(param_1[0x386],(float *)(param_1 + 0xf4),DAT_00161154);
  }
  if (param_1[600] != 0) {
    func_0026171C(param_1[600],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  if (((uint)param_1[0x390] < (uint)param_1[0x391]) &&
     (uVar5 = param_1[0x390] + 1, param_1[0x390] = uVar5, (uint)param_1[0x391] <= uVar5)) {
    local_310 = 0;
    local_30c = (int *)0x0;
    local_314 = 0;
    local_2e8 = 0.0;
    local_2e4 = 0;
    local_70 = 0;
    func_002DFF7C(&local_330);
    puVar7 = func_00161178(param_1);
    if ((puVar7 == (undefined4 *)0x0) ||
       (fVar16 = func_0058A404((int)puVar7), (int)ALBW_AS_U32(fVar16) <= DAT_00161158)) {
      local_330 = func_0019B04C(*DAT_00161160);
    }
    else {
      local_330 = func_0019B04C(*DAT_0016115c);
    }
    local_2dc = 0xffff;
    local_2e0 = (undefined2)param_1[0x15];
    pfVar12 = (float *)func_00520FC0();
    func_00115C70(&local_40,(float *)(param_1 + 0x38d),pfVar12);
    local_58 = local_40;
    local_50 = local_38;
    local_54 = uVar20;
    func_00115DC8(&local_58);
    func_00115D70(&local_40,&local_58,DAT_00161164);
    local_64 = local_40;
    uStack_60 = uStack_3c;
    uStack_5c = local_38;
    func_00115C54(&local_40,(float *)(param_1 + 0xf4),&local_64);
    local_32c = local_40;
    local_328 = uStack_3c;
    local_324 = ALBW_AS_F32(local_38);
    pfVar12 = (float *)func_00520FC0();
    func_00115C70(&local_40,pfVar12,(float *)(param_1 + 0x38d));
    local_4c = local_40;
    uStack_48 = uStack_3c;
    uStack_44 = local_38;
    local_310 = func_0068C690(&local_4c);
    local_308 = ALBW_AS_U32(ALBW_AS_F32(CONCAT22(0xffff,(undefined2)local_308)));
    local_304 = 9.18355e-41;
    local_2e4 = param_1[0xb3];
    return func_004C43E0(*DAT_00161168,&local_330);
  }
  return 0;
}

