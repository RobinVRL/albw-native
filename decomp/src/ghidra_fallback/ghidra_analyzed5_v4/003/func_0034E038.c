#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0048B57C(float *param_1,float *param_2,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491404(float *param_1,float *param_2);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_0066FA50(int param_1,float *param_2,int param_3,uint param_4,float fparam_0);
extern int func_00670D14(int param_1,float *param_2,int param_3,uint param_4,float fparam_0);
extern float DAT_0034e308;
extern float *DAT_0034e30c;
extern float DAT_0034e310;
extern float *DAT_0034e314;
extern float DAT_0034e318;
extern float DAT_0034e31c;

// USA 0034E038 <- EU 0034E014 (Ghidra, non-matching)
// GLOBAL DAT_0034e308 float
// GLOBAL DAT_0034e30c float *
// GLOBAL DAT_0034e310 float
// GLOBAL DAT_0034e314 float *
// GLOBAL DAT_0034e318 float
// GLOBAL DAT_0034e31c float

void func_0034E038(int param_1,float *param_2,int param_3,int param_4,float fparam_0,float fparam_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(float *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_a4 (*(float *)(albw_frame + 0x3c))
  #define local_a0 (*(float *)(albw_frame + 0x40))
  #define local_9c (*(float *)(albw_frame + 0x44))
  #define local_98 (*(float *)(albw_frame + 0x48))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define fStack_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define fStack_7c (*(float *)(albw_frame + 0x64))
  #define fStack_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(int *)(albw_frame + 0x6c))
  #define afStack_70 ((float *)(albw_frame + 0x70))
  #define local_44 (*(float *)(albw_frame + 0x9c))
  #define local_40 (*(float *)(albw_frame + 0xa0))
  #define local_3c (*(float *)(albw_frame + 0xa4))
  #define afStack_38 ((float *)(albw_frame + 0xa8))
  local_80 = *param_2;
  fStack_7c = param_2[1];
  fStack_78 = param_2[2];
  if (param_4 == 0) {
    func_0066FA50(param_1,param_2,param_3,0,fparam_0);
  }
  else {
    func_00670D14(param_1,param_2,param_3,0,fparam_0);
  }
  func_00115C70(&local_98,param_2,param_2 + 3);
  func_00115C70(&local_a4,&local_80,param_2 + 3);
  local_d4 = local_98;
  local_d0 = DAT_0034e308;
  local_cc = local_90;
  local_c8 = local_a4;
  local_c4 = DAT_0034e308;
  local_c0 = local_9c;
  fVar10 = local_98 * local_a4 + DAT_0034e308 * DAT_0034e308 + local_90 * local_9c;
  fVar8 = SQRT(local_a4 * local_a4 + DAT_0034e308 * DAT_0034e308 + local_9c * local_9c);
  fVar8 = fVar8 + (SQRT(local_98 * local_98 + DAT_0034e308 * DAT_0034e308 + local_90 * local_90) -
                  fVar8) * fparam_1;
  fVar9 = local_a0 + (local_94 - local_a0) * fparam_1;
  fVar7 = DAT_0034e308;
  func_00115E10(&local_8c,&local_d4,&local_c8);
  iVar4 = func_004904CC(SQRT(local_8c * local_8c + local_88 * local_88 + fStack_84 * fStack_84),
                        fVar10);
  local_74 = 0;
  func_0051D0B0(&local_74,iVar4,0,fparam_1);
  if (*(char *)(param_1 + 0x17a) == '\0') {
    fVar10 = (local_cc - *DAT_0034e30c) * (local_c8 - DAT_0034e30c[1]) -
             (local_c0 - *DAT_0034e30c) * (local_d4 - DAT_0034e30c[1]);
    uVar1 = in_fpscr & 0xfffffff;
    uVar2 = uVar1 | (uint)(fVar10 < fVar7) << 0x1f | (uint)(fVar10 == fVar7) << 0x1e |
            (uint)(fVar7 <= fVar10) << 0x1d;
    in_fpscr = uVar2 | (uint)(NAN(fVar10) || NAN(fVar7)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    if ((bool)(bVar3 >> 5 & 1)) {
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        if (*(char *)(param_1 + 0x178) != '\0') {
          *(undefined1 *)(param_1 + 0x179) = 1;
          goto LAB_0034e1dc;
        }
        if (*(char *)(param_1 + 0x179) == '\0') goto LAB_0034e300;
      }
    }
    else {
      fVar10 = (float)VectorSignedToFloat(local_74,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * DAT_0034e310;
      local_74 = (int)fVar10;
      fVar6 = (float)VectorSignedToFloat(local_74,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = uVar1 | (uint)(fVar6 == fVar10) << 0x1e | (uint)(fVar10 <= fVar6) << 0x1d;
      bVar3 = (byte)(in_fpscr >> 0x18);
      bVar5 = (bool)(bVar3 >> 6);
      if (!bVar5) {
        in_fpscr = uVar1 | (uint)(fVar7 == fVar10) << 0x1e | (uint)(fVar10 <= fVar7) << 0x1d;
        bVar3 = (byte)(in_fpscr >> 0x18);
        bVar5 = (bool)(bVar3 >> 6);
      }
      if ((bool)(bVar3 >> 5 & 1) && !bVar5) {
        local_74 = local_74 + -1;
      }
      if (*(char *)(param_1 + 0x178) == '\0') {
        if (*(char *)(param_1 + 0x179) != '\0') {
LAB_0034e300:
          *(undefined1 *)(param_1 + 0x17a) = 1;
          goto LAB_0034e224;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x179) = 0;
LAB_0034e1dc:
        *(undefined1 *)(param_1 + 0x178) = 0;
      }
    }
    if (*(char *)(param_1 + 0x17a) == '\0') goto LAB_0034e228;
  }
LAB_0034e224:
  local_74 = 0;
LAB_0034e228:
  fVar10 = (float)VectorUnsignedToFloat(local_74,(byte)(in_fpscr >> 0x15) & 3);
  func_0048B57C(afStack_38,DAT_0034e314,fVar10 * DAT_0034e318);
  func_00491404(afStack_70,afStack_38);
  func_00115CE4(&local_b8,afStack_70,&local_d4);
  fVar10 = SQRT(local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0);
  if (fVar7 < fVar10) {
    fVar8 = fVar8 / fVar10;
    local_b8 = local_b8 * fVar8;
    local_b4 = local_b4 * fVar8;
    local_b0 = local_b0 * fVar8;
  }
  local_44 = local_b8;
  local_3c = local_b0;
  local_40 = fVar9;
  func_00115C54(param_2,param_2 + 3,&local_44);
  fVar7 = DAT_0034e31c;
  *(float *)(param_1 + 0x168) = local_44;
  *(float *)(param_1 + 0x16c) = local_40;
  *(float *)(param_1 + 0x170) = local_3c;
  *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) - fVar7;
  return;
}

