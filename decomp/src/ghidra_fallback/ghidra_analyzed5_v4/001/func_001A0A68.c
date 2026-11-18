#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0019F698(int *param_1,int *param_2);
extern int func_0019FDD8(int *param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_002B1510(int param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F997C(int param_1);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_00520EF0(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_00000005;
extern undefined DAT_0000000a;
extern undefined DAT_0000000e;
extern undefined DAT_0000000f;
extern undefined DAT_00000012;
extern float DAT_001a0ea0;
extern float DAT_001a0ea4;
extern float DAT_001a0ea8;
extern int *DAT_001a0eac;
extern float DAT_001a0eb0;
extern undefined DAT_001a0ef0;
extern int DAT_001a0f1c;
extern float DAT_001a0f20;
extern int DAT_001a0f24;
extern float DAT_001a0f28;
extern float DAT_001a0f2c;
extern int DAT_001a103c;
extern char s_SE_DegTail_DRIVE_UP_001a0eb4[];
extern char s_SE_DegTail_DRIVE_UP_S_001a0ec8[];
extern char s_SE_DegTail_V_DAMAGE_001a0f08[];
extern char s_SE_EN_DAMAGE_001a0ee0[];
extern char s__SE_Togegoma_V_DIE_001a0ef3[];
extern char s_cf_001a0ef3[];
extern undefined4 _DAT_001a0ef0;

// USA 001A0A68 <- EU 001A0A68 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_0000000a undefined
// GLOBAL DAT_0000000e undefined
// GLOBAL DAT_0000000f undefined
// GLOBAL DAT_00000012 undefined
// GLOBAL DAT_001a0ea0 float
// GLOBAL DAT_001a0ea4 float
// GLOBAL DAT_001a0ea8 float
// GLOBAL DAT_001a0eac int *
// GLOBAL DAT_001a0eb0 float
// GLOBAL DAT_001a0ef0 undefined
// GLOBAL DAT_001a0f1c int
// GLOBAL DAT_001a0f20 float
// GLOBAL DAT_001a0f24 int
// GLOBAL DAT_001a0f28 float
// GLOBAL DAT_001a0f2c float
// GLOBAL DAT_001a103c int
// GLOBAL EXT_00000008 undefined
// GLOBAL EXT_0000000c undefined
// GLOBAL EXT_00000010 undefined
// GLOBAL s_cf_001a0ef3 string
// GLOBAL s_SE_DegTail_DRIVE_UP_001a0eb4 string
// GLOBAL s_SE_DegTail_DRIVE_UP_S_001a0ec8 string
// GLOBAL s_SE_DegTail_V_DAMAGE_001a0f08 string
// GLOBAL s_SE_EN_DAMAGE_001a0ee0 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001A0A68(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int *extraout_r1_04;
  float *pfVar8;
  uint *puVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fparam_0;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(char * *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  uVar1 = (uint)*(byte *)((int)param_1 + 0x121e);
  uVar2 = uVar1 - 3;
  bVar10 = uVar1 == 3;
  uVar6 = uVar1;
  if (!bVar10) {
    uVar2 = (uint)(short)param_1[0x142];
    uVar6 = uVar2;
  }
  if (((!bVar10 && uVar6 != 0) && (int)uVar2 < 0 == (bVar10 && SBORROW4(uVar1,3))) &&
     (iVar3 = param_1[0x46d], param_1[0x46d] = iVar3 + 1U, 99 < iVar3 + 1U)) {
    param_1[0x46d] = 0;
  }
  iVar3 = func_004F70A8(param_1);
  fVar11 = DAT_001a0eb0;
  fparam_0 = DAT_001a0ea4;
  fVar13 = DAT_001a0ea0;
  if (iVar3 == 0) goto LAB_001a1028;
  puVar9 = (uint *)(param_1 + 0x47e);
  if (*(char *)(param_1[0x144] + 4) == '\0') {
    piVar7 = (int *)0x0;
    if (*(int *)param_1[0x10f] != 0) {
      piVar7 = (int *)(int)*(char *)(param_1[0x10f] + 0x21);
      piVar4 = param_1 + 0x240;
      if (piVar7 == (int *)&DAT_0000000e) {
        bVar10 = false;
        if (*(char *)((int)param_1 + 0x121d) == '\0') {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x485]) == DAT_001a0ea4) << 0x1e;
          bVar10 = SUB41(in_fpscr >> 0x1e,0);
        }
        if (bVar10) {
          func_00291FE0(*DAT_001a0eac,param_1 + 0xf4,DAT_001a0ea8);
          local_4c = s_SE_EN_DAMAGE_001a0ee0;
          local_50 = fVar11;
          iVar3 = func_00520EF0((int)param_1,(int *)&local_50);
          piVar7 = extraout_r1_01;
joined_r0x001a0c2c:
          if (iVar3 != 1) {
            func_004FA124(param_1,(int)*(char *)(param_1[0x10f] + 0x21),0);
            objStack_58[0] = 1;
            func_004FC244(param_1,(int *)param_1[0x10f],8,1,1);
            piVar7 = extraout_r1_03;
          }
        }
      }
      else if ((int)piVar7 < 0xe) {
        if (piVar7 == (int *)&DAT_00000005) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x485]) == DAT_001a0ea4) << 0x1e;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            func_002917A4(*DAT_001a0eac,param_1 + 0xf4,0,DAT_001a0ea8);
            local_4c = s_SE_EN_DAMAGE_001a0ee0;
            local_50 = fVar11;
            iVar3 = func_00520EF0((int)param_1,(int *)&local_50);
            piVar7 = extraout_r1_02;
            goto joined_r0x001a0c2c;
          }
        }
        else if (piVar7 == (int *)&SupervisorCall) {
LAB_001a0b50:
          piVar7 = (int *)(uint)*(byte *)((int)param_1 + 0x121d);
          if (piVar7 == (int *)0x0) {
            piVar4 = (int *)(uint)*(byte *)(param_1 + 0x275);
          }
          if (piVar7 == (int *)0x0 && piVar4 == (int *)0x2) {
            *(undefined1 *)((int)param_1 + 0x1221) = 0;
            objStack_58[1] = (uint)s_SE_DegTail_DRIVE_UP_001a0eb4;
            objStack_58[0] = (uint)ALBW_AS_U32(fVar11);
            func_00150A84(param_1,(int *)objStack_58,0);
            func_0065A330(param_1 + 0x274,5);
            piVar7 = extraout_r1;
          }
        }
        else if (piVar7 == (int *)&PrefetchAbort) goto LAB_001a0b9c;
      }
      else if (piVar7 == (int *)&DAT_0000000f) {
LAB_001a0b9c:
        piVar7 = (int *)(uint)*(byte *)((int)param_1 + 0x121d);
        if (piVar7 == (int *)0x0) {
          piVar4 = (int *)(uint)*(byte *)(param_1 + 0x275);
        }
        if (piVar7 == (int *)0x0 && piVar4 == (int *)0x2) {
          *(undefined1 *)((int)param_1 + 0x1221) = 1;
          objStack_58[1] = (uint)s_SE_DegTail_DRIVE_UP_S_001a0ec8;
          objStack_58[0] = (uint)ALBW_AS_U32(fVar11);
          func_00150A84(param_1,(int *)objStack_58,0);
          func_0065A330(param_1 + 0x274,5);
          piVar7 = extraout_r1_00;
        }
      }
      else {
        if (piVar7 == (int *)&DataAbort) {
          objStack_58[0] = (uint)ALBW_AS_U32(DAT_001a0eb0);
          if ((short)param_1[0x142] < 1) {
            objStack_58[1] = (int)s__SE_Togegoma_V_DIE_001a0ef3 + 1;
            func_00150A84(param_1,(int *)objStack_58,0);
          }
          else {
            objStack_58[1] = (uint)s_SE_DegTail_V_DAMAGE_001a0f08;
            func_00150A84(param_1,(int *)objStack_58,0);
          }
          func_002B1510((int)param_1,(float *)(param_1 + 0x467),fparam_0);
          func_004F997C((int)param_1);
          goto LAB_001a0d4c;
        }
        if (piVar7 == (int *)&DAT_00000012) goto LAB_001a0b50;
      }
      in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x485]) == fparam_0) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        piVar7 = (int *)&DAT_0000000a;
        param_1[0x485] = _DAT_001a0ef0;
        param_1[0x47f] = 10;
        param_1[0x480] = (int)ALBW_AS_U32(fVar13);
        *puVar9 = 0;
      }
      if (*(char *)((int)param_1 + 0x121d) == '\0') {
        piVar7 = (int *)&SupervisorCall;
        *(undefined1 *)((int)param_1 + 0x121d) = 8;
      }
    }
  }
  else {
LAB_001a0d4c:
    func_0065A330(param_1 + 0x274,3);
    piVar7 = extraout_r1_04;
  }
  func_0019F698(param_1,piVar7);
  if (*(char *)((int)param_1 + 0x121d) != '\0') {
    *(char *)((int)param_1 + 0x121d) = *(char *)((int)param_1 + 0x121d) + -1;
    *(undefined2 *)(param_1[0x10f] + 0x30) = 0;
  }
  pfVar8 = (float *)param_1[0x279];
  piVar7 = (int *)(param_1[0x27b] + (char)param_1[0x275] * 8);
  uVar2 = *(uint *)(param_1[0x27b] + (char)param_1[0x275] * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar7 = (int *)(*piVar7 + *(int *)((int)pfVar8 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar7)();
  iVar3 = param_1[0x274] + 1;
  param_1[0x274] = iVar3;
  if (param_1[0x278] != 0) {
    fVar11 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x278],1,fVar11);
  }
  if (((char)param_1[0x281] != '\0') && (*(char *)((int)param_1 + 0xa05) == '\0')) {
    *(undefined1 *)(param_1 + 0x281) = 0;
  }
  func_004F48F0((int)param_1);
  param_1[0x45d] = 0;
  *(undefined1 *)(param_1 + 0x487) = 0;
  *(undefined1 *)((int)param_1 + 0xa05) = 0;
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar8);
  iVar3 = DAT_001a0f1c;
  uVar2 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0x485]) == fparam_0) << 0x1e;
  fVar11 = DAT_001a0f20;
  if (!SUB41(uVar2 >> 0x1e,0)) {
    pfVar8 = (float *)(DAT_001a0f1c + ((uint)(param_1[0x47e] * DAT_001a0f24) >> 0x18) * 0x10);
    fVar12 = (float)VectorUnsignedToFloat
                              (param_1[0x47e] * DAT_001a0f24 & 0xffffff,(byte)(uVar2 >> 0x15) & 3);
    fVar12 = DAT_001a0f28 + (*pfVar8 + pfVar8[1] * fVar12 * DAT_001a0f20) * ALBW_AS_F32(param_1[0x485]);
    func_00588BE4((int)param_1);
    param_1[0x485] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x485]) * DAT_001a0f2c));
    if (*puVar9 < (uint)param_1[0x47f]) {
      *puVar9 = *puVar9 + 1;
    }
    if ((uint)param_1[0x47f] <= (uint)param_1[0x47e]) {
      param_1[0x485] = (int)ALBW_AS_U32(fparam_0);
    }
    iVar5 = param_1[0x103];
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(float *)(iVar5 + 0x74) = fVar12;
    *(float *)(iVar5 + 0x78) = fVar12;
    *(float *)(iVar5 + 0x7c) = fVar12;
    func_004CEAF0(param_1[0x103]);
  }
  if ((*(char *)(DAT_001a103c + (int)param_1) == '\0') && (0x96 < (uint)param_1[0x47b])) {
    uVar6 = param_1[0x47b] * DAT_001a0f24;
    pfVar8 = (float *)(iVar3 + (uVar6 >> 0x18) * 0x10);
    fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(uVar2 >> 0x15) & 3);
    objStack_58[0] = (uint)ALBW_AS_U32(((*pfVar8 + pfVar8[1] * fVar12 * fVar11) * fVar13));
    objStack_58[1] = (uint)ALBW_AS_U32(fparam_0);
    local_50 = fparam_0;
    func_004D7F70((float *)objStack_58,param_1[0xfa]);
    func_00115C54((float *)&local_40,(float *)(param_1 + 0xf4),(float *)objStack_58);
    local_4c = local_40;
    uStack_48 = uStack_3c;
    uStack_44 = uStack_38;
    iVar3 = param_1[0x103];
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar3 + 0x80),param_1[0xfa],(float *)&local_4c);
    func_004CEAF0(param_1[0x103]);
  }
LAB_001a1028:
  return func_0019FDD8(param_1);
}

