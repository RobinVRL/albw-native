// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00172210(int param_1);
extern int func_001CFB38(int param_1,undefined4 param_2);
extern int func_001CFBC4(int *param_1);
extern int func_001D134C(int param_1);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0052107C(int param_1);
extern int func_005568E8(int param_1);
extern int func_005569C8(int param_1);
extern int func_00556D04(int param_1);
extern int func_00556D48(int param_1);
extern int func_00556D7C(int param_1);
extern int func_00556DC0(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001d24e4;
extern int *DAT_001d24e8;
extern undefined4 DAT_001d24ec;
extern int DAT_001d24f0;
extern float DAT_001d24f4;
extern float DAT_001d24f8;
extern float DAT_001d24fc;
extern int DAT_001d2500;
extern undefined4 DAT_001d2504;
extern undefined4 DAT_001d2508;
extern undefined4 DAT_001d250c;
extern int DAT_001d2510;
extern int *DAT_001d2514;
extern uint DAT_001d2518;
extern float DAT_001d251c;
extern int *DAT_001d2600;
extern int *DAT_001d2604;
extern float DAT_001d2608;
extern float DAT_001d260c;
extern float DAT_001d2610;

// USA 001D2078 <- EU 001D2078 (Ghidra, non-matching)
// GLOBAL DAT_001d24e4 int *
// GLOBAL DAT_001d24e8 int *
// GLOBAL DAT_001d24ec undefined4
// GLOBAL DAT_001d24f0 int
// GLOBAL DAT_001d24f4 float
// GLOBAL DAT_001d24f8 float
// GLOBAL DAT_001d24fc float
// GLOBAL DAT_001d2500 int
// GLOBAL DAT_001d2504 undefined4
// GLOBAL DAT_001d2508 undefined4
// GLOBAL DAT_001d250c undefined4
// GLOBAL DAT_001d2510 int
// GLOBAL DAT_001d2514 int *
// GLOBAL DAT_001d2518 uint
// GLOBAL DAT_001d251c float
// GLOBAL DAT_001d2600 int *
// GLOBAL DAT_001d2604 int *
// GLOBAL DAT_001d2608 float
// GLOBAL DAT_001d260c float
// GLOBAL DAT_001d2610 float

undefined4 func_001D2078(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc8 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  byte *pbVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  pbVar16 = (byte *)(param_1 + 0x140);
  pfVar14 = (float *)&stack0xffffffc8;
  piVar17 = param_1 + 0x13f;
  if (0 < *(short *)((int)param_1 + 0x5c2)) {
    *(short *)((int)param_1 + 0x5c2) = *(short *)((int)param_1 + 0x5c2) + -1;
  }
  piVar15 = (int *)((char)param_1[0x140] * 8 + 4);
  uVar7 = *(uint *)(param_1[0x146] + (int)piVar15);
  pcVar10 = *(code **)(param_1[0x146] + (char)param_1[0x140] * 8);
  if ((uVar7 & 1) != 0) {
    pcVar10 = *(code **)(pcVar10 + *(int *)(param_1[0x144] + ((int)uVar7 >> 1)));
  }
  (*pcVar10)((int)(param_1[0x144]) + ((int)uVar7 >> 1));
  iVar11 = *piVar17;
  pfVar13 = (float *)param_1[0x143];
  *piVar17 = iVar11 + 1;
  if (pfVar13 != (float *)0x0) {
    fVar18 = (float)VectorUnsignedToFloat(iVar11 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)pfVar13,1,fVar18);
    iVar11 = extraout_r1;
  }
  piVar2 = DAT_001d24e4;
  if (*(char *)((int)param_1 + 0x5df) == '\x02') {
    return 0;
  }
  if ((char)param_1[0x178] == '\x01') {
    func_00169A80((int *)param_1[0x13e],iVar11,pfVar13,piVar15);
    func_00168E9C((int *)param_1[0x13e],param_1[0x13d],(int *)0x0);
    func_001D134C((int)param_1);
    piVar17 = DAT_001d24e8;
    if (*(char *)(*DAT_001d24e8 + 0x70) != '\0') {
      return 0;
    }
    if ((int *)param_1[0x148] == (int *)0x0) {
      return 0;
    }
    if (*(int *)param_1[0x148] == 0) {
      return 0;
    }
    bVar3 = func_005569C8(*piVar2);
    if (bVar3) {
      return 0;
    }
    piVar15 = (int *)param_1[0x148];
    iVar11 = func_005568E8(*piVar2);
    if (*piVar15 != iVar11) {
      return 0;
    }
    func_00172210(*piVar17);
    uVar12 = DAT_001d24ec;
    puVar8 = (undefined4 *)param_1[0x148];
    *puVar8 = 0;
    puVar8[1] = uVar12;
    return 0;
  }
  sVar6 = (short)param_1[0x175];
  if ((sVar6 != 0) && (*(short *)(param_1 + 0x175) = sVar6 + -1, sVar6 == 1)) {
    pfVar13 = (float *)0x0;
    func_00588C14((int)param_1,0,0);
    iVar11 = DAT_001d24f0;
    *(undefined1 *)((int)param_1 + 0x5d6) = 0;
    *(undefined1 *)((int)param_1 + 0x391) = 1;
    param_1[0xeb] = iVar11;
  }
  if (((*(char *)((int)param_1 + 0x5db) != '\0') && (bVar3 = func_00588BF0((int)param_1,0), bVar3))
     && ((short)param_1[0x175] == 0)) {
    *(undefined1 *)((int)param_1 + 0x5d6) = 0;
  }
  fVar18 = DAT_001d24f4;
  bVar1 = *pbVar16;
  if ((bVar1 != 4 && bVar1 != 6) && bVar1 != 5) {
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(DAT_001d24fc <= ALBW_AS_F32(param_1[0xf8]) - DAT_001d24f8) << 0x1d;
    fVar19 = ALBW_AS_F32(param_1[0xf8]) - DAT_001d24f8;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar19 = DAT_001d24fc;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar19);
    bVar3 = func_0052107C((int)param_1);
    if (bVar3) {
      if (*(char *)((int)param_1 + 0x63f) != '\0') {
        func_0065C598(piVar17,4);
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar18);
    }
  }
  iVar11 = func_00556D48(*piVar2);
  if (((iVar11 != 0) || (iVar11 = func_00556D7C(*piVar2), iVar11 != 0)) ||
     ((cVar4 = func_00556DC0(*piVar2), cVar4 != '\0' ||
      (iVar11 = func_00556D04(*piVar2), uVar12 = extraout_r1_00, iVar11 != 0)))) {
    iVar11 = func_00520FC0();
    fVar19 = *(float *)(iVar11 + 4);
    fVar20 = ALBW_AS_F32(param_1[0xf5]);
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar20) << 0x1f |
            (uint)(fVar19 == fVar20) << 0x1e;
    in_fpscr = uVar7 | (uint)(NAN(fVar19) || NAN(fVar20)) << 0x1c;
    bVar1 = (byte)(uVar7 >> 0x18);
    uVar12 = extraout_r1_01;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      iVar11 = func_00520FC0();
      param_1[0xf5] = *(int *)(iVar11 + 4);
      param_1[0xf8] = (int)ALBW_AS_U32(fVar18);
      uVar12 = extraout_r1_02;
    }
  }
  bVar1 = *pbVar16;
  if (bVar1 == 4 || bVar1 == 5) goto LAB_001d25b0;
  if (bVar1 != 3) {
    iVar11 = param_1[0xf8];
    func_0014FAFC((int)param_1,param_1[0xfa],ALBW_AS_F32(param_1[0x171]));
    param_1[0xf8] = iVar11;
  }
  pfVar13 = (float *)(param_1 + 0xf7);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar13);
  iVar11 = DAT_001d2500;
  uVar5 = *(ushort *)((int)param_1 + 0x5c2);
  bVar3 = uVar5 == 0;
  if (bVar3) {
    uVar5 = (ushort)*pbVar16;
  }
  if (bVar3 && uVar5 == 2) {
    sVar6 = (short)param_1[0x170] + 1;
    *(short *)(param_1 + 0x170) = sVar6;
    VectorUnsignedToFloat(sVar6 * iVar11 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    func_004D7F70((float *)&stack0xffffffc8,param_1[0xfa]);
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)&stack0xffffffc8);
    pfVar13 = pfVar14;
  }
  iVar11 = DAT_001d2510;
  if (*pbVar16 == 6) {
    iVar11 = DAT_001d2510 + -0x40;
  }
  func_0034CA24((undefined4 *)param_1[0x149]);
  if (*pbVar16 != 5 && *pbVar16 != 6) {
    pfVar13 = (float *)(param_1 + 0x14e);
    piVar15 = DAT_001d2514;
    func_0014E2A0((int)param_1,param_1[0x15b],pfVar13,(uint)DAT_001d2514,0,0);
  }
  if (*(int *)param_1[0x149] == 0) {
LAB_001d2468:
    if (*pbVar16 != 6) goto LAB_001d2474;
  }
  else {
    if (*pbVar16 != 3) {
      func_0065C598(piVar17,3);
      goto LAB_001d2468;
    }
LAB_001d2474:
    pfVar13 = (float *)param_1[0x15b];
    piVar15 = param_1 + 0x152;
    local_2c = fVar18;
    local_28 = fVar18;
    local_24 = fVar18;
    func_0014FA44((int)param_1,(int)&local_2c,pfVar13,piVar15,DAT_001d2518,0,0);
    if ((local_2c == fVar18 && local_28 == fVar18) && local_24 == fVar18) {
      *(float *)(*(int *)(param_1[0x13e] + 0x14) + 0x10) = DAT_001d251c;
    }
    else {
      fVar18 = DAT_001d251c;
      iVar9 = func_0068C690(&local_2c);
      piVar15 = DAT_001d2604;
      fVar19 = DAT_001d2608;
      func_0051D2F4(param_1 + 0xfa,iVar9,*DAT_001d2600,(int)DAT_001d2604,DAT_001d2608);
      fVar18 = SQRT(local_2c * local_2c + local_24 * local_24) * DAT_001d260c + fVar18;
      if (0x3fc00000 < (int)ALBW_AS_U32(fVar18)) {
        fVar18 = DAT_001d2610;
      }
      *(float *)(*(int *)(param_1[0x13e] + 0x14) + 0x10) = fVar18;
      func_00115D70(&local_2c,&local_2c,fVar19);
      pfVar13 = &local_2c;
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar13);
    }
  }
  func_001CFB38((int)param_1,iVar11);
  uVar12 = extraout_r1_03;
LAB_001d25b0:
  func_00169A80((int *)param_1[0x13e],uVar12,pfVar13,piVar15);
  func_00168E9C((int *)param_1[0x13e],param_1[0x13d],(int *)0x0);
  func_001D134C((int)param_1);
  bVar1 = *pbVar16;
  if ((bVar1 != 4 && bVar1 != 0) && (bVar1 != 1)) {
    return func_001CFBC4(param_1);
  }
  return 0;
}

