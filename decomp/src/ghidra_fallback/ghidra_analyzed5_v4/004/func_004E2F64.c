#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern float DAT_004e31a4;
extern float DAT_004e31a8;
extern float DAT_004e31ac;
extern int DAT_004e31b0;
extern char s_IntoLavaUpSide_004e3194[];

// USA 004E2F64 <- EU 004E2F3C (Ghidra, non-matching)
// GLOBAL DAT_004e31a4 float
// GLOBAL DAT_004e31a8 float
// GLOBAL DAT_004e31ac float
// GLOBAL DAT_004e31b0 int
// GLOBAL s_IntoLavaUpSide_004e3194 string

void func_004E2F64(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define local_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(undefined4 *)(albw_frame + 0x48))
  #define local_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define local_28 (*(undefined4 *)(albw_frame + 0x78))
  #define local_24 (*(undefined4 *)(albw_frame + 0x7c))
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    *(undefined1 *)(param_1 + 0x53c) = *(undefined1 *)(param_1 + 0x53d);
    *(undefined1 *)(param_1 + 0x53d) = 0;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8 + 4);
    piVar3 = (int *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
    if ((uVar1 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x434) + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar2 = *(int *)(param_1 + 0x420) + 1;
    *(int *)(param_1 + 0x420) = iVar2;
    if (*(int *)(param_1 + 0x430) != 0) {
      fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x430),1,fVar4);
    }
    if ((*(char *)(param_1 + 0x53c) == '\0') && (*(char *)(param_1 + 0x53d) != '\0')) {
      fVar4 = 0.0;
      fVar5 = 0.0;
      if (*(int *)(param_1 + 0x344) != 0) {
        func_004A1B9C((int *)&local_a0,*(int *)(param_1 + 0x344),(uint *)s_IntoLavaUpSide_004e3194);
        fVar4 = local_a0;
        fVar5 = local_9c;
      }
      func_00115D70(&local_a0,(float *)(param_1 + 0x540),DAT_004e31a4);
      local_84 = local_a0;
      local_80 = local_9c;
      local_7c = local_98;
      if ((fVar4 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar4) + 0x1c) == fVar5)) {
        local_48 = DAT_004e31ac;
        local_44 = DAT_004e31a8;
        local_40 = DAT_004e31ac;
        fVar5 = local_a0 * DAT_004e31ac + local_9c * DAT_004e31a8 + local_98 * DAT_004e31ac;
        if (fVar5 <= DAT_004e31ac) {
          fVar5 = -fVar5;
        }
        if (DAT_004e31b0 < (int)ALBW_AS_U32(fVar5)) {
          local_48 = DAT_004e31a8;
          local_44 = DAT_004e31ac;
        }
        fVar5 = DAT_004e31a8;
        func_00115E10(&local_90,&local_48,&local_84);
        local_3c = local_90;
        local_38 = uStack_8c;
        local_34 = uStack_88;
        func_00115DC8(&local_3c);
        func_00115E10(&local_90,&local_84,&local_3c);
        local_2c = local_90;
        local_28 = uStack_8c;
        local_24 = uStack_88;
        func_00115DC8(&local_2c);
        local_78 = local_3c;
        local_68 = local_38;
        local_58 = local_34;
        local_74 = local_2c;
        local_64 = local_28;
        local_54 = local_24;
        local_70 = local_84;
        local_60 = local_80;
        local_50 = local_7c;
        local_6c = *(undefined4 *)(param_1 + 0x54c);
        local_5c = *(undefined4 *)(param_1 + 0x550);
        local_4c = *(undefined4 *)(param_1 + 0x554);
        func_004A2E80((int)ALBW_AS_U32(fVar4),&local_78,fVar5);
      }
    }
    if (*(uint *)(param_1 + 0x4e4) < *(uint *)(param_1 + 0x4e8)) {
      *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x454) + 0x30) == '\0') {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

