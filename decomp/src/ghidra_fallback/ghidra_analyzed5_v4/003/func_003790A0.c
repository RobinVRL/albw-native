#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0014D7F4(float *param_1,float *param_2,float fparam_0,float fparam_1);
extern int func_0014D8A4(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00379414;
extern float DAT_00379418;
extern float DAT_0037941c;
extern float DAT_003797f8;
extern float DAT_003797fc;
extern uint DAT_00379800;
extern float DAT_00379804;
extern uint *DAT_00379808;
extern float DAT_0037980c;
extern float DAT_00379810;
extern float DAT_00379814;
extern float DAT_00379818;
extern int DAT_0037981c;
extern float DAT_00379820;
extern float DAT_00379824;
extern float DAT_00379a84;
extern float DAT_00379a88;

// USA 003790A0 <- EU 0037907C (Ghidra, non-matching)
// GLOBAL DAT_00379414 float
// GLOBAL DAT_00379418 float
// GLOBAL DAT_0037941c float
// GLOBAL DAT_003797f8 float
// GLOBAL DAT_003797fc float
// GLOBAL DAT_00379800 uint
// GLOBAL DAT_00379804 float
// GLOBAL DAT_00379808 uint *
// GLOBAL DAT_0037980c float
// GLOBAL DAT_00379810 float
// GLOBAL DAT_00379814 float
// GLOBAL DAT_00379818 float
// GLOBAL DAT_0037981c int
// GLOBAL DAT_00379820 float
// GLOBAL DAT_00379824 float
// GLOBAL DAT_00379a84 float
// GLOBAL DAT_00379a88 float

undefined4 func_003790A0(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 ((float *)(albw_frame + 0x10))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define local_b4 (*(float *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_ac (*(float *)(albw_frame + 0x34))
  #define local_a8 (*(float *)(albw_frame + 0x38))
  #define local_a4 (*(float *)(albw_frame + 0x3c))
  #define local_a0 (*(float *)(albw_frame + 0x40))
  #define local_9c (*(float *)(albw_frame + 0x44))
  #define local_98 (*(float *)(albw_frame + 0x48))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(float *)(albw_frame + 0x7c))
  #define fStack_60 (*(float *)(albw_frame + 0x80))
  #define fStack_5c (*(float *)(albw_frame + 0x84))
  #define local_48 ((int *)(albw_frame + 0x98))
  iVar3 = *(int *)(param_1 + 4);
  fVar15 = DAT_00379414;
  fVar13 = DAT_00379418;
  fVar14 = DAT_0037941c;
  if (*(int *)(iVar3 + 0x98) == param_3) {
    sVar1 = *(short *)(iVar3 + 0x52);
    if ((((sVar1 == 0x16 || sVar1 == 0x17) || (sVar1 == 0x1e || sVar1 == 0x1f)) ||
        ((sVar1 == 0x18 || sVar1 == 0x19) || sVar1 == 0x76)) &&
       (*(int *)(iVar3 + 0x128) < 0x20000000)) {
      func_004D838C((float *)(iVar3 + 300),(float *)(iVar3 + 0xbc),DAT_0037941c,DAT_00379418,
                    DAT_00379414);
      func_00115DC8((float *)(*(int *)(param_1 + 4) + 300));
      func_001119F4(&local_d8,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                    *(int *)(*(int *)(param_1 + 4) + 0x98) * 0x30));
      iVar3 = *(int *)(param_1 + 4);
      local_d4 = *(float *)(iVar3 + 300);
      local_c4 = *(float *)(iVar3 + 0x130);
      local_b4 = *(float *)(iVar3 + 0x134);
      local_90 = local_d8;
      local_8c = local_c8;
      local_88 = local_b8;
      local_a8 = local_d0[0];
      local_a4 = local_c0;
      local_a0 = local_b0;
      local_9c = local_d4;
      local_98 = local_c4;
      local_94 = local_b4;
      func_00115DC8(&local_9c);
      func_00115E10(&local_a8,&local_90,&local_9c);
      func_00115DC8(&local_a8);
      func_00115E10(&local_90,&local_9c,&local_a8);
      local_d4 = local_9c;
      local_c4 = local_98;
      local_b4 = local_94;
      local_d8 = local_90;
      local_c8 = local_8c;
      local_b8 = local_88;
      local_d0[0] = local_a8;
      local_c0 = local_a4;
      local_b0 = local_a0;
      func_001151EC((undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                    *(int *)(*(int *)(param_1 + 4) + 0x98) * 0x30),&local_d8);
    }
    else {
      func_001119F4(&local_d8,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x24) + 0x14) +
                    *(int *)(iVar3 + 0x98) * 0x30));
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 300) = local_d4;
      *(float *)(iVar3 + 0x130) = local_c4;
      *(float *)(iVar3 + 0x134) = local_b4;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x90) == param_3) {
    sVar1 = *(short *)(iVar3 + 0x52);
    if ((((sVar1 == 0x1c || sVar1 == 0x1d) || (sVar1 == 0x1a || sVar1 == 0x1b)) ||
        (sVar1 == 0x2c || sVar1 == 0x2d)) && (*(int *)(iVar3 + 0x128) < 0x20000000)) {
      local_84 = -*(float *)(iVar3 + 0xbc);
      local_80 = -*(float *)(iVar3 + 0xc0);
      local_7c = -*(float *)(iVar3 + 0xc4);
      func_004D838C((float *)(*(int *)(param_1 + 4) + 0x138),&local_84,fVar14,fVar13,fVar15);
      func_00115DC8((float *)(*(int *)(param_1 + 4) + 0x138));
      func_001119F4(&local_d8,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                    *(int *)(*(int *)(param_1 + 4) + 0x90) * 0x30));
      iVar3 = *(int *)(param_1 + 4);
      local_d0[0] = *(float *)(iVar3 + 0x138);
      local_c0 = *(float *)(iVar3 + 0x13c);
      local_b0 = *(float *)(iVar3 + 0x140);
      local_90 = local_d4;
      local_8c = local_c4;
      local_88 = local_b4;
      local_9c = local_d8;
      local_98 = local_c8;
      local_94 = local_b8;
      local_a8 = local_d0[0];
      local_a4 = local_c0;
      local_a0 = local_b0;
      func_00115DC8(&local_a8);
      func_00115E10(&local_9c,&local_90,&local_a8);
      func_00115DC8(&local_9c);
      func_00115E10(&local_90,&local_a8,&local_9c);
      local_d0[0] = local_a8;
      local_c0 = local_a4;
      local_b0 = local_a0;
      local_d4 = local_90;
      local_c4 = local_8c;
      local_b4 = local_88;
      local_d8 = local_9c;
      local_c8 = local_98;
      local_b8 = local_94;
      func_001151EC((undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                    *(int *)(*(int *)(param_1 + 4) + 0x90) * 0x30),&local_d8);
    }
    else {
      func_001119F4(&local_d8,
                    (undefined4 *)
                    (*(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x24) + 0x14) +
                    *(int *)(iVar3 + 0x90) * 0x30));
      iVar3 = *(int *)(param_1 + 4);
      *(float *)(iVar3 + 0x138) = local_d0[0];
      *(float *)(iVar3 + 0x13c) = local_c0;
      *(float *)(iVar3 + 0x140) = local_b0;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x88);
  if (iVar3 == param_3) {
    func_001119F4(&local_a0,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                  iVar3 * 0x30));
    local_c4 = local_9c;
    local_c0 = local_8c;
    local_bc = local_7c;
    iVar3 = *(int *)(param_1 + 4);
    uVar12 = CONCAT44(SQRT(local_9c * local_9c + local_8c * local_8c + local_7c * local_7c),
                      SQRT(local_a0 * local_a0 + local_90 * local_90 + local_80 * local_80));
    fVar15 = SQRT(local_98 * local_98 + local_88 * local_88 + local_78 * local_78);
    if (*(char *)(iVar3 + 0xcb) == '\0') {
      *(float *)(iVar3 + 0xdc) = local_9c;
      *(float *)(iVar3 + 0xe0) = local_8c;
      *(float *)(iVar3 + 0xe4) = local_7c;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0xca) = 0;
    }
    else {
      local_d8 = local_94;
      local_d4 = local_84;
      local_d0[0] = local_74;
      fVar13 = DAT_003797f8;
      func_00115C70(&local_b8,(float *)(*(int *)(param_1 + 4) + 0xd0),&local_d8);
      local_d8 = local_b8;
      local_d4 = local_b4;
      local_d0[0] = local_b0;
      func_00115DC8(&local_d8);
      uVar4 = func_0068C690(&local_d8);
      fVar10 = local_d8 * DAT_003797fc + local_d4 * fVar13 + local_d0[0] * DAT_003797fc;
      fVar14 = DAT_003797fc;
      if (((int)DAT_00379800 < (int)ALBW_AS_U32(fVar10)) ||
         ((DAT_00379800 | DAT_00379800 << 0x19) < (uint)ALBW_AS_U32(fVar10))) {
        uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
        iVar3 = func_0068C690(&local_d8);
        func_004D7F70(&local_d8,uVar4 - iVar3);
        func_00115C54(&local_64,&local_d8,&local_c4);
        local_ac = local_64;
        local_a8 = fStack_60;
        local_a4 = fStack_5c;
        func_00115D88(&local_64,&local_ac,DAT_00379804);
        local_d8 = local_64;
        local_d4 = fStack_60;
        local_d0[0] = fStack_5c;
        func_00115DC8(&local_d8);
      }
      local_b8 = local_d8;
      local_b0 = local_d0[0];
      local_b4 = fVar14;
      func_00115DC8(&local_b8);
      func_004D80A4(&local_70,*(uint *)(*(int *)(param_1 + 4) + 0x124),fVar13);
      fVar10 = local_b8 * local_70 + local_b4 * fVar14 + local_b0 * local_68;
      local_6c = fVar14;
      if (0xbf000000 < (uint)ALBW_AS_U32(fVar10)) {
        uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
        iVar3 = func_0068C690(&local_d8);
        func_004D7F70(&local_d8,uVar4 - iVar3);
      }
      local_48[0] = *(int *)(*(int *)(param_1 + 4) + 0x124) - uVar4;
      uVar5 = func_0058E2B8(local_48);
      if (((uint)ALBW_AS_U32(fVar10) < 0xbf000001) && (uVar6 = *DAT_00379808, uVar6 < uVar5)) {
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x124);
        uVar8 = iVar3 + uVar6;
        uVar6 = iVar3 - uVar6;
        local_ac = ALBW_AS_F32((uVar8 - uVar4));
        uVar5 = func_0058E2B8((int *)&local_ac);
        local_a8 = ALBW_AS_F32((uVar6 - uVar4));
        uVar7 = func_0058E2B8((int *)&local_a8);
        uVar4 = uVar6;
        if (uVar5 < uVar7) {
          uVar4 = uVar8;
        }
        iVar3 = func_0068C690(&local_d8);
        func_004D7F70(&local_d8,uVar4 - iVar3);
      }
      local_b8 = ALBW_AS_F32((*(int *)(*(int *)(param_1 + 4) + 0x124) + -0x80000000));
      fVar10 = DAT_0037980c;
      iVar3 = func_0058E2B8((int *)&local_b8);
      fVar11 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)ALBW_AS_U32((fVar11 * DAT_00379810)) < 0x3f000000) {
        fVar10 = DAT_00379814;
      }
      fVar11 = local_d8 * fVar14 + local_d4 * fVar13 + local_d0[0] * fVar14;
      if ((fVar10 < fVar11) || ((uint)ALBW_AS_U32(DAT_00379818) < (uint)ALBW_AS_U32(fVar11))) {
        if ((int)ALBW_AS_U32(SQRT(local_d8 * local_d8 + local_d0[0] * local_d0[0])) < DAT_0037981c) {
          func_004D80A4(&local_d8,uVar4,fVar13);
          local_d4 = DAT_00379820;
        }
        local_d4 = local_d4 * DAT_00379824;
        if (fVar11 < fVar14) {
          local_d4 = local_d4 * DAT_00379824;
        }
        func_00115DC8(&local_d8);
      }
      iVar3 = *(int *)(param_1 + 4);
      if (*(char *)(iVar3 + 0xcd) == '\0') {
        if (*(char *)(iVar3 + 0xca) == '\0') {
          bVar2 = DAT_00379a88 == local_c4;
          bVar9 = local_c4 <= DAT_00379a88;
          if (!bVar9 || bVar2) {
            bVar2 = local_c4 == DAT_00379a84;
            bVar9 = DAT_00379a84 <= local_c4;
          }
          if ((((bVar9 && !bVar2) || (local_c0 < DAT_00379a88)) || (DAT_00379a84 < local_c0)) ||
             ((local_bc < DAT_00379a88 || (DAT_00379a84 < local_bc)))) {
            bVar2 = func_0014D8A4((float *)(iVar3 + 0xdc),&local_c4,
                                  *(float *)(iVar3 + 0x11c),
                                  *(float *)((char *)(iVar3 + 0x11c) + 4),
                                  DAT_00379a84);
            if (bVar2) {
              *(undefined1 *)(*(int *)(param_1 + 4) + 0xcb) = 0;
            }
          }
          else {
            *(undefined1 *)(iVar3 + 0xcb) = 0;
            iVar3 = *(int *)(param_1 + 4);
            *(float *)(iVar3 + 0xdc) = local_c4;
            *(float *)(iVar3 + 0xe0) = local_c0;
            *(float *)(iVar3 + 0xe4) = local_bc;
          }
        }
        else {
          func_0014D7F4((float *)(iVar3 + 0xdc),&local_d8,*(float *)(iVar3 + 0x11c),
                        *(float *)((char *)(iVar3 + 0x11c) + 4));
        }
      }
      else {
        *(float *)(iVar3 + 0xdc) = local_d8;
        *(float *)(iVar3 + 0xe0) = local_d4;
        *(float *)(iVar3 + 0xe4) = local_d0[0];
        *(float *)(iVar3 + 0xe8) = fVar14;
        *(float *)(iVar3 + 0xec) = fVar14;
        *(float *)(iVar3 + 0xf0) = fVar14;
      }
      iVar3 = *(int *)(param_1 + 4);
      local_b8 = *(float *)(iVar3 + 0xdc);
      local_b4 = *(float *)(iVar3 + 0xe0);
      local_b0 = *(float *)(iVar3 + 0xe4);
      local_ac = local_a0;
      local_a8 = local_90;
      local_a4 = local_80;
      local_70 = local_98;
      local_6c = local_88;
      local_68 = local_78;
      local_9c = local_b8;
      local_8c = local_b4;
      local_7c = local_b0;
      func_00115DC8(&local_b8);
      func_00115E10(&local_70,&local_ac,&local_b8);
      func_00115DC8(&local_70);
      func_00115E10(&local_ac,&local_b8,&local_70);
      local_9c = local_b8;
      local_8c = local_b4;
      local_7c = local_b0;
      local_a0 = local_ac;
      local_90 = local_a8;
      local_80 = local_a4;
      local_98 = local_70;
      local_88 = local_6c;
      local_78 = local_68;
      func_004918CC(&local_a0,ALBW_AS_F32(uVar12),ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)),fVar15);
      func_001151EC((undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                    *(int *)(*(int *)(param_1 + 4) + 0x88) * 0x30),&local_a0);
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x84);
  if (iVar3 == param_3) {
    func_001119F4(local_d0,(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14)
                           + iVar3 * 0x30));
    func_00491E80(&local_a0,*(uint *)(*(int *)(param_1 + 4) + 0x118),
                  *(uint *)(*(int *)(param_1 + 4) + 0x114),0);
    func_001157FC(local_d0,local_d0,&local_a0);
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x24) + 0x14) +
                  *(int *)(*(int *)(param_1 + 4) + 0x84) * 0x30),local_d0);
  }
  return 0;
}

