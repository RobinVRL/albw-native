#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern float func_003F42A4(uint *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern float DAT_003f4a1c;
extern float DAT_003f4a20;
extern int DAT_003f4a24;

// USA 003F4750 <- EU 003F4730 (Ghidra, non-matching)
// GLOBAL DAT_003f4a1c float
// GLOBAL DAT_003f4a20 float
// GLOBAL DAT_003f4a24 int

void func_003F4750(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar4 = 0;
  puVar3 = param_2;
  if (param_2[0x40] != 0) {
    do {
      fVar5 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = func_003F42A4((uint *)param_2[uVar4 + 0x41],puVar3,param_3,fVar5);
      iVar1 = uVar4 + 0x41;
      uVar4 = uVar4 + 1;
      param_2[*(int *)(param_2[iVar1] + 8) + 0x5a] = ALBW_AS_U32(fVar5);
      puVar3 = extraout_r1;
    } while (uVar4 < (uint)param_2[0x40]);
  }
  if ((param_2[2] & 4) != 0) {
    fVar20 = ALBW_AS_F32(param_2[0x5c]);
    fVar12 = ALBW_AS_F32(param_2[0x5f]) * DAT_003f4a1c;
    uVar22 = *(undefined8 *)(param_2 + 0x5d);
    fVar19 = ALBW_AS_F32(param_2[0x60]);
    fVar18 = ALBW_AS_F32(param_2[0x61]);
    uVar16 = *(undefined8 *)(param_2 + 0x62);
    uVar17 = param_2[100];
    fVar5 = DAT_003f4a1c;
    uVar21 = func_00114608((uint)ALBW_AS_U32(fVar12),(uint)puVar3);
    iVar1 = DAT_003f4a24;
    uVar4 = (uint)uVar21 & 0xffffff;
    pfVar2 = (float *)(DAT_003f4a24 + ((uint)uVar21 >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *pfVar2 + pfVar2[1] * fVar6 * DAT_003f4a20;
    fVar15 = pfVar2[2] + pfVar2[3] * fVar6 * DAT_003f4a20;
    fVar6 = DAT_003f4a20;
    uVar21 = func_00114608((uint)ALBW_AS_U32((fVar19 * fVar5)),uVar4);
    uVar4 = (uint)uVar21 & 0xffffff;
    pfVar2 = (float *)(iVar1 + ((uint)uVar21 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = *pfVar2 + pfVar2[1] * fVar7 * fVar6;
    fVar10 = pfVar2[2] + pfVar2[3] * fVar7 * fVar6;
    uVar21 = func_00114608((uint)ALBW_AS_U32((fVar18 * fVar5)),uVar4);
    uVar4 = (uint)uVar21 & 0xffffff;
    pfVar2 = (float *)(iVar1 + ((uint)uVar21 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = pfVar2[2] + pfVar2[3] * fVar7 * fVar6;
    fVar7 = *pfVar2 + pfVar2[1] * fVar7 * fVar6;
    fVar14 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
    fVar13 = ALBW_AS_F32(uVar22);
    param_2[0x7f] = ALBW_AS_U32(fVar10 * fVar8 * fVar20);
    param_2[0x83] = ALBW_AS_U32(fVar10 * fVar7 * fVar20);
    param_2[0x87] = ALBW_AS_U32(-(fVar20 * fVar11));
    param_2[0x80] = ALBW_AS_U32(fVar13 * (fVar9 * fVar11 * fVar8 - fVar15 * fVar7));
    param_2[0x84] = ALBW_AS_U32(fVar13 * (fVar15 * fVar8 + fVar9 * fVar11 * fVar7));
    param_2[0x88] = ALBW_AS_U32(fVar9 * fVar10 * fVar13);
    param_2[0x81] = ALBW_AS_U32((fVar9 * fVar7 + fVar15 * fVar8 * fVar11) * fVar14);
    param_2[0x85] = ALBW_AS_U32((fVar11 * fVar15 * fVar7 - fVar9 * fVar8) * fVar14);
    param_2[0x89] = ALBW_AS_U32(fVar15 * fVar10 * fVar14);
    param_2[0x82] = (int)uVar16;
    param_2[0x86] = (int)((ulonglong)uVar16 >> 0x20);
    param_2[0x8a] = uVar17;
    uVar22 = func_00114608((uint)ALBW_AS_U32(fVar12),uVar4);
    uVar4 = (uint)uVar22 & 0xffffff;
    pfVar2 = (float *)(iVar1 + ((uint)uVar22 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = *pfVar2 + pfVar2[1] * fVar7 * fVar6;
    fVar11 = pfVar2[2] + pfVar2[3] * fVar7 * fVar6;
    uVar22 = func_00114608((uint)ALBW_AS_U32((fVar19 * fVar5)),uVar4);
    uVar4 = (uint)uVar22 & 0xffffff;
    pfVar2 = (float *)(iVar1 + ((uint)uVar22 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *pfVar2 + pfVar2[1] * fVar7 * fVar6;
    fVar10 = pfVar2[2] + pfVar2[3] * fVar7 * fVar6;
    uVar22 = func_00114608((uint)ALBW_AS_U32((fVar18 * fVar5)),uVar4);
    pfVar2 = (float *)(iVar1 + ((uint)uVar22 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat((uint)uVar22 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *pfVar2 + pfVar2[1] * fVar5 * fVar6;
    fVar5 = pfVar2[2] + pfVar2[3] * fVar5 * fVar6;
    param_2[0x73] = ALBW_AS_U32(fVar10 * fVar5);
    param_2[0x77] = ALBW_AS_U32(fVar10 * fVar7);
    param_2[0x7b] = ALBW_AS_U32(-fVar9);
    param_2[0x74] = ALBW_AS_U32(fVar8 * fVar9 * fVar5 - fVar11 * fVar7);
    param_2[0x78] = ALBW_AS_U32(fVar11 * fVar5 + fVar8 * fVar9 * fVar7);
    param_2[0x7c] = ALBW_AS_U32(fVar8 * fVar10);
    param_2[0x75] = ALBW_AS_U32(fVar8 * fVar7 + fVar11 * fVar5 * fVar9);
    param_2[0x79] = ALBW_AS_U32(fVar9 * fVar11 * fVar7 - fVar8 * fVar5);
    param_2[0x7d] = ALBW_AS_U32(fVar11 * fVar10);
    param_2[0x76] = (int)uVar16;
    param_2[0x7a] = (int)((ulonglong)uVar16 >> 0x20);
    param_2[0x7e] = uVar17;
  }
  return;
}

