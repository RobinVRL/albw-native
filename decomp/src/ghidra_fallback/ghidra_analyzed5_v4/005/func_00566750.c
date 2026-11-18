#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern uint DAT_005669ec;
extern float DAT_005669f0;
extern int DAT_005669f4;
extern float DAT_005669f8;
extern int DAT_005669fc;

// USA 00566750 <- EU 00566728 (Ghidra, non-matching)
// GLOBAL DAT_005669ec uint
// GLOBAL DAT_005669f0 float
// GLOBAL DAT_005669f4 int
// GLOBAL DAT_005669f8 float
// GLOBAL DAT_005669fc int

void func_00566750(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  uint in_fpscr;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((float *)(albw_frame + 0x8))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_2c (*(int *)(albw_frame + 0x54))
  #define iStack_28 (*(int *)(albw_frame + 0x58))
  iVar1 = DAT_005669f4;
  uVar8 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar27 = (ulonglong)DAT_005669ec;
    fVar24 = DAT_005669f0;
    fVar25 = DAT_005669f8;
    local_2c = param_1;
    iStack_28 = param_2;
    do {
      puVar9 = (undefined4 *)(*(int *)(param_2 + 0xc) + uVar8 * 0x40);
      puVar7 = (undefined4 *)(*(int *)(local_2c + 0x70) + uVar8 * 100);
      uVar3 = puVar7[3];
      uVar5 = puVar7[4];
      puVar9[1] = puVar7[2];
      puVar9[2] = uVar3;
      puVar9[3] = uVar5;
      pfVar6 = (float *)(puVar9 + 4);
      fVar26 = ALBW_AS_F32(uVar27);
      fVar15 = ABS(ALBW_AS_F32(puVar7[6]) * fVar26);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar25 <= ALBW_AS_F32(puVar7[7]) * fVar26) << 0x1d;
      fVar16 = ABS(ALBW_AS_F32(puVar7[7]) * fVar26);
      for (fVar12 = ABS(ALBW_AS_F32(puVar7[5]) * fVar26); DAT_005669fc <= (int)ALBW_AS_U32(fVar12);
          fVar12 = fVar12 - fVar24) {
      }
      for (; DAT_005669fc <= (int)ALBW_AS_U32(fVar15); fVar15 = fVar15 - fVar24) {
      }
      for (; DAT_005669fc <= (int)ALBW_AS_U32(fVar16); fVar16 = fVar16 - fVar24) {
      }
      uVar13 = VectorFloatToUnsigned(fVar12,3);
      uVar17 = VectorFloatToUnsigned(fVar15,3);
      uVar18 = VectorFloatToUnsigned(fVar16,3);
      fVar23 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar4 = (float *)(iVar1 + (uVar13 & 0xff) * 0x10);
      fVar21 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar22 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
      pfVar10 = (float *)(iVar1 + (uVar18 & 0xff) * 0x10);
      pfVar11 = (float *)(iVar1 + (uVar17 & 0xff) * 0x10);
      fVar19 = *pfVar4 + (fVar12 - fVar23) * pfVar4[2];
      uVar27 = CONCAT44(pfVar10[2],fVar26);
      fVar14 = *pfVar11 + (fVar15 - fVar21) * pfVar11[2];
      fVar20 = *pfVar10 + (fVar16 - fVar22) * pfVar10[2];
      fVar12 = pfVar4[1] + (fVar12 - fVar23) * pfVar4[3];
      fVar15 = pfVar11[1] + (fVar15 - fVar21) * pfVar11[3];
      fVar16 = pfVar10[1] + (fVar16 - fVar22) * pfVar10[3];
      if (ALBW_AS_F32(puVar7[5]) * fVar26 < fVar25) {
        fVar19 = -fVar19;
      }
      if (ALBW_AS_F32(puVar7[6]) * fVar26 < fVar25) {
        fVar14 = -fVar14;
      }
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar20 = -fVar20;
      }
      *pfVar6 = fVar16 * fVar15;
      puVar9[8] = ALBW_AS_U32(fVar20 * fVar15);
      puVar9[0xd] = ALBW_AS_U32(fVar19 * fVar15);
      puVar9[0xe] = ALBW_AS_U32(fVar12 * fVar15);
      puVar9[10] = ALBW_AS_U32(fVar12 * fVar20 * fVar14 - fVar19 * fVar16);
      puVar9[9] = ALBW_AS_U32(fVar12 * fVar16 + fVar19 * fVar20 * fVar14);
      puVar9[0xc] = ALBW_AS_U32(-fVar14);
      puVar9[5] = ALBW_AS_U32(fVar19 * fVar16 * fVar14 - fVar12 * fVar20);
      puVar9[6] = ALBW_AS_U32(fVar19 * fVar20 + fVar12 * fVar16 * fVar14);
      puVar9[7] = 0;
      puVar9[0xb] = 0;
      puVar9[0xf] = 0;
      local_78[1] = 0.0;
      local_78[0] = 1.0;
      local_78[2] = 0.0;
      local_78[3] = ALBW_AS_F32(puVar7[8]);
      uStack_68 = 0;
      uStack_64 = 0x3f800000;
      local_60 = 0;
      local_5c = puVar7[9];
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0x3f800000;
      local_4c = puVar7[10];
      func_00114E74(pfVar6,local_78,pfVar6);
      *puVar9 = *puVar7;
      puVar2 = (uint *)(*(int *)(param_2 + 0xc) + uVar8 * 0x40);
      uVar8 = uVar8 + 1;
      *puVar2 = *puVar2 | 2;
    } while (uVar8 < *(uint *)(param_2 + 0x10));
  }
  return;
}

