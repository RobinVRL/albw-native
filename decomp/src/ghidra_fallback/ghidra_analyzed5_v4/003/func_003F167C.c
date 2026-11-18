#include "ghidra_types.h"

extern int *DAT_003f17c4;
extern uint DAT_003f17c8;

// USA 003F167C <- EU 003F165C (Ghidra, non-matching)
// GLOBAL DAT_003f17c4 int *
// GLOBAL DAT_003f17c8 uint

void func_003F167C(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  piVar1 = DAT_003f17c4;
  iVar2 = DAT_003f17c4[1];
  pfVar4 = *(float **)(param_1 + 0x134);
  fVar9 = *(float *)(param_1 + 8);
  uVar5 = DAT_003f17c8 | (int)DAT_003f17c8 >> 0x13;
  puVar3 = (uint *)*DAT_003f17c4;
  fVar6 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x10);
  puVar3[1] = DAT_003f17c8;
  *puVar3 = iVar2 * 10 + 1U | 0x80000000;
  puVar3[3] = piVar1[3] * 0x400000 - 0x100000U | uVar5;
  fVar13 = pfVar4[1];
  fVar15 = pfVar4[5];
  fVar16 = pfVar4[2];
  fVar11 = pfVar4[3];
  fVar18 = *pfVar4;
  fVar17 = pfVar4[6];
  fVar14 = pfVar4[7];
  fVar19 = pfVar4[4];
  puVar3[0x14] = (uint)ALBW_AS_U32((pfVar4[9] * fVar6 + pfVar4[10] * fVar7 + pfVar4[0xb] + pfVar4[8] * fVar9));
  puVar3[0x15] = (uint)ALBW_AS_U32((fVar15 * fVar6 + fVar17 * fVar7 + fVar14 + fVar19 * fVar9));
  puVar3[0x16] = (uint)ALBW_AS_U32((fVar13 * fVar6 + fVar16 * fVar7 + fVar11 + fVar18 * fVar9));
  puVar3[0x17] = 0;
  puVar3[2] = *(uint *)(param_1 + 0x5c);
  uVar5 = *(uint *)(param_1 + 0x8c);
  uVar8 = *(uint *)(param_1 + 0x70);
  fVar9 = *(float *)(param_1 + 100);
  iVar2 = param_1 + piVar1[4] * 0x10;
  fVar7 = *(float *)(param_1 + 0x68);
  uVar10 = *(uint *)(param_1 + 0x88);
  uVar12 = *(uint *)(param_1 + 0x84);
  puVar3[4] = *(uint *)(iVar2 + 0xb8);
  puVar3[5] = *(uint *)(iVar2 + 0xb4);
  puVar3[6] = *(uint *)(iVar2 + 0xb0);
  puVar3[7] = uVar5;
  puVar3[8] = uVar8;
  fVar6 = ALBW_AS_F32(piVar1[0xc]);
  puVar3[9] = (uint)ALBW_AS_U32((fVar7 * ALBW_AS_F32(piVar1[0xd])));
  puVar3[10] = (uint)ALBW_AS_U32((fVar9 * fVar6));
  puVar3[0xb] = uVar10;
  puVar3[0xc] = uVar12;
  puVar3[0xd] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x80)));
  puVar3[0xe] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c)));
  uVar5 = *(uint *)(param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0x48);
  puVar3[0x1e] = *(uint *)(param_1 + 0x44);
  puVar3[0x1c] = uVar5;
  puVar3[0x1d] = uVar8;
  return;
}

