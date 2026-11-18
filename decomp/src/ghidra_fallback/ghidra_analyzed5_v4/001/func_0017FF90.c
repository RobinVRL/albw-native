// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00120A64(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_005211D8(int param_1);
extern int func_00522E00(int param_1);
extern int func_00556DC0(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern int DAT_00180320;
extern float DAT_00180324;
extern float DAT_00180328;
extern int *DAT_0018032c;
extern int *DAT_00180330;
extern int DAT_00180334;
extern int DAT_00180338;
extern float DAT_0018033c;
extern int DAT_001804ac;
extern int DAT_001804b0;
extern float DAT_001804b4;
extern float DAT_001804b8;
extern float DAT_001804bc;
extern float DAT_001804c0;
extern float DAT_001804c4;
extern float DAT_001804c8;
extern undefined4 *DAT_001804cc;
extern int DAT_001804d0;

// USA 0017FF90 <- EU 0017FF90 (Ghidra, non-matching)
// GLOBAL DAT_00180320 int
// GLOBAL DAT_00180324 float
// GLOBAL DAT_00180328 float
// GLOBAL DAT_0018032c int *
// GLOBAL DAT_00180330 int *
// GLOBAL DAT_00180334 int
// GLOBAL DAT_00180338 int
// GLOBAL DAT_0018033c float
// GLOBAL DAT_001804ac int
// GLOBAL DAT_001804b0 int
// GLOBAL DAT_001804b4 float
// GLOBAL DAT_001804b8 float
// GLOBAL DAT_001804bc float
// GLOBAL DAT_001804c0 float
// GLOBAL DAT_001804c4 float
// GLOBAL DAT_001804c8 float
// GLOBAL DAT_001804cc undefined4 *
// GLOBAL DAT_001804d0 int

undefined4 func_0017FF90(int *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  uint in_fpscr;
  float in_s0;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  #define local_3c (*(float *)(albw_frame + 0x44))
  #define fStack_38 (*(float *)(albw_frame + 0x48))
  #define local_34 (*(float *)(albw_frame + 0x4c))
  if ((uint)param_1[0x26c] < (uint)param_1[0x26d]) {
    param_1[0x26c] = param_1[0x26c] + 1;
  }
  pfVar5 = (float *)func_00520FC0();
  local_3c = *pfVar5;
  fStack_38 = pfVar5[1];
  local_34 = pfVar5[2];
  if ((char)param_1[0x2fc] != '\0') {
    func_00115C70(&local_3c,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x2a2));
    in_s0 = local_3c * local_3c + local_34 * local_34;
    if ((int)ALBW_AS_U32(in_s0) < DAT_00180320) {
      in_s0 = DAT_00180324;
      func_0068A3EC(&local_3c,DAT_00180324);
    }
    func_00115C54(&local_3c,&local_3c,(float *)(param_1 + 0x2a2));
  }
  func_00115C70(&local_6c,&local_3c,(float *)(param_1 + 0xf4));
  fVar16 = DAT_00180328;
  if ((uint)param_1[0x26c] < (uint)param_1[0x26d]) {
    if (param_1[0x26d] - param_1[0x26c] == 1) {
      uVar6 = func_00522E00(*DAT_0018032c);
      uVar11 = 0;
      func_004CE804(param_1[0x1e8],uVar6 & 0xffff,0,0,in_s0);
      cVar3 = func_00556DC0(*DAT_00180330);
      if (cVar3 != '\0') {
        pfVar14 = (float *)(param_1 + 0xf4);
        pfVar7 = (float *)func_00520FC0();
        pfVar12 = (float *)(param_1 + 0x293);
        func_00115C70(&local_5c,pfVar14,pfVar12);
        pfVar5 = pfVar12;
        func_00115C70(&local_48,pfVar7,pfVar12);
        in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(fVar16 <= local_48 * local_5c + local_44 * local_58 + local_40 * local_54)
                   << 0x1d;
        if (((!SUB41(in_fpscr >> 0x1d,0)) &&
            (DAT_00180334 <
             (int)ALBW_AS_U32(((*pfVar12 - *pfVar14) * (*pfVar12 - *pfVar14) +
                   (ALBW_AS_F32(param_1[0x294]) - ALBW_AS_F32(param_1[0xf5])) *
                   (ALBW_AS_F32(param_1[0x294]) - ALBW_AS_F32(param_1[0xf5])) +
                  (ALBW_AS_F32(param_1[0x295]) - ALBW_AS_F32(param_1[0xf6])) *
                  (ALBW_AS_F32(param_1[0x295]) - ALBW_AS_F32(param_1[0xf6])))))) ||
           (iVar8 = func_00120A64(pfVar14,pfVar7,pfVar5,uVar11), iVar8 != 0)) {
          param_1[0xda] = param_1[0x293];
          param_1[0xdb] = param_1[0x294];
          param_1[0xdc] = param_1[0x295];
          param_1[0xf4] = param_1[0x293];
          param_1[0xf5] = param_1[0x294];
          param_1[0xf6] = param_1[0x295];
        }
      }
    }
    local_7c = ALBW_AS_F32(param_1[0x293]);
    local_78 = ALBW_AS_F32(param_1[0x294]);
    local_74 = ALBW_AS_F32(param_1[0x295]);
    func_00115C70(&local_7c,&local_7c,(float *)(param_1 + 0xf4));
    fVar15 = local_6c * local_7c + local_68 * local_78 + local_64 * local_74;
    uVar6 = in_fpscr & 0xfffffff;
    uVar11 = uVar6 | (uint)(fVar16 < fVar15) << 0x1f | (uint)(fVar16 == fVar15) << 0x1e;
    in_fpscr = uVar11 | (uint)(NAN(fVar16) || NAN(fVar15)) << 0x1c;
    bVar1 = (byte)(uVar11 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      in_fpscr = uVar6 | (uint)(local_7c == fVar16) << 0x1e;
      bVar4 = false;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar6 | (uint)(local_74 == fVar16) << 0x1e;
        bVar4 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (!bVar4) {
        iVar8 = func_0068C690(&local_7c);
        goto LAB_00180214;
      }
    }
  }
  iVar8 = func_0068C690(&local_6c);
LAB_00180214:
  iVar9 = DAT_00180338;
  if ((uint)param_1[0x263] < (uint)param_1[0x264]) {
    iVar9 = param_1[0x263] + 1;
    param_1[0x263] = iVar9;
    func_0051D39C(param_1 + 0xfa,iVar8,param_1[0x264] - iVar9);
    param_1[0xf7] = (int)ALBW_AS_U32(fVar16);
    param_1[0xf8] = (int)ALBW_AS_U32(fVar16);
    param_1[0xf9] = (int)ALBW_AS_U32(fVar16);
  }
  else {
    iVar10 = param_1[0x2af];
    piVar13 = param_1 + 0x266;
    if (*(char *)((int)param_1 + 0x852) == '\x04' || *(char *)((int)param_1 + 0x852) == '\x03') {
      if ((iVar10 < 0x34000000) && ((uint)param_1[0x267] <= (uint)param_1[0x266])) {
        param_1[0x267] = 8;
        param_1[0x268] = iVar9;
        *piVar13 = 0;
        (**(code **)(*param_1 + 0xac))(param_1,0,8);
        *(undefined1 *)(param_1 + 0x2fc) = 0;
        return 0;
      }
      fVar15 = DAT_0018033c;
      if ((uint)param_1[0x267] <= (uint)param_1[0x266]) {
        iVar9 = DAT_001804b0;
        if (iVar10 < DAT_001804ac) {
          (**(code **)(*param_1 + 0xac))(param_1,3);
          param_1[0x267] = 6;
        }
        else {
          (**(code **)(*param_1 + 0xac))(param_1,4,6);
          param_1[0x267] = 6;
        }
        param_1[0x268] = iVar9;
        *piVar13 = 0;
      }
      fVar17 = ALBW_AS_F32(param_1[0x2af]);
      uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_001804b4 < fVar17) << 0x1f;
      fVar18 = DAT_001804b8;
      if ((SUB41(uVar6 >> 0x1f,0) != (NAN(DAT_001804b4) || NAN(fVar17))) &&
         (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar17 < DAT_001804c0) << 0x1f,
         fVar18 = DAT_001804bc, SUB41(uVar6 >> 0x1f,0) != (NAN(fVar17) || NAN(DAT_001804c0)))) {
        fVar18 = (DAT_001804c8 * (fVar17 - DAT_001804b4)) / DAT_001804c4 + DAT_001804b8;
      }
      uVar6 = uVar6 & 0xfffffff | (uint)(fVar18 < fVar16) << 0x1f | (uint)(fVar18 == fVar16) << 0x1e
      ;
      bVar1 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar18) || NAN(fVar16))) {
        fVar16 = (float)VectorSignedToFloat(*DAT_001804cc,(byte)(uVar6 >> 0x15) & 3);
        func_0051D2F4(param_1 + 0xfa,iVar8,0,(int)(fVar16 * fVar18),fVar15);
      }
      *(float *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = fVar18;
    }
    else if ((iVar10 < 0x34000001) || ((uint)param_1[0x266] < (uint)param_1[0x267])) {
      func_0051D2F4(param_1 + 0xfa,iVar8,0,DAT_001804d0,DAT_0018033c);
      *(undefined1 *)(param_1 + 0x2fc) = 0;
    }
    else {
      iVar8 = DAT_00180338;
      (**(code **)(*param_1 + 0xac))(param_1,3,8);
      param_1[0x267] = 8;
      param_1[0x268] = iVar8;
      *piVar13 = 0;
    }
    bVar4 = func_005211D8((int)param_1);
    sVar2 = 0;
    if (bVar4) {
      sVar2 = (short)param_1[0xe];
    }
    if ((bVar4 && sVar2 != 0) && (func_00588C14((int)param_1,1,0), (char)param_1[0x259] == '\x05'))
    {
      *(undefined1 *)((int)param_1 + 0xbed) = 1;
      return func_00659400(param_1 + 600,0);
    }
  }
  return 0;
}

