#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004ED46C(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0058A960(int param_1);
extern int func_0058AD80(int param_1,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0020af00;
extern float DAT_0020af04;
extern float DAT_0020af08;
extern undefined DAT_0020af0c;
extern float DAT_0020af18;
extern int DAT_0020af1c;
extern int DAT_0020af20;
extern int DAT_0020af24;
extern int *DAT_0020af28;
extern float DAT_0020af2c;
extern float DAT_0020af30;
extern float DAT_0020af34;
extern uint DAT_0020b0f4;
extern float DAT_0020b0f8;
extern float DAT_0020b0fc;
extern float DAT_0020b100;
extern float DAT_0020b104;
extern float DAT_0020b108;
extern int DAT_0020b10c;
extern char s_Crash_0020af10[];

// USA 0020AB50 <- EU 0020AB50 (Ghidra, non-matching)
// GLOBAL DAT_0020af00 float
// GLOBAL DAT_0020af04 float
// GLOBAL DAT_0020af08 float
// GLOBAL DAT_0020af0c undefined
// GLOBAL DAT_0020af18 float
// GLOBAL DAT_0020af1c int
// GLOBAL DAT_0020af20 int
// GLOBAL DAT_0020af24 int
// GLOBAL DAT_0020af28 int *
// GLOBAL DAT_0020af2c float
// GLOBAL DAT_0020af30 float
// GLOBAL DAT_0020af34 float
// GLOBAL DAT_0020b0f4 uint
// GLOBAL DAT_0020b0f8 float
// GLOBAL DAT_0020b0fc float
// GLOBAL DAT_0020b100 float
// GLOBAL DAT_0020b104 float
// GLOBAL DAT_0020b108 float
// GLOBAL DAT_0020b10c int
// GLOBAL s_Crash_0020af10 string

undefined4 func_0020AB50(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 ((int *)(albw_frame + 0xc))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(int *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(undefined4 *)(albw_frame + 0x44))
  #define local_68 (*(int *)(albw_frame + 0x48))
  #define local_64 (*(int *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_50 (*(int *)(albw_frame + 0x60))
  #define local_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define fStack_34 (*(float *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  fVar9 = DAT_0020af08;
  fVar15 = DAT_0020af04;
  *(int *)(param_1 + 1000) =
       (int)(*(float *)(param_1 + 0xbe4) * DAT_0020af00) + *(int *)(param_1 + 1000);
  if (*(char *)(param_1 + 0x990) != '\0') {
    *(float *)(param_1 + 0x988) = fVar9;
    fVar14 = fVar9;
    func_00115DC8((float *)(param_1 + 0x984));
    fVar11 = *(float *)(param_1 + 0x3dc);
    fVar12 = *(float *)(param_1 + 0x3e4);
    bVar10 = false;
    fVar13 = *(float *)(param_1 + 0x984) * fVar11;
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar9 <= fVar13) << 0x1d;
    if (!SUB41(uVar6 >> 0x1d,0)) {
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar9) << 0x1f |
              (uint)(fVar11 == fVar9) << 0x1e;
      bVar10 = true;
      bVar2 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar11) || NAN(fVar9))) {
        *(float *)(param_1 + 0x3dc) = -(*(float *)(param_1 + 0x984) * fVar11);
      }
      else {
        *(float *)(param_1 + 0x3dc) = fVar13;
      }
    }
    fVar11 = *(float *)(param_1 + 0x98c) * fVar12;
    uVar8 = uVar6 & 0xfffffff | (uint)(fVar9 < fVar11) << 0x1f | (uint)(fVar9 == fVar11) << 0x1e;
    in_fpscr = uVar8 | (uint)(NAN(fVar9) || NAN(fVar11)) << 0x1c;
    bVar2 = (byte)(uVar8 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      if (bVar10) goto LAB_0020ac1c;
    }
    else {
      uVar6 = uVar6 & 0xfffffff | (uint)(fVar12 < fVar9) << 0x1f | (uint)(fVar12 == fVar9) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(fVar12) || NAN(fVar9)) << 0x1c;
      bVar2 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(float *)(param_1 + 0x3e4) = -(*(float *)(param_1 + 0x98c) * fVar12);
      }
      else {
        *(float *)(param_1 + 0x3e4) = fVar11;
      }
LAB_0020ac1c:
      if (*(char *)(param_1 + 0xd04) == '\0') {
        if (*(int *)(param_1 + 0x344) == 0) {
          fVar11 = 0.0;
          iVar4 = 0;
        }
        else {
          func_004A1B9C((int *)&local_90,*(int *)(param_1 + 0x344),(uint *)s_Crash_0020af10);
          fVar11 = local_90;
          iVar4 = local_8c;
        }
        local_b0 = *(float *)(param_1 + 0xcec);
        local_ac = *(float *)(param_1 + 0xcf0);
        local_a8 = *(float *)(param_1 + 0xcf4);
        func_004D7F70(&local_b0,0x80000000);
        if ((fVar11 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar11) + 0x1c) == iVar4)) {
          local_40 = DAT_0020af18;
          fVar12 = local_b0 * fVar9 + local_ac * DAT_0020af18 + local_a8 * fVar9;
          uVar6 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar9) << 0x1f |
                  (uint)(fVar12 == fVar9) << 0x1e;
          in_fpscr = uVar6 | (uint)(NAN(fVar12) || NAN(fVar9)) << 0x1c;
          bVar2 = (byte)(uVar6 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar12 = -fVar12;
          }
          local_44 = fVar9;
          if (DAT_0020af1c < (int)ALBW_AS_U32(fVar12)) {
            local_44 = DAT_0020af18;
            local_40 = fVar9;
          }
          fVar12 = DAT_0020af18;
          local_3c = fVar9;
          func_00115E10(&local_38,&local_44,&local_b0);
          local_58 = local_38;
          local_54 = fStack_34;
          local_50 = iStack_30;
          func_00115DC8(&local_58);
          func_00115E10(&local_38,&local_b0,&local_58);
          local_94 = local_38;
          local_90 = fStack_34;
          local_8c = iStack_30;
          func_00115DC8(&local_94);
          local_88 = local_58;
          local_78 = local_54;
          local_68 = local_50;
          local_84 = local_94;
          local_74 = local_90;
          local_64 = local_8c;
          local_80 = local_b0;
          local_70 = local_ac;
          local_60 = local_a8;
          local_7c = *(undefined4 *)(param_1 + 0xcf8);
          local_6c = *(undefined4 *)(param_1 + 0xcfc);
          local_5c = *(undefined4 *)(param_1 + 0xd00);
          func_004A2E80((int)ALBW_AS_U32(fVar11),&local_88,fVar12);
        }
      }
      else {
        if (*(int *)(param_1 + 0x344) == 0) {
          fVar11 = 0.0;
          fVar12 = 0.0;
        }
        else {
          func_004A1B9C((int *)&local_b0,*(int *)(param_1 + 0x344),(uint *)&DAT_0020af0c);
          fVar11 = local_ac;
          fVar12 = local_b0;
        }
        if ((fVar12 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar12) + 0x1c) == fVar11)) {
          func_004A2F38((int)ALBW_AS_U32(fVar12),(undefined4 *)(param_1 + 0xcf8));
        }
      }
    }
    iVar4 = func_0068C690((float *)(param_1 + 0x3dc));
    puVar5 = (uint *)func_0058A7D4();
    uVar6 = func_00111A64(puVar5);
    uVar6 = DAT_0020af24 + (int)((ulonglong)uVar6 * 0x3c >> 0x20) * DAT_0020af20 * 0x20 + iVar4;
    func_004D80A4((float *)(param_1 + 0x3dc),uVar6,*(float *)(param_1 + 0xbe0) * fVar15);
    piVar3 = DAT_0020af28;
    *(float *)(param_1 + 0x3e0) = fVar9;
    *(uint *)(param_1 + 0xbcc) = uVar6;
    fVar9 = fVar14;
    func_004ED46C(*piVar3,1);
  }
  if ((*(int *)(param_1 + 0xbdc) == 0x3f800000) &&
     ((iVar4 = func_0058A960(param_1), iVar4 != 0 ||
      ((*(uint *)(param_1 + 0xbd4) <= *(uint *)(param_1 + 0xbd0) &&
       (iVar4 = func_0058AD80(param_1,fVar9), iVar4 != 0)))))) {
    *(float *)(param_1 + 0xbdc) = fVar9;
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0xbdc) == fVar9) << 0x1e;
  bVar10 = false;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0xbe0) == fVar9) << 0x1e;
    bVar10 = SUB41(uVar6 >> 0x1e,0);
  }
  if (bVar10) {
    pfVar7 = (float *)(param_1 + 0xbe4);
    fVar14 = *pfVar7;
    fVar11 = DAT_0020af2c - fVar14;
    uVar8 = uVar6 & 0xfffffff;
    uVar1 = uVar8 | (uint)(fVar11 < DAT_0020af30) << 0x1f | (uint)(fVar11 == DAT_0020af30) << 0x1e;
    uVar6 = uVar1 | (uint)(NAN(fVar11) || NAN(DAT_0020af30)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
      uVar8 = uVar8 | (uint)(DAT_0020af34 < fVar11) << 0x1f | (uint)(DAT_0020af34 == fVar11) << 0x1e
      ;
      uVar6 = uVar8 | (uint)(NAN(DAT_0020af34) || NAN(fVar11)) << 0x1c;
      bVar2 = (byte)(uVar8 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
        *pfVar7 = DAT_0020af2c;
        iVar4 = func_0058AD80(param_1,fVar9);
        if ((iVar4 != 0) || (*(uint *)(param_1 + 0xbec) <= *(uint *)(param_1 + 0xbe8))) {
          pfVar7 = (float *)func_00520FC0();
          func_00115C70(&local_9c,pfVar7,(float *)(param_1 + 0x3d0));
          local_b0 = local_9c;
          local_ac = ALBW_AS_F32(uStack_98);
          local_a8 = local_94;
          local_a4[0] = func_0068C690(&local_b0);
          local_a4[0] = local_a4[0] - *(int *)(param_1 + 1000);
          uVar8 = func_0058E2B8(local_a4);
          if (uVar8 < DAT_0020b0f4) {
            return func_0065D630((undefined4 *)(param_1 + 0x8bc),0x17);
          }
        }
        if (*(uint *)(param_1 + 0xbe8) < *(uint *)(param_1 + 0xbec)) {
          *(uint *)(param_1 + 0xbe8) = *(uint *)(param_1 + 0xbe8) + 1;
        }
        goto LAB_0020afe4;
      }
      fVar14 = fVar14 - DAT_0020af30;
    }
    else {
      fVar14 = fVar14 + DAT_0020af30;
    }
    *pfVar7 = fVar14;
  }
LAB_0020afe4:
  fVar9 = *(float *)(param_1 + 0xbdc);
  if (fVar9 == 1.0) {
    fVar14 = *(float *)(param_1 + 0xbe0);
    fVar12 = 1.0 - fVar14;
    uVar8 = uVar6 & 0xfffffff | (uint)(fVar12 < DAT_0020b0fc) << 0x1f |
            (uint)(fVar12 == DAT_0020b0fc) << 0x1e;
    bVar2 = (byte)(uVar8 >> 0x18);
    fVar11 = DAT_0020b0fc;
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar12) || NAN(DAT_0020b0fc)))
    goto LAB_0020b010;
    uVar8 = uVar6 & 0xfffffff | (uint)(DAT_0020b100 <= fVar12) << 0x1d;
    bVar2 = (byte)(uVar8 >> 0x18);
joined_r0x0020b040:
    if ((bool)(bVar2 >> 5)) {
      *(float *)(param_1 + 0xbe0) = fVar9;
      goto LAB_0020b06c;
    }
    fVar14 = fVar14 - fVar11;
  }
  else {
    fVar14 = *(float *)(param_1 + 0xbe0);
    fVar12 = fVar9 - fVar14;
    uVar8 = uVar6 & 0xfffffff | (uint)(fVar12 < DAT_0020b0f8) << 0x1f |
            (uint)(fVar12 == DAT_0020b0f8) << 0x1e;
    bVar2 = (byte)(uVar8 >> 0x18);
    fVar11 = DAT_0020b0f8;
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar12) || NAN(DAT_0020b0f8))) {
      uVar8 = uVar6 & 0xfffffff | (uint)(DAT_0020b104 <= fVar12) << 0x1d;
      bVar2 = (byte)(uVar8 >> 0x18);
      goto joined_r0x0020b040;
    }
LAB_0020b010:
    fVar14 = fVar14 + fVar11;
  }
  *(float *)(param_1 + 0xbe0) = fVar14;
LAB_0020b06c:
  fVar9 = DAT_0020b108;
  uVar6 = *(uint *)(param_1 + 0xbcc);
  pfVar7 = (float *)(DAT_0020b10c + (uVar6 >> 0x18) * 0x10);
  fVar14 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) =
       (*pfVar7 + pfVar7[1] * fVar14 * DAT_0020b108) * fVar15 * *(float *)(param_1 + 0xbe0);
  fVar14 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
  *(float *)(param_1 + 0x3e4) =
       (pfVar7[2] + pfVar7[3] * fVar14 * fVar9) * fVar15 * *(float *)(param_1 + 0xbe0);
  if (*(uint *)(param_1 + 0xbd0) < *(uint *)(param_1 + 0xbd4)) {
    *(uint *)(param_1 + 0xbd0) = *(uint *)(param_1 + 0xbd0) + 1;
  }
  return 0;
}

