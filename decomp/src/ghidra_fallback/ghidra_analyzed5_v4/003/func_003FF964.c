#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern float DAT_003ffdc0;
extern float DAT_003ffdc4;
extern float DAT_003ffdc8;
extern float DAT_003ffdcc;
extern float DAT_003ffdd0;

// USA 003FF964 <- EU 003FF944 (Ghidra, non-matching)
// GLOBAL DAT_003ffdc0 float
// GLOBAL DAT_003ffdc4 float
// GLOBAL DAT_003ffdc8 float
// GLOBAL DAT_003ffdcc float
// GLOBAL DAT_003ffdd0 float

void func_003FF964(int param_1,uint param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar27;
  ulonglong uVar26;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define local_44 ((float *)(albw_frame + 0x4c))
  bVar2 = *(byte *)(param_1 + 0x44);
  bVar9 = (bVar2 & 1) == 0;
  uVar5 = param_2;
  if (bVar9) {
    uVar5 = (uint)*(byte *)(param_2 + 0x15);
  }
  if (!bVar9 || uVar5 != 0) {
    bVar9 = *(char *)(param_2 + 0x17) != '\0';
    iVar6 = 0;
    if (bVar9) {
      iVar6 = *(int *)(param_1 + 0xc);
    }
    bVar4 = *(byte *)(param_1 + 0x45);
    if (bVar9 && iVar6 != 0) {
      fVar10 = (float)VectorUnsignedToFloat((uint)bVar4,(byte)(in_fpscr >> 0x15) & 3);
      uVar11 = VectorFloatToUnsigned(fVar10 * *(float *)(param_2 + 0x10),3);
      bVar4 = (byte)uVar11;
    }
    *(byte *)(param_1 + 0x46) = bVar4;
    if (((*(char *)(param_1 + 0x45) != '\0') || ((bVar2 & 2) == 0)) ||
       (*(char *)(param_2 + 0x16) != '\0')) {
      uVar5 = bVar2 & 0x10;
      if ((bVar2 & 0x10) != 0) {
        uVar5 = 1;
      }
      uVar5 = uVar5 | param_3;
      if ((bVar2 & 0x40) == 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          pfVar8 = *(float **)(param_2 + 4);
        }
        else {
          pfVar8 = (float *)(*(int *)(param_1 + 0xc) + 0x48);
        }
        if ((bVar2 & 0x20) == 0) {
          if (uVar5 != 0) {
            *(byte *)(param_1 + 0x44) = bVar2 & 0xef;
            uVar25 = *(undefined8 *)(param_1 + 0x34);
            if (*(char *)(param_2 + 0x14) != '\0' && (bVar2 & 4) != 0) {
              uVar25 = CONCAT44(ALBW_AS_F32(((ulonglong)uVar25 >> 0x20)) * *(float *)(param_2 + 0xc),
                                ALBW_AS_F32(uVar25) * *(float *)(param_2 + 8));
            }
            uVar29 = *(undefined8 *)(param_1 + 0x1c);
            fVar10 = *(float *)(param_1 + 0x24);
            uVar1 = ((uint)*(byte *)(param_1 + 0x47) << 0x1a) >> 0x1e;
            uVar11 = (undefined4)((ulonglong)uVar29 >> 0x20);
            if (uVar1 == 1) {
              uVar29 = CONCAT44(uVar11,ALBW_AS_F32(uVar29) -
                                       *(float *)(*(int *)(param_1 + 0xc) + 0x3c) * DAT_003ffdc0);
            }
            else if (uVar1 == 2) {
              uVar29 = CONCAT44(uVar11,ALBW_AS_F32(uVar29) +
                                       *(float *)(*(int *)(param_1 + 0xc) + 0x3c) * DAT_003ffdc0);
            }
            bVar2 = *(byte *)(param_1 + 0x47) >> 6;
            fVar12 = ALBW_AS_F32(((ulonglong)uVar29 >> 0x20));
            if (bVar2 == 1) {
              uVar29 = CONCAT44(fVar12 + *(float *)(*(int *)(param_1 + 0xc) + 0x40) * DAT_003ffdc0,
                                (int)uVar29);
            }
            else if (bVar2 == 2) {
              uVar29 = CONCAT44(fVar12 - *(float *)(*(int *)(param_1 + 0xc) + 0x40) * DAT_003ffdc0,
                                (int)uVar29);
            }
            uVar1 = in_fpscr & 0xfffffff;
            in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x28) == DAT_003ffdc4) << 0x1e;
            bVar9 = false;
            if (SUB41(in_fpscr >> 0x1e,0)) {
              in_fpscr = uVar1 | (uint)(*(float *)(param_1 + 0x2c) == DAT_003ffdc4) << 0x1e;
              bVar9 = SUB41(in_fpscr >> 0x1e,0);
            }
            if (bVar9) {
              in_fpscr = in_fpscr & 0xfffffff |
                         (uint)(*(float *)(param_1 + 0x30) == DAT_003ffdc4) << 0x1e;
              if (SUB41(in_fpscr >> 0x1e,0)) {
                fVar12 = pfVar8[6];
                fVar13 = pfVar8[10];
                fVar16 = pfVar8[5];
                fVar14 = pfVar8[1];
                fVar15 = pfVar8[2];
                fVar17 = pfVar8[9];
                fVar18 = *pfVar8;
                fVar19 = pfVar8[4];
                fVar20 = pfVar8[8];
                fVar21 = pfVar8[3];
                fVar27 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
                fVar30 = ALBW_AS_F32(((ulonglong)uVar29 >> 0x20));
                fVar22 = pfVar8[7];
                fVar24 = ALBW_AS_F32(uVar25);
                fVar23 = pfVar8[0xb];
                *(float *)(param_1 + 0x50) = fVar15;
                fVar28 = ALBW_AS_F32(uVar29);
                *(float *)(param_1 + 0x54) =
                     fVar15 * fVar10 + fVar14 * fVar30 + fVar18 * fVar28 + fVar21;
                *(float *)(param_1 + 0x58) = fVar19 * fVar24;
                *(float *)(param_1 + 0x5c) = fVar16 * fVar27;
                *(float *)(param_1 + 0x60) = fVar12;
                *(float *)(param_1 + 100) =
                     fVar12 * fVar10 + fVar16 * fVar30 + fVar19 * fVar28 + fVar22;
                *(float *)(param_1 + 0x70) = fVar13;
                *(float *)(param_1 + 0x74) =
                     fVar13 * fVar10 + fVar17 * fVar30 + fVar20 * fVar28 + fVar23;
                *(float *)(param_1 + 0x68) = fVar20 * fVar24;
                *(float *)(param_1 + 0x6c) = fVar17 * fVar27;
                *(float *)(param_1 + 0x48) = fVar18 * fVar24;
                *(float *)(param_1 + 0x4c) = fVar14 * fVar27;
              }
              else {
                fVar12 = DAT_003ffdc4;
                func_003E183C(&local_58,&local_54,*(float *)(param_1 + 0x30) * DAT_003ffdc8);
                local_88 = ALBW_AS_F32(uVar25) * local_54;
                local_74 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
                local_84 = -(local_74 * local_58);
                local_78 = ALBW_AS_F32(uVar25) * local_58;
                local_74 = local_74 * local_54;
                local_7c = (undefined4)uVar29;
                local_6c = (undefined4)((ulonglong)uVar29 >> 0x20);
                local_60 = DAT_003ffdcc;
                local_80 = fVar12;
                local_70 = fVar12;
                local_68 = fVar12;
                local_64 = fVar12;
                local_5c = fVar10;
                func_00114E74((float *)(param_1 + 0x48),pfVar8,&local_88);
              }
            }
            else {
              fVar12 = DAT_003ffdc8;
              func_003E183C(&local_58,&local_54,*(float *)(param_1 + 0x28) * DAT_003ffdc8);
              func_003E183C(&local_50,&local_4c,*(float *)(param_1 + 0x2c) * fVar12);
              func_003E183C(&fStack_48,local_44,*(float *)(param_1 + 0x30) * fVar12);
              local_78 = ALBW_AS_F32(uVar25);
              local_68 = -(local_78 * local_50);
              local_60 = local_54 * local_4c;
              local_88 = local_78 * local_4c * local_44[0];
              local_78 = local_78 * local_4c * fStack_48;
              local_74 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
              local_64 = local_74 * local_58 * local_4c;
              local_80 = local_54 * local_44[0] * local_50 + local_58 * fStack_48;
              local_70 = local_54 * fStack_48 * local_50 - local_58 * local_44[0];
              local_84 = local_74 * (local_58 * local_50 * local_44[0] - local_54 * fStack_48);
              local_74 = local_74 * (local_54 * local_44[0] + local_58 * local_50 * fStack_48);
              local_7c = (undefined4)uVar29;
              local_6c = (undefined4)((ulonglong)uVar29 >> 0x20);
              local_5c = fVar10;
              func_00114E74((float *)(param_1 + 0x48),pfVar8,&local_88);
            }
          }
        }
        else {
          uVar5 = 1;
          func_00114E74((float *)(param_1 + 0x48),pfVar8,*(float **)(param_1 + 0x78));
        }
      }
      else {
        uVar5 = 1;
      }
      bVar2 = *(byte *)(param_1 + 0x44);
      bVar9 = (bVar2 & 2) != 0;
      if (bVar9) {
        bVar2 = *(byte *)(param_1 + 0x45);
      }
      if (!bVar9 || bVar2 == 0xff) {
        piVar7 = *(int **)(param_1 + 0x14);
        if (piVar7 == (int *)(param_1 + 0x14)) {
          return;
        }
        do {
          (**(code **)(piVar7[-1] + 0x40))(piVar7 + -1,param_2,uVar5);
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)(param_1 + 0x14));
        return;
      }
      fVar10 = *(float *)(param_2 + 0x10);
      uVar26 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
      uVar3 = *(undefined1 *)(param_2 + 0x17);
      fVar12 = (float)VectorUnsignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_2 + 0x10) = fVar12 * fVar10 * DAT_003ffdd0;
      *(undefined1 *)(param_2 + 0x17) = 1;
      for (piVar7 = *(int **)(param_1 + 0x14); piVar7 != (int *)(param_1 + 0x14);
          piVar7 = (int *)*piVar7) {
        (**(code **)(piVar7[-1] + 0x40))(piVar7 + -1,param_2,uVar5);
        fVar10 = ALBW_AS_F32(uVar26);
      }
      *(float *)(param_2 + 0x10) = fVar10;
      *(undefined1 *)(param_2 + 0x17) = uVar3;
      return;
    }
  }
  if (param_3 == 0) {
    return;
  }
  *(byte *)(param_1 + 0x44) = bVar2 & 0xef | 0x10;
  return;
}

