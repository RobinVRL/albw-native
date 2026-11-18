#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0018D524(int param_1);
extern int func_0018DC1C(int *param_1,int param_2);
extern int func_0018E15C(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_004EC410(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern float DAT_0018d9b0;
extern int *DAT_0018d9b4;
extern float DAT_0018d9b8;
extern uint DAT_0018d9bc;
extern int *DAT_0018d9c0;
extern float DAT_0018d9c4;
extern char s_SE_PL_HookShot_RELEASE_0018d9e4[];
extern char s_SE_PL_HookShot_RELEASE_Lv2_0018d9c8[];

// USA 0018D728 <- EU 0018D728 (Ghidra, non-matching)
// GLOBAL DAT_0018d9b0 float
// GLOBAL DAT_0018d9b4 int *
// GLOBAL DAT_0018d9b8 float
// GLOBAL DAT_0018d9bc uint
// GLOBAL DAT_0018d9c0 int *
// GLOBAL DAT_0018d9c4 float
// GLOBAL s_SE_PL_HookShot_RELEASE_0018d9e4 string
// GLOBAL s_SE_PL_HookShot_RELEASE_Lv2_0018d9c8 string

undefined4 func_0018D728(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define fStack_78 (*(float *)(albw_frame + 0x8))
  #define fStack_74 (*(float *)(albw_frame + 0xc))
  #define local_68 (*(char * *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_50 (*(char * *)(albw_frame + 0x30))
  #define fStack_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  func_0018E15C((int)param_1);
  if (*(short *)((int)param_1 + 0x55a) == 0) {
    pfVar7 = (float *)(param_1 + 0x136);
    func_00115D70((float *)&local_68,(float *)(param_1 + 0xf7),DAT_0018d9b0);
    local_7c = local_68;
    fStack_78 = local_64;
    fStack_74 = local_60;
    func_00115C70(pfVar7,pfVar7,(float *)&local_7c);
    if (*(short *)((int)param_1 + 0x55a) == 0) {
      local_68 = (char *)param_1[0x133];
      local_64 = ALBW_AS_F32(param_1[0x134]);
      local_60 = ALBW_AS_F32(param_1[0x135]);
      func_00115C70((float *)&local_50,(float *)&local_68,pfVar7);
      uVar13 = (ulonglong)DAT_0018d9bc;
      iVar5 = 1;
      pfVar6 = (float *)(param_1 + 0x133);
      fVar11 = SQRT(ALBW_AS_F32(local_50) * ALBW_AS_F32(local_50) + local_48 * local_48);
      fVar12 = DAT_0018d9b8;
      while ((char)param_1[0x128] == '\0') {
        uVar4 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar12) << 0x1f |
                (uint)(fVar11 == fVar12) << 0x1e;
        uVar8 = uVar4 | (uint)(NAN(fVar11) || NAN(fVar12)) << 0x1c;
        bVar1 = (byte)(uVar4 >> 0x18);
        if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
LAB_0018d910:
          func_00115C70(&local_80,(float *)&local_68,pfVar6);
          *pfVar6 = ALBW_AS_F32(local_68);
          param_1[0x134] = (int)ALBW_AS_U32(local_64);
          param_1[0x135] = (int)ALBW_AS_U32(local_60);
          func_0018D524((int)param_1);
          break;
        }
        fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar8 >> 0x15) & 3);
        local_7c = local_50;
        fStack_78 = fStack_4c;
        fStack_74 = local_48;
        fVar9 = fVar9 * ALBW_AS_F32(uVar13);
        if (fVar11 <= fVar9) {
          fVar9 = fVar11;
        }
        fVar10 = SQRT(ALBW_AS_F32(local_50) * ALBW_AS_F32(local_50) + fStack_4c * fStack_4c +
                      local_48 * local_48);
        uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar12) << 0x1f |
                (uint)(fVar10 == fVar12) << 0x1e;
        uVar8 = uVar4 | (uint)(NAN(fVar10) || NAN(fVar12)) << 0x1c;
        bVar1 = (byte)(uVar4 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
          fVar9 = fVar9 / fVar10;
          fStack_74 = local_48 * fVar9;
          local_7c = (char *)ALBW_PTR_BITS((ALBW_AS_F32(local_50) * fVar9));
          fStack_78 = fStack_4c * fVar9;
        }
        func_00115C54(pfVar6,pfVar7,(float *)&local_7c);
        iVar3 = *(int *)param_1[0x10b];
        *(float *)(iVar3 + 4) = *pfVar6;
        *(int *)(iVar3 + 8) = param_1[0x134];
        *(int *)(iVar3 + 0xc) = param_1[0x135];
        func_004356B4(*(int **)param_1[0x10b]);
        func_0018DC1C(param_1,1);
        fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar8 >> 0x15) & 3);
        fVar9 = fVar9 * ALBW_AS_F32(uVar13);
        uVar4 = uVar8 & 0xfffffff | (uint)(fVar9 < fVar11) << 0x1f;
        in_fpscr = uVar4 | (uint)(NAN(fVar9) || NAN(fVar11)) << 0x1c;
        if ((byte)(uVar4 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          if ((char)param_1[0x128] == '\0') goto LAB_0018d910;
          break;
        }
        iVar5 = iVar5 + 1;
      }
      goto LAB_0018d798;
    }
  }
  func_0018DC1C(param_1,0);
LAB_0018d798:
  piVar2 = DAT_0018d9b4;
  *(short *)((int)param_1 + 0x55a) = *(short *)((int)param_1 + 0x55a) + 1;
  if (*(char *)((int)param_1 + 0x562) != '\0') {
    return func_004EC410(*piVar2);
  }
  uVar4 = func_0055696C(*DAT_0018d9c0,0xb);
  local_80 = DAT_0018d9c4;
  if (uVar4 < 3) {
    local_7c = s_SE_PL_HookShot_RELEASE_0018d9e4;
    return func_004E9BEC(*piVar2,(int *)&local_80,0);
  }
  local_7c = s_SE_PL_HookShot_RELEASE_Lv2_0018d9c8;
  return func_004E9BEC(*piVar2,(int *)&local_80,0);
}

