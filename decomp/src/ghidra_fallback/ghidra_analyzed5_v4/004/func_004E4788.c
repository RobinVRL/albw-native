// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004E4388(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_00521184();
extern int func_005211D8(int param_1);
extern int func_00539200(int param_1);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e4ae0;
extern int DAT_004e4ae4;
extern float DAT_004e4ae8;
extern undefined4 *DAT_004e4aec;
extern float DAT_004e4af0;
extern float DAT_004e4af4;
extern float DAT_004e4af8;
extern float DAT_004e4afc;
extern undefined DAT_004e4b00;
extern int DAT_004e4b14;
extern float DAT_004e4b18;
extern float DAT_004e4b1c;
extern float DAT_004e4b20;
extern float DAT_004e4b24;
extern undefined4 DAT_004e4b28;
extern char s__SE_BombL_MOVE_004e4b03[];
extern char s_cf_004e4b03[];
extern undefined4 _DAT_004e4b00;

// USA 004E4788 <- EU 004E4760 (Ghidra, non-matching)
// GLOBAL DAT_004e4ae0 float
// GLOBAL DAT_004e4ae4 int
// GLOBAL DAT_004e4ae8 float
// GLOBAL DAT_004e4aec undefined4 *
// GLOBAL DAT_004e4af0 float
// GLOBAL DAT_004e4af4 float
// GLOBAL DAT_004e4af8 float
// GLOBAL DAT_004e4afc float
// GLOBAL DAT_004e4b00 undefined
// GLOBAL DAT_004e4b14 int
// GLOBAL DAT_004e4b18 float
// GLOBAL DAT_004e4b1c float
// GLOBAL DAT_004e4b20 float
// GLOBAL DAT_004e4b24 float
// GLOBAL DAT_004e4b28 undefined4
// GLOBAL s_cf_004e4b03 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004E4788(int *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fparam_1;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_38 (*(int *)(albw_frame + 0x68))
  #define local_34 (*(char * *)(albw_frame + 0x6c))
  iVar5 = func_00521184((int)param_1);
  fVar11 = DAT_004e4ae8;
  fVar12 = DAT_004e4ae0;
  iVar6 = param_1[0x11f];
  if (**(int **)(iVar6 + 0x14) == 1) {
    fVar9 = ALBW_AS_F32(param_1[0x148]);
    fVar13 = *(float *)(*(int *)(iVar6 + 0x14) + 8);
    bVar4 = SBORROW4((int)ALBW_AS_U32(fVar9),DAT_004e4ae4);
    iVar1 = (int)ALBW_AS_U32(fVar9) - DAT_004e4ae4;
    if ((int)ALBW_AS_U32(fVar9) < DAT_004e4ae4) {
      bVar4 = SBORROW4((int)ALBW_AS_U32(fVar13),0x3f800000);
      iVar1 = (int)ALBW_AS_U32(fVar13) + -0x3f800000;
    }
    if (iVar1 < 0 == bVar4) {
      fparam_1 = DAT_004e4af4 * (fVar9 - DAT_004e4af8);
      fVar9 = fparam_1 / DAT_004e4afc + DAT_004e4af4;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x14);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar13 == DAT_004e4ae0) << 0x1e;
      fVar9 = fVar12;
      fparam_1 = fVar12;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        *(float *)(iVar6 + 8) = DAT_004e4ae0;
        *(undefined1 *)(iVar6 + 0x26) = 1;
      }
    }
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar12) << 0x1f | (uint)(fVar9 == fVar12) << 0x1e;
    bVar2 = (byte)(uVar8 >> 0x18);
    *(float *)(*(int *)(param_1[0x11f] + 0x14) + 0x10) = fVar9;
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(fVar12))) {
      fparam_1 = (float)VectorSignedToFloat(*DAT_004e4aec,(byte)(uVar8 >> 0x15) & 3);
      func_0051D2F4(param_1 + 0xfa,iVar5,0,(int)(fparam_1 * fVar9),DAT_004e4af0);
    }
    if ((int)ALBW_AS_U32(fVar13) < 0x40000000) {
      *(undefined1 *)(param_1 + 0x1b3) = 0;
    }
    if (((fVar12 < ALBW_AS_F32(param_1[0x148])) && ((char)param_1[0x1b3] == '\0')) &&
       (_DAT_004e4b00 <= *(int *)(*(int *)(param_1[0x11f] + 0x14) + 8))) {
      func_0010A464(&local_98);
      local_34 = s__SE_BombL_MOVE_004e4b03 + 1;
      local_38 = DAT_004e4b14;
      func_00150A84(param_1,&local_38,(int)&local_98);
      bVar4 = func_00539200((int)&local_98);
      if (bVar4) {
        func_0025B860((int)&local_98,0,ALBW_AS_F32(param_1[0x148]) * fVar11,fparam_1);
      }
      *(undefined1 *)(param_1 + 0x1b3) = 1;
      func_0025B874(&local_98);
    }
    goto LAB_004e49a4;
  }
  if (**(int **)(iVar6 + 0x14) != 3) goto LAB_004e49a4;
  iVar6 = *(int *)(iVar6 + 0x14);
  if (*(char *)(iVar6 + 0x1c) == '\0') {
    if (*(float *)(iVar6 + 0x10) < DAT_004e4ae0) {
      if (*(float *)(iVar6 + 8) <= DAT_004e4ae0) goto LAB_004e495c;
    }
    else if (*(float *)(iVar6 + 8) == *(float *)(iVar6 + 0x14)) {
LAB_004e495c:
      puVar7 = (uint *)func_002C11E8((int *)&local_98,1,4,0);
      func_0016898C(param_1[0x11f],puVar7);
    }
  }
  uVar8 = param_1[0x130];
  uVar10 = param_1[0x131];
  bVar4 = uVar8 < uVar10;
  if (bVar4) {
    uVar8 = uVar8 + 1;
  }
  if (bVar4) {
    param_1[0x130] = uVar8;
  }
  func_0051D39C(param_1 + 0xfa,iVar5,uVar10 - uVar8);
LAB_004e49a4:
  func_004E4388((int)param_1);
  bVar4 = func_0052107C((int)param_1);
  if (bVar4) {
    if (((*(char *)((int)param_1 + 0x6c9) != '\0') &&
        (0x40000000 < (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x149]) - ALBW_AS_F32(param_1[0xf5]))))) &&
       ((char)param_1[0x122] == '\x04' || (char)param_1[0x122] == '\x03')) {
      func_0066A8D8(param_1 + 0x121,6);
    }
    fVar11 = DAT_004e4b18;
    param_1[0x149] = param_1[0xf5];
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) - fVar11));
    param_1[0xf8] = (int)ALBW_AS_U32(fVar12);
  }
  else {
    fVar11 = ALBW_AS_F32(param_1[0xf8]) - DAT_004e4b1c;
    if (ALBW_AS_F32(param_1[0xf8]) - DAT_004e4b1c < DAT_004e4b20) {
      fVar11 = DAT_004e4b20;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0x13e));
  fVar11 = DAT_004e4b24;
  local_88 = DAT_004e4b24;
  param_1[0x13b] = (int)ALBW_AS_U32(fVar12);
  param_1[0x13c] = (int)ALBW_AS_U32(fVar12);
  param_1[0x13d] = (int)ALBW_AS_U32(fVar12);
  param_1[0x13e] = (int)ALBW_AS_U32(fVar12);
  param_1[0x13f] = (int)ALBW_AS_U32(fVar12);
  uVar3 = DAT_004e4b28;
  param_1[0x140] = (int)ALBW_AS_U32(fVar12);
  local_8c = fVar12;
  local_84 = fVar12;
  iVar5 = func_0014EEB8((int)param_1,&local_8c,uVar3,fVar11);
  if (iVar5 == 0) {
    iVar5 = func_00520FF8((int)param_1);
    if (iVar5 == 0) {
      bVar4 = func_005211D8((int)param_1);
      if (bVar4) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      }
      return 0;
    }
  }
  else {
    iVar5 = func_00520FF8((int)param_1);
    if (iVar5 == 0) {
      bVar4 = func_0052107C((int)param_1);
      if (!bVar4) {
        return 0;
      }
      local_98 = ALBW_AS_F32(param_1[0x13b]);
      local_94 = ALBW_AS_F32(param_1[0x13c]);
      local_90 = ALBW_AS_F32(param_1[0x13d]);
      func_00115DC8(&local_98);
      func_00115DAC((float *)(param_1 + 0xf7),&local_98,(float *)(param_1 + 0xf7),
                    -(ALBW_AS_F32(param_1[0xf7]) * local_98 + ALBW_AS_F32(param_1[0xf8]) * local_94) +
                    -(ALBW_AS_F32(param_1[0xf9]) * local_90));
      if ((char)param_1[0x122] == '\x03') {
        param_1[0xf7] = (int)ALBW_AS_U32(fVar12);
        param_1[0xf9] = (int)ALBW_AS_U32(fVar12);
      }
      return 0;
    }
  }
  return func_0066A8D8(param_1 + 0x121,5);
}

