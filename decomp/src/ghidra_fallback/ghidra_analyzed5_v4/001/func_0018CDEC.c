#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0018D524(int param_1);
extern int func_0018E15C(int param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_004EC324(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern float DAT_0018cf5c;
extern float DAT_0018cf60;
extern float DAT_0018cf64;
extern float DAT_0018cf68;
extern int *DAT_0018cf6c;
extern int *DAT_0018cf70;
extern float DAT_0018cf74;
extern char s_SE_PL_HookShot_RETURN_0018cf94[];
extern char s_SE_PL_HookShot_RETURN_Lv2_0018cf78[];

// USA 0018CDEC <- EU 0018CDEC (Ghidra, non-matching)
// GLOBAL DAT_0018cf5c float
// GLOBAL DAT_0018cf60 float
// GLOBAL DAT_0018cf64 float
// GLOBAL DAT_0018cf68 float
// GLOBAL DAT_0018cf6c int *
// GLOBAL DAT_0018cf70 int *
// GLOBAL DAT_0018cf74 float
// GLOBAL s_SE_PL_HookShot_RETURN_0018cf94 string
// GLOBAL s_SE_PL_HookShot_RETURN_Lv2_0018cf78 string

undefined4 func_0018CDEC(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_0018E15C(param_1);
  pfVar6 = (float *)(param_1 + 0x4cc);
  fVar7 = *pfVar6 - *(float *)(param_1 + 0x4c0);
  fVar8 = *(float *)(param_1 + 0x4d4) - *(float *)(param_1 + 0x4c8);
  fVar8 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar7 = DAT_0018cf5c;
  if (*(char *)(param_1 + 0x55e) == '\0') {
    fVar7 = DAT_0018cf60;
  }
  fVar7 = fVar7 * DAT_0018cf64 * fVar7 * DAT_0018cf64;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
    func_00115C70(&local_20,pfVar6,(float *)(param_1 + 0x4c0));
    iVar3 = func_004904CC(local_20,local_18);
    local_20 = ALBW_AS_F32((iVar3 - *(int *)(param_1 + 1000)));
    iVar3 = func_0058E2B8((int *)&local_20);
    piVar2 = DAT_0018cf6c;
    fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar4 >> 0x15) & 3);
    if ((int)ALBW_AS_U32((fVar7 * DAT_0018cf68)) < 0x3f000001) {
      if (*(char *)(param_1 + 0x562) != '\0') {
        return func_004EC324(*DAT_0018cf6c);
      }
      uVar4 = func_0055696C(*DAT_0018cf70,0xb);
      local_20 = DAT_0018cf74;
      if (2 < uVar4) {
        local_1c = s_SE_PL_HookShot_RETURN_Lv2_0018cf78;
        return func_004E9BEC(*piVar2,(int *)&local_20,0);
      }
      local_1c = s_SE_PL_HookShot_RETURN_0018cf94;
      return func_004E9BEC(*piVar2,(int *)&local_20,0);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x4d0);
  *pfVar6 = *(float *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4d0) = uVar5;
  func_0018D524(param_1);
  return func_00659688((undefined4 *)(param_1 + 0x49c),2);
}

