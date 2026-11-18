#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern float DAT_001a7d64;
extern undefined4 DAT_001a7d68;
extern int DAT_001a7d6c;
extern float DAT_001a7d70;

// USA 001A7B50 <- EU 001A7B50 (Ghidra, non-matching)
// GLOBAL DAT_001a7d64 float
// GLOBAL DAT_001a7d68 undefined4
// GLOBAL DAT_001a7d6c int
// GLOBAL DAT_001a7d70 float

void func_001A7B50(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  float fparam_0;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x84))
  uVar5 = CONCAT44(DAT_001a7d64,DAT_001a7d68);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x930) * 0x30;
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = CONCAT44(*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x1c));
  if (*(char *)(param_1 + 0x937) == '\0') {
    func_004D80A4(&local_b0,*(uint *)(param_1 + 1000),DAT_001a7d64);
    local_ac = ALBW_AS_F32(uVar5);
  }
  else {
    func_004D8240(&local_b0,*(uint *)(param_1 + 0x91c),*(uint *)(param_1 + 1000),DAT_001a7d64);
  }
  fparam_0 = ALBW_AS_F32(((ulonglong)uVar5 >> 0x20));
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x1c) == param_2[1])) {
    local_38 = ALBW_AS_F32(uVar5);
    fVar4 = local_b0 * local_38 + local_ac * fparam_0 + local_a8 * local_38;
    if (fVar4 <= local_38) {
      fVar4 = -fVar4;
    }
    local_40 = local_38;
    local_3c = fparam_0;
    if (DAT_001a7d6c < (int)ALBW_AS_U32(fVar4)) {
      local_40 = fparam_0;
      local_3c = local_38;
    }
    func_00115E10(&local_34,&local_40,&local_b0);
    local_54 = local_34;
    local_50 = uStack_30;
    local_4c = uStack_2c;
    func_00115DC8(&local_54);
    func_00115E10(&local_34,&local_b0,&local_54);
    local_60 = local_34;
    local_5c = uStack_30;
    local_58 = uStack_2c;
    func_00115DC8(&local_60);
    local_a0 = local_54;
    local_90 = local_50;
    local_80 = local_4c;
    local_9c = local_60;
    local_8c = local_5c;
    local_7c = local_58;
    local_98 = local_b0;
    local_88 = local_ac;
    local_78 = local_a8;
    local_84 = (undefined4)uVar7;
    local_74 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_94 = uVar6;
    func_004A2E80(*param_2,&local_a0,fparam_0);
  }
  iVar1 = *param_2;
  iVar2 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_2[1])) {
    if ((*(uint *)(iVar1 + 0x3c) & 4) == 0 && (*(uint *)(iVar1 + 0x3c) & 0x40) == 0) {
      iVar3 = *(int *)(iVar1 + 0x20);
      if ((iVar3 == 0) || (*(int *)(iVar1 + 0x24) != *(int *)(iVar3 + 0xc))) goto LAB_001a7d40;
      if (*(int *)(iVar3 + 4) < 1) {
        return;
      }
    }
    iVar2 = *(int *)(iVar1 + 0x20);
  }
LAB_001a7d40:
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0x240) = *(float *)(param_1 + 0x95c) * DAT_001a7d70;
  }
  return;
}

