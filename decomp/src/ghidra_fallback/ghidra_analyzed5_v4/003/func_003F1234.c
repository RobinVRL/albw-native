#include "ghidra_types.h"

extern int *DAT_003f13a4;
extern uint DAT_003f13a8;

// USA 003F1234 <- EU 003F1214 (Ghidra, non-matching)
// GLOBAL DAT_003f13a4 int *
// GLOBAL DAT_003f13a8 uint

void func_003F1234(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar6 = DAT_003f13a8;
  piVar1 = DAT_003f13a4;
  uVar5 = DAT_003f13a8 | 1;
  puVar2 = (uint *)*DAT_003f13a4;
  iVar4 = *(int *)(param_1 + 0x144);
  *puVar2 = DAT_003f13a4[1] * 10 + 1U | 0x80000000;
  puVar2[1] = uVar6;
  puVar2[3] = piVar1[3] * 0x400000 - 0x100000U | uVar5;
  puVar2[2] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0xa8)));
  uVar6 = *(uint *)(param_1 + 0x70);
  uVar10 = *(uint *)(param_1 + 0x4c);
  uVar12 = *(uint *)(param_1 + 0x48);
  uVar13 = *(uint *)(param_1 + 0x44);
  uVar5 = *(uint *)(param_1 + 0x88);
  fVar15 = *(float *)(param_1 + 100);
  fVar16 = *(float *)(param_1 + 0x68);
  puVar2[7] = *(uint *)(param_1 + 0x8c);
  uVar8 = *(uint *)(param_1 + 0x84);
  puVar2[8] = uVar6;
  fVar7 = ALBW_AS_F32(piVar1[0xc]);
  puVar2[9] = (uint)ALBW_AS_U32((fVar16 * ALBW_AS_F32(piVar1[0xd])));
  puVar2[10] = (uint)ALBW_AS_U32((fVar15 * fVar7));
  puVar2[0x1c] = uVar10;
  puVar2[0x1d] = uVar12;
  puVar2[0x1e] = uVar13;
  iVar3 = param_1 + piVar1[4] * 0x10;
  puVar2[4] = *(uint *)(iVar3 + 0xb8);
  puVar2[5] = *(uint *)(iVar3 + 0xb4);
  puVar2[6] = *(uint *)(iVar3 + 0xb0);
  puVar2[0xb] = uVar5;
  puVar2[0xc] = uVar8;
  puVar2[0xd] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x80)));
  puVar2[0xe] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c)));
  uVar6 = *(uint *)(iVar4 + 0x238);
  fVar14 = *(float *)(param_1 + 0x114);
  fVar21 = *(float *)(param_1 + 0x104);
  fVar18 = *(float *)(param_1 + 0x118);
  fVar9 = *(float *)(param_1 + 0x11c);
  fVar20 = *(float *)(param_1 + 0x110);
  fVar17 = *(float *)(param_1 + 0x108);
  fVar11 = *(float *)(param_1 + 0x10c);
  fVar19 = *(float *)(param_1 + 0x100);
  fVar7 = *(float *)(param_1 + 0x10);
  fVar15 = *(float *)(param_1 + 8);
  fVar16 = *(float *)(param_1 + 0xc);
  puVar2[0x14] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x124) * fVar16 + *(float *)(param_1 + 0x128) * fVar7 +
                       *(float *)(param_1 + 300) + *(float *)(param_1 + 0x120) * fVar15));
  puVar2[0x15] = (uint)ALBW_AS_U32((fVar14 * fVar16 + fVar18 * fVar7 + fVar9 + fVar20 * fVar15));
  puVar2[0x16] = (uint)ALBW_AS_U32((fVar21 * fVar16 + fVar17 * fVar7 + fVar11 + fVar19 * fVar15));
  puVar2[0x17] = 0;
  if ((uVar6 & 0x10) != 0) {
    uVar6 = *(uint *)(param_1 + 0x40);
    uVar5 = *(uint *)(param_1 + 0x3c);
    puVar2[0x1a] = *(uint *)(param_1 + 0x38);
    puVar2[0x18] = uVar6;
    puVar2[0x19] = uVar5;
  }
  return;
}

