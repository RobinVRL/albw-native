#include "ghidra_types.h"

extern float DAT_0041e5e8;
extern float DAT_0041e5ec;
extern float DAT_0041e5f0;
extern float DAT_0041e5f4;
extern float DAT_0041e5f8;

// USA 0041E368 <- EU 0041E348 (Ghidra, non-matching)
// GLOBAL DAT_0041e5e8 float
// GLOBAL DAT_0041e5ec float
// GLOBAL DAT_0041e5f0 float
// GLOBAL DAT_0041e5f4 float
// GLOBAL DAT_0041e5f8 float

void func_0041E368(undefined4 *param_1,int param_2,float fparam_0)

{
  ushort uVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint in_fpscr;
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
  float fVar25;
  float fVar26;
  
  fVar2 = DAT_0041e5f4;
  fVar13 = DAT_0041e5f0;
  uVar8 = (uint)*(byte *)(param_2 + 5);
  uVar9 = (uint)*(ushort *)(param_2 + 0xc);
  uVar12 = (uint)*(byte *)(param_2 + 7);
  uVar11 = (uint)*(ushort *)(param_2 + 0xe);
  uVar6 = (uint)*(ushort *)(param_2 + 10);
  uVar3 = (uint)*(ushort *)(param_2 + 8);
  fVar14 = ALBW_AS_F32(param_1[5]);
  fVar15 = ALBW_AS_F32(param_1[3]);
  fVar16 = ALBW_AS_F32(param_1[2]);
  if (*(char *)(param_1[9] + 5) == '\0') {
    fVar20 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar11 + uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar22 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar9 + uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar17 / fVar22;
    fVar22 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = fVar26 / fVar20;
    fVar19 = fVar19 / fVar21;
    fVar18 = fVar18 / fVar24;
  }
  else {
    fVar25 = (float)VectorUnsignedToFloat(uVar11 + uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = (float)VectorUnsignedToFloat(uVar9 + uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fparam_0 = fparam_0 - fVar16 * DAT_0041e5ec;
    fVar23 = (float)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 - fVar15 * DAT_0041e5ec;
    fVar22 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = (fVar24 - DAT_0041e5ec) / fVar26;
    fVar23 = fVar23 + DAT_0041e5e8;
    fVar22 = fVar22 + DAT_0041e5e8;
    fVar19 = (fVar20 - DAT_0041e5ec) / fVar19;
    fVar17 = (fVar25 + DAT_0041e5ec) / fVar17;
    fVar18 = (fVar21 + DAT_0041e5ec) / fVar18;
  }
  fVar26 = DAT_0041e5e8 - fVar26;
  fVar17 = DAT_0041e5e8 - fVar17;
  puVar7 = (uint *)param_1[10];
  uVar1 = (ushort)puVar7[1];
  if ((uint)uVar1 < *puVar7) {
    *(ushort *)(puVar7 + 1) = uVar1 + 1;
    fVar20 = DAT_0041e5f8;
    puVar10 = (undefined2 *)(param_1[10] + (uint)uVar1 * 0x20 + 0x44);
    *puVar10 = (short)(int)(fVar22 * fVar16 * fVar13);
    puVar10[1] = (short)(int)(fVar23 * fVar15 * fVar13);
    puVar10[2] = (short)(int)(fparam_0 * fVar2);
    puVar10[3] = (short)(int)(fVar14 * fVar2);
    *(undefined4 *)(puVar10 + 4) = *param_1;
    *(undefined4 *)(puVar10 + 6) = param_1[1];
    puVar10[8] = (short)(int)(fVar19 * fVar20);
    puVar10[9] = (short)(int)(fVar26 * fVar20);
    puVar10[10] = (short)(int)(fVar18 * fVar20);
    puVar10[0xb] = (short)(int)(fVar17 * fVar20);
    uVar4 = (**(code **)(*(int *)param_1[9] + 0xc))((int *)param_1[9]);
    fVar13 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    puVar10[0xe] = (short)(int)(fVar13 * ALBW_AS_F32(param_1[8]) * ALBW_AS_F32(param_1[2]));
    puVar10[0xf] = puVar10[0xf] & 0x8000 | *(ushort *)(param_2 + 0x12) & 0x7fff;
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(param_2 + 0x14);
    iVar5 = (**(code **)(*(int *)param_1[9] + 0x78))((int *)param_1[9]);
    puVar10[0xf] = puVar10[0xf] & 0x7fff | (ushort)(iVar5 != 0) << 0xf;
  }
  return;
}

