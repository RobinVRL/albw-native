#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003FF964(int param_1,uint param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_0067F578(int *param_1,int param_2);
extern float DAT_0026e6f4;
extern float DAT_0026e6f8;
extern float DAT_0026e6fc;
extern float DAT_0026e700;

// USA 0026E1B0 <- EU 0026E1D8 (Ghidra, non-matching)
// GLOBAL DAT_0026e6f4 float
// GLOBAL DAT_0026e6f8 float
// GLOBAL DAT_0026e6fc float
// GLOBAL DAT_0026e700 float

undefined4 func_0026E1B0(int param_1,uint param_2,uint param_3,float fparam_0,float fparam_1)

{
  int *piVar1;
  float **ppfVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  float *pfVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_110 (*(float * *)(albw_frame + 0x0))
  #define local_10c (*(float *)(albw_frame + 0x4))
  #define local_108 (*(float *)(albw_frame + 0x8))
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define local_100 (*(float *)(albw_frame + 0x10))
  #define local_fc (*(float *)(albw_frame + 0x14))
  #define local_f8 (*(float *)(albw_frame + 0x18))
  #define local_f4 (*(float *)(albw_frame + 0x1c))
  #define local_f0 (*(float *)(albw_frame + 0x20))
  #define local_ec (*(float *)(albw_frame + 0x24))
  #define local_e8 (*(float *)(albw_frame + 0x28))
  #define local_e4 (*(float *)(albw_frame + 0x2c))
  #define local_e0 (*(float *)(albw_frame + 0x30))
  #define local_dc (*(float *)(albw_frame + 0x34))
  #define local_c0 (*(int *)(albw_frame + 0x50))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x54))
  #define local_b0 (*(float *)(albw_frame + 0x60))
  #define fStack_ac (*(float *)(albw_frame + 0x64))
  #define local_a8 (*(float *)(albw_frame + 0x68))
  #define local_a4 (*(float *)(albw_frame + 0x6c))
  #define local_a0 (*(undefined1 * *)(albw_frame + 0x70))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x74))
  #define local_98 (*(undefined4 *)(albw_frame + 0x78))
  #define local_94 (*(undefined4 *)(albw_frame + 0x7c))
  #define auStack_90 ((undefined1 *)(albw_frame + 0x80))
  #define local_50 (*(int *)(albw_frame + 0xc0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0xc4))
  ppfVar2 = &local_110;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(char *)(param_1 + 0xc1) == '\0') {
      return func_003FF964(param_1,param_2,param_3,fparam_0,fparam_1);
    }
  }
  else if (*(char *)(param_1 + 0xc1) == '\0') {
    bVar6 = *(byte *)(param_1 + 0x44);
    bVar8 = (bVar6 & 1) == 0;
    uVar4 = param_2;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(param_2 + 0x15);
    }
    if (bVar8 && uVar4 == 0) {
      if (param_3 == 0) {
        return 0;
      }
LAB_0026e304:
      *(byte *)(param_1 + 0x44) = bVar6 & 0xef | 0x10;
      return 0;
    }
    bVar8 = *(char *)(param_2 + 0x17) != '\0';
    iVar5 = 0;
    if (bVar8) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    bVar3 = *(byte *)(param_1 + 0x45);
    if (bVar8 && iVar5 != 0) {
      fVar9 = (float)VectorUnsignedToFloat((uint)bVar3,(byte)(in_fpscr >> 0x15) & 3);
      uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_2 + 0x10),3);
      bVar3 = (byte)uVar10;
    }
    *(byte *)(param_1 + 0x46) = bVar3;
    if (((*(char *)(param_1 + 0x45) == '\0') && ((bVar6 & 2) != 0)) &&
       (*(char *)(param_2 + 0x16) == '\0')) {
      if (param_3 == 0) {
        return 0;
      }
      goto LAB_0026e304;
    }
    bVar3 = bVar6 & 0x10;
    iVar5 = *(int *)(param_1 + 0xc);
    if ((bVar6 & 0x10) != 0) {
      bVar3 = 1;
    }
    if ((bVar6 & 0x40) == 0) {
      if (iVar5 == 0) {
        pfVar7 = *(float **)(param_2 + 4);
      }
      else {
        pfVar7 = (float *)(iVar5 + 0x48);
      }
      if ((bVar6 & 0x20) == 0) {
        if (param_3 != 0 || bVar3 != 0) {
          *(byte *)(param_1 + 0x44) = bVar6 & 0xef;
          uVar12 = *(undefined8 *)(param_1 + 0x34);
          if (*(char *)(param_2 + 0x14) != '\0' && (bVar6 & 4) != 0) {
            uVar12 = CONCAT44(ALBW_AS_F32(((ulonglong)uVar12 >> 0x20)) * *(float *)(param_2 + 0xc),
                              ALBW_AS_F32(uVar12) * *(float *)(param_2 + 8));
          }
          uVar14 = *(undefined8 *)(param_1 + 0x1c);
          fVar9 = *(float *)(param_1 + 0x24);
          uVar4 = ((uint)*(byte *)(param_1 + 0x47) << 0x1a) >> 0x1e;
          uVar10 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (uVar4 == 1) {
            uVar14 = CONCAT44(uVar10,ALBW_AS_F32(uVar14) - *(float *)(iVar5 + 0x3c) * DAT_0026e6f4);
          }
          else if (uVar4 == 2) {
            uVar14 = CONCAT44(uVar10,ALBW_AS_F32(uVar14) + *(float *)(iVar5 + 0x3c) * DAT_0026e6f4);
          }
          bVar6 = *(byte *)(param_1 + 0x47) >> 6;
          fVar11 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
          if (bVar6 == 1) {
            uVar14 = CONCAT44(fVar11 + *(float *)(iVar5 + 0x40) * DAT_0026e6f4,(int)uVar14);
          }
          else if (bVar6 == 2) {
            uVar14 = CONCAT44(fVar11 - *(float *)(iVar5 + 0x40) * DAT_0026e6f4,(int)uVar14);
          }
          uVar4 = in_fpscr & 0xfffffff;
          in_fpscr = uVar4 | (uint)(*(float *)(param_1 + 0x28) == DAT_0026e6f8) << 0x1e;
          bVar8 = false;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            in_fpscr = uVar4 | (uint)(*(float *)(param_1 + 0x2c) == DAT_0026e6f8) << 0x1e;
            bVar8 = SUB41(in_fpscr >> 0x1e,0);
          }
          if (bVar8) {
            in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(param_1 + 0x30) == DAT_0026e6f8) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar11 = DAT_0026e6f8;
              func_003E183C((float *)&local_110,&local_10c,*(float *)(param_1 + 0x30) * DAT_0026e6fc
                           );
              local_108 = ALBW_AS_F32(uVar12) * local_10c;
              local_f4 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
              local_104 = -(local_f4 * ALBW_AS_F32(local_110));
              local_f8 = ALBW_AS_F32(uVar12) * ALBW_AS_F32(local_110);
              local_f4 = local_f4 * local_10c;
              local_fc = ALBW_AS_F32(uVar14);
              local_ec = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
              local_e0 = DAT_0026e700;
              local_100 = fVar11;
              local_f0 = fVar11;
              local_e8 = fVar11;
              local_e4 = fVar11;
              local_dc = fVar9;
              goto LAB_0026e570;
            }
            local_f0 = pfVar7[6];
            local_e0 = pfVar7[10];
            local_100 = pfVar7[2];
            local_e4 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
            local_104 = pfVar7[1] * local_e4;
            fVar13 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
            local_e8 = ALBW_AS_F32(uVar12);
            local_f8 = pfVar7[4] * local_e8;
            local_f4 = pfVar7[5] * local_e4;
            local_108 = *pfVar7 * local_e8;
            local_e4 = pfVar7[9] * local_e4;
            fVar11 = ALBW_AS_F32(uVar14);
            local_e8 = pfVar7[8] * local_e8;
            local_ec = local_f0 * fVar9 + pfVar7[5] * fVar13 + pfVar7[4] * fVar11 + pfVar7[7];
            local_dc = local_e0 * fVar9 + pfVar7[9] * fVar13 + pfVar7[8] * fVar11 + pfVar7[0xb];
            local_fc = local_100 * fVar9 + pfVar7[1] * fVar13 + *pfVar7 * fVar11 + pfVar7[3];
          }
          else {
            fVar11 = DAT_0026e6fc;
            func_003E183C(&local_b0,(float *)&local_110,*(float *)(param_1 + 0x28) * DAT_0026e6fc);
            func_003E183C(&fStack_ac,&local_a8,*(float *)(param_1 + 0x2c) * fVar11);
            func_003E183C(&local_a4,&local_10c,*(float *)(param_1 + 0x30) * fVar11);
            local_e0 = ALBW_AS_F32(local_110) * local_a8;
            fVar11 = ALBW_AS_F32(uVar12);
            local_108 = fVar11 * local_a8 * local_10c;
            local_f8 = fVar11 * local_a8 * local_a4;
            fVar13 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
            local_f4 = fVar13 * (ALBW_AS_F32(local_110) * local_10c + local_b0 * fStack_ac * local_a4);
            local_fc = ALBW_AS_F32(uVar14);
            local_104 = fVar13 * (local_b0 * fStack_ac * local_10c - ALBW_AS_F32(local_110) * local_a4);
            local_ec = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
            local_100 = ALBW_AS_F32(local_110) * local_10c * fStack_ac + local_b0 * local_a4;
            local_f0 = ALBW_AS_F32(local_110) * local_a4 * fStack_ac - local_b0 * local_10c;
            local_e8 = -(fVar11 * fStack_ac);
            local_e4 = fVar13 * local_b0 * local_a8;
            local_dc = fVar9;
LAB_0026e570:
            func_00114E74(&local_108,pfVar7,&local_108);
          }
          *(float *)(param_1 + 0x48) = local_108;
          *(float *)(param_1 + 0x4c) = local_104;
          *(float *)(param_1 + 0x50) = local_100;
          *(float *)(param_1 + 0x54) = local_fc;
          *(float *)(param_1 + 0x58) = local_f8;
          *(float *)(param_1 + 0x5c) = local_f4;
          *(float *)(param_1 + 0x60) = local_f0;
          *(float *)(param_1 + 100) = local_ec;
          *(float *)(param_1 + 0x68) = local_e8;
          *(float *)(param_1 + 0x6c) = local_e4;
          *(float *)(param_1 + 0x70) = local_e0;
          *(float *)(param_1 + 0x74) = local_dc;
          *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xbf;
        }
      }
      else {
        func_00114E74((float *)&local_110,pfVar7,*(float **)(param_1 + 0x78));
        *(float **)(param_1 + 0x48) = local_110;
        *(float *)(param_1 + 0x4c) = local_10c;
        *(float *)(param_1 + 0x50) = local_108;
        *(float *)(param_1 + 0x54) = local_104;
        *(float *)(param_1 + 0x58) = local_100;
        *(float *)(param_1 + 0x5c) = local_fc;
        *(float *)(param_1 + 0x60) = local_f8;
        *(float *)(param_1 + 100) = local_f4;
        *(float *)(param_1 + 0x68) = local_f0;
        *(float *)(param_1 + 0x6c) = local_ec;
        *(float *)(param_1 + 0x70) = local_e8;
        *(float *)(param_1 + 0x74) = local_e4;
        *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xbf;
      }
    }
    for (piVar1 = *(int **)(param_1 + 0x14); piVar1 != (int *)(param_1 + 0x14);
        piVar1 = (int *)*piVar1) {
      bVar6 = *(byte *)(piVar1 + 0x10);
      bVar8 = (bVar6 & 1) == 0;
      if (bVar8) {
        bVar6 = *(byte *)(param_2 + 0x15);
      }
      if (!bVar8 || bVar6 != 0) {
        bVar8 = *(char *)(param_2 + 0x17) != '\0';
        iVar5 = 0;
        if (bVar8) {
          iVar5 = piVar1[2];
        }
        bVar6 = *(byte *)((int)piVar1 + 0x41);
        if (bVar8 && iVar5 != 0) {
          fVar9 = (float)VectorUnsignedToFloat((uint)bVar6,(byte)(in_fpscr >> 0x15) & 3);
          uVar10 = VectorFloatToUnsigned(fVar9 * *(float *)(param_2 + 0x10),3);
          bVar6 = (byte)uVar10;
        }
        *(byte *)((int)piVar1 + 0x42) = bVar6;
      }
    }
    local_a0 = auStack_90;
    uStack_9c = 0x40;
    local_50 = param_1 + 0xb4;
    uStack_4c = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    ppfVar2 = (float **)&local_a0;
    local_94 = 0;
    local_98 = 0;
    goto LAB_0026e6e4;
  }
  func_003FF964(param_1,param_2,param_3,fparam_0,fparam_1);
  local_110 = &local_100;
  local_10c = 8.96831e-44;
  local_c0 = param_1 + 0xb4;
  uStack_bc = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  local_104 = 0.0;
  local_108 = 0.0;
LAB_0026e6e4:
  return func_0067F578((int *)ppfVar2,param_1);
}

