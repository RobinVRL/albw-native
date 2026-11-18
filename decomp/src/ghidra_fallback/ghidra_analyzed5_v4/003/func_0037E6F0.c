#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern undefined4 *DAT_0037e9d8;
extern float DAT_0037e9dc;
extern float DAT_0037e9e0;
extern int DAT_0037e9e4;
extern float DAT_0037e9e8;
extern int *DAT_0037e9ec;
extern float DAT_0037e9f0;
extern float DAT_0037e9f4;
extern float DAT_0037e9f8;
extern float DAT_0037e9fc;
extern float DAT_0037eb14;
extern int DAT_0037eb18;

// USA 0037E6F0 <- EU 0037E6CC (Ghidra, non-matching)
// GLOBAL DAT_0037e9d8 undefined4 *
// GLOBAL DAT_0037e9dc float
// GLOBAL DAT_0037e9e0 float
// GLOBAL DAT_0037e9e4 int
// GLOBAL DAT_0037e9e8 float
// GLOBAL DAT_0037e9ec int *
// GLOBAL DAT_0037e9f0 float
// GLOBAL DAT_0037e9f4 float
// GLOBAL DAT_0037e9f8 float
// GLOBAL DAT_0037e9fc float
// GLOBAL DAT_0037eb14 float
// GLOBAL DAT_0037eb18 int

bool func_0037E6F0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_100 (*(float *)(albw_frame + 0x0))
  #define local_fc (*(float *)(albw_frame + 0x4))
  #define local_f8 (*(float *)(albw_frame + 0x8))
  #define local_f4 (*(float *)(albw_frame + 0xc))
  #define local_f0 (*(float *)(albw_frame + 0x10))
  #define fStack_ec (*(float *)(albw_frame + 0x14))
  #define local_e8 (*(float *)(albw_frame + 0x18))
  #define local_e4 (*(float *)(albw_frame + 0x1c))
  #define local_e0 (*(float *)(albw_frame + 0x20))
  #define local_dc (*(float *)(albw_frame + 0x24))
  #define local_d8 (*(float *)(albw_frame + 0x28))
  #define local_d4 (*(float *)(albw_frame + 0x2c))
  #define local_d0 (*(float *)(albw_frame + 0x30))
  #define local_cc (*(float *)(albw_frame + 0x34))
  #define afStack_c8 ((float *)(albw_frame + 0x38))
  #define local_98 ((float *)(albw_frame + 0x68))
  #define local_7c (*(float *)(albw_frame + 0x84))
  #define local_6c (*(undefined4 *)(albw_frame + 0x94))
  #define afStack_68 ((float *)(albw_frame + 0x98))
  #define local_5c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_58 (*(float *)(albw_frame + 0xa8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xac))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_4c (*(float *)(albw_frame + 0xb4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0xb8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_40 (*(float *)(albw_frame + 0xc0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_38 (*(float *)(albw_frame + 0xc8))
  #define local_34 (*(float *)(albw_frame + 0xcc))
  #define local_30 (*(float *)(albw_frame + 0xd0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0xd4))
  #define afStack_28 ((float *)(albw_frame + 0xd8))
  func_001119F4(&local_100,DAT_0037e9d8);
  if (*(int *)(param_1 + 0x8c) == param_3) {
    bVar6 = *(int *)(param_1 + 0x6c) != 0;
    if (bVar6) {
      fVar9 = DAT_0037e9dc;
      func_001119F4(afStack_68,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0x14) +
                    *(int *)(param_1 + 0x8c) * 0x30));
      uVar1 = *(uint *)(param_1 + 0x84);
      pfVar5 = (float *)(DAT_0037e9e4 + (uVar1 >> 0x18) * 0x10);
      fVar7 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_38 = pfVar5[2] + pfVar5[3] * fVar7 * DAT_0037e9e0;
      fVar7 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_30 = -(*pfVar5 + pfVar5[1] * fVar7 * DAT_0037e9e0);
      local_34 = fVar9;
      func_0048B5D4(afStack_28,&local_38,*(uint *)(param_1 + 0x6c));
      func_00491B3C(local_98,afStack_28);
      func_001157FC(afStack_68,afStack_68,local_98);
      func_001151EC((undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0x14) +
                    *(int *)(param_1 + 0x8c) * 0x30),afStack_68);
    }
    return bVar6;
  }
  if (*(int *)(param_1 + 0x30) == param_3) {
    fVar9 = DAT_0037e9dc;
    fVar7 = DAT_0037e9e8;
    func_00115154(&local_cc,&local_d0,*(uint *)(param_1 + 0x34));
    local_e0 = -local_cc;
    local_100 = local_d0;
    local_f8 = local_cc;
    local_d8 = local_d0;
    local_fc = fVar9;
    local_f0 = fVar9;
    fStack_ec = fVar7;
    local_e8 = fVar9;
    local_dc = fVar9;
  }
  else if (*(int *)(param_1 + 0x20) == param_3) {
    fVar9 = DAT_0037e9dc;
    fVar7 = DAT_0037e9e8;
    if (*(char *)(param_1 + 0x45) == '\0') {
      if (*(char *)(param_1 + 0x2c) == '\0') {
        func_0051D2CC((int *)(param_1 + 0x28),0,DAT_0037e9fc);
      }
      else {
        local_d0 = 0.0;
        func_001119F4(local_98 + 4,
                      (undefined4 *)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0x14) +
                      *(int *)(param_1 + 0x4c) * 0x30));
        local_98[0] = local_7c;
        local_98[1] = ALBW_AS_F32(local_6c);
        local_98[2] = ALBW_AS_F32(local_5c);
        local_40 = *(float *)(param_1 + 0x14);
        uStack_3c = *(undefined4 *)(param_1 + 0x18);
        local_38 = *(float *)(param_1 + 0x1c);
        func_00115C70(&local_34,local_98,&local_40);
        local_4c = local_34;
        uStack_48 = ALBW_AS_U32(local_30);
        uStack_44 = uStack_2c;
        iVar2 = func_0068C690(&local_4c);
        func_00115C70(&local_34,*(float **)(*DAT_0037e9ec + 0x1c),local_98);
        local_58 = local_34;
        uStack_54 = ALBW_AS_U32(local_30);
        uStack_50 = uStack_2c;
        iVar3 = func_0068C690(&local_58);
        fVar8 = DAT_0037e9f0;
        local_d0 = ALBW_AS_F32((iVar3 - iVar2));
        fVar4 = ALBW_AS_F32(func_0058E2B8((int *)&local_d0));
        if ((uint)ALBW_AS_U32(fVar8) < (uint)ALBW_AS_U32(fVar4)) {
          if ((int)ALBW_AS_U32(local_d0) < 1) {
            local_d0 = ALBW_AS_F32(-(int)ALBW_AS_U32(fVar8));
          }
          else {
            local_d0 = fVar8;
          }
        }
        fVar8 = (float)VectorSignedToFloat(ALBW_AS_U32(local_d0),(byte)(in_fpscr >> 0x15) & 3);
        local_d0 = ALBW_AS_F32((int)(fVar8 * DAT_0037e9f4));
        func_0051D2CC((int *)(param_1 + 0x28),(int)ALBW_AS_U32(local_d0),DAT_0037e9f8);
      }
    }
    if ((*(char *)(param_1 + 0x44) == '\0') || (*(char *)(param_1 + 0x45) != '\0')) {
      func_00115154(&local_d0,&local_cc,*(uint *)(param_1 + 0x28));
      local_e0 = -local_d0;
      local_100 = local_cc;
      local_f8 = local_d0;
      local_d8 = local_cc;
      local_fc = fVar9;
      local_f0 = fVar9;
      fStack_ec = fVar7;
      local_e8 = fVar9;
      local_dc = fVar9;
    }
    else {
      fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = VectorFloatToUnsigned(fVar9 * DAT_0037eb14,3);
      func_00491E80(&local_100,uVar1,*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38),0);
    }
  }
  else {
    local_98[5] = ALBW_AS_F32(*(undefined4 *)(DAT_0037eb18 + 0xc0));
    local_98[0] = *(float *)(DAT_0037eb18 + 0xac);
    local_98[1] = ALBW_AS_F32(*(undefined4 *)(DAT_0037eb18 + 0xb0));
    local_98[2] = ALBW_AS_F32(*(undefined4 *)(DAT_0037eb18 + 0xb4));
    local_98[3] = ALBW_AS_F32(*(undefined4 *)(DAT_0037eb18 + 0xb8));
    local_98[4] = ALBW_AS_F32(*(undefined4 *)(DAT_0037eb18 + 0xbc));
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + uVar1 * 4 + 0x50) == param_3) {
        local_100 = DAT_0037e9e8;
        local_fc = DAT_0037e9dc;
        local_f8 = DAT_0037e9dc;
        local_d4 = local_98[uVar1] * *(float *)(param_1 + 0x68);
        local_f0 = DAT_0037e9dc;
        fStack_ec = DAT_0037e9e8;
        local_e8 = DAT_0037e9dc;
        local_e0 = DAT_0037e9dc;
        local_dc = DAT_0037e9dc;
        local_d8 = DAT_0037e9e8;
        local_f4 = DAT_0037e9dc;
        local_e4 = DAT_0037e9dc;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
  }
  func_001119F4(afStack_c8,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0x14) + param_3 * 0x30));
  func_001157FC(afStack_c8,afStack_c8,&local_100);
  func_001151EC((undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x48) + 0x24) + 0x14) + param_3 * 0x30),
                afStack_c8);
  return true;
}

