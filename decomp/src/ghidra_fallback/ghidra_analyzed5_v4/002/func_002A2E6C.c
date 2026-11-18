#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_002A363C(int param_1,uint param_2);
extern int func_002A49F8(int param_1,int param_2,int param_3);
extern int func_002A6B54(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FC570();
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005569C8(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern uint *DAT_002a3174;
extern float DAT_002a3178;
extern float DAT_002a317c;
extern undefined4 DAT_002a3180;
extern float *DAT_002a3184;
extern int *DAT_002a3188;
extern float DAT_002a318c;
extern float DAT_002a3190;
extern float DAT_002a3194;
extern int *DAT_002a3198;
extern int DAT_002a319c;
extern int DAT_002a3210;

// USA 002A2E6C <- EU 002A2E48 (Ghidra, non-matching)
// GLOBAL DAT_002a3174 uint *
// GLOBAL DAT_002a3178 float
// GLOBAL DAT_002a317c float
// GLOBAL DAT_002a3180 undefined4
// GLOBAL DAT_002a3184 float *
// GLOBAL DAT_002a3188 int *
// GLOBAL DAT_002a318c float
// GLOBAL DAT_002a3190 float
// GLOBAL DAT_002a3194 float
// GLOBAL DAT_002a3198 int *
// GLOBAL DAT_002a319c int
// GLOBAL DAT_002a3210 int

undefined4 func_002A2E6C(int *param_1)

{
  char cVar1;
  uint *puVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  char *pcVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int * *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  func_002A27C4((int)param_1,1);
  puVar2 = DAT_002a3174;
  cVar1 = *(char *)((int)param_1 + 0xb91);
  pcVar10 = (char *)((int)param_1 + 0xb91);
  pfVar9 = (float *)(param_1 + 0x2c9);
  piVar11 = param_1 + 0x2e1;
  fVar12 = DAT_002a317c;
  fVar13 = DAT_002a3178;
  if (cVar1 == '\0') {
    iVar8 = func_0058A8F0((int)param_1);
    if (iVar8 == 0) {
      return 0;
    }
    *pcVar10 = *(char *)((int)param_1 + 0xb91) + '\x01';
    param_1[0x167] = param_1[0x167] | 8;
    if (param_1[0x2ca] < 0x3f800000) {
      local_48 = CONCAT22((*(undefined2 *)((char *)&local_48 + 2)),(short)DAT_002a3180);
      *(short *)(param_1[0x10c] + 0x28) = (short)DAT_002a3180;
    }
    *(undefined1 *)(param_1[0x2bd] + 0x22) = 2;
    func_004FC570(param_1);
    func_004FABDC((int)param_1,8,0,0);
LAB_002a2f20:
    local_40 = *DAT_002a3184;
    fStack_3c = DAT_002a3184[1];
    fStack_38 = DAT_002a3184[2];
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_40,pfVar4,(float *)(param_1 + 0xf4));
    local_48 = func_0068C690(&local_40);
    fparam_0 = DAT_002a318c;
    piVar5 = DAT_002a3188;
    *piVar11 = *piVar11 - *puVar2;
    local_44 = param_1 + 0x2df;
    func_0051D2F4(param_1 + 0xfa,param_1[0x2df],piVar5[-1],*piVar5,fparam_0);
    func_0051D2F4(local_44,local_48,piVar5[-1],*piVar5,fparam_0);
    func_002A363C((int)param_1,param_1[0xfa]);
    *pfVar9 = *pfVar9 + (DAT_002a3190 - *pfVar9) * DAT_002a3194;
    piVar5 = (int *)param_1[0x277];
    iVar8 = 0;
    if (piVar5 != (int *)0x0) {
      iVar8 = *piVar5;
    }
    if ((piVar5 != (int *)0x0 && iVar8 != 0) && (bVar3 = func_005569C8(*DAT_002a3198), bVar3)) {
      *(undefined1 *)(param_1 + 0x2e5) = 1;
    }
    if (((uint)param_1[0x2d8] < (uint)param_1[0x2d9]) &&
       (param_1[0x2d8] = param_1[0x2d8] + 1, (char)param_1[0x2e5] == '\0')) {
      return 0;
    }
    *pcVar10 = *(char *)((int)param_1 + 0xb91) + '\x01';
    func_004FAD90((int)param_1);
    func_002A6B54((int)param_1);
  }
  else {
    if (cVar1 == '\x01') goto LAB_002a2f20;
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return 0;
      }
      goto LAB_002a30c4;
    }
  }
  *pfVar9 = *pfVar9 + (fVar12 - *pfVar9) * fVar13;
  func_002A363C((int)param_1,param_1[0xfa]);
  local_48 = param_1[0x2e1];
  uVar6 = func_0058E2B8(&local_48);
  uVar7 = *puVar2;
  if (uVar7 < uVar6) {
    *piVar11 = *piVar11 - uVar7;
    return 0;
  }
  func_004FABDC((int)param_1,9,0,0);
  param_1[0x2e1] = 0;
  *pcVar10 = *(char *)((int)param_1 + 0xb91) + '\x01';
LAB_002a30c4:
  *pfVar9 = *pfVar9 + (fVar12 - *pfVar9) * fVar13;
  func_002A363C((int)param_1,param_1[0xfa]);
  iVar8 = func_0058A8F0((int)param_1);
  if (iVar8 == 0) {
    return 0;
  }
  param_1[0x2c9] = (int)ALBW_AS_U32(fVar12);
  param_1[0xf7] = (int)ALBW_AS_U32(fVar12);
  param_1[0xf9] = (int)ALBW_AS_U32(fVar12);
  iVar8 = func_002A49F8((int)param_1,0,0);
  if ((iVar8 != 0) &&
     (pfVar9 = (float *)func_00520FC0(),
     (int)ALBW_AS_U32(((*pfVar9 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar9 - ALBW_AS_F32(param_1[0xf4])) +
          (pfVar9[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar9[2] - ALBW_AS_F32(param_1[0xf6])))) < DAT_002a319c))
  {
    return func_00662128(param_1 + 0x278,9);
  }
  *(undefined1 *)((int)param_1 + 0xb91) = 0;
  pfVar9 = (float *)func_00520FC0();
  if ((int)ALBW_AS_U32(((*pfVar9 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar9 - ALBW_AS_F32(param_1[0xf4])) +
           (pfVar9[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar9[2] - ALBW_AS_F32(param_1[0xf6])))) <= DAT_002a3210)
  {
    return func_00662128(param_1 + 0x278,1);
  }
  return func_00662128(param_1 + 0x278,6);
}

