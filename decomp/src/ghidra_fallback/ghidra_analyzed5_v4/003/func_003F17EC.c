#include "ghidra_types.h"

extern int *DAT_003f1a2c;
extern uint DAT_003f1a30;
extern float *DAT_003f1a34;
extern float DAT_003f1a38;

// USA 003F17EC <- EU 003F17CC (Ghidra, non-matching)
// GLOBAL DAT_003f1a2c int *
// GLOBAL DAT_003f1a30 uint
// GLOBAL DAT_003f1a34 float *
// GLOBAL DAT_003f1a38 float

void func_003F17EC(int param_1)

{
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar9 = DAT_003f1a30;
  piVar1 = DAT_003f1a2c;
  puVar3 = (uint *)*DAT_003f1a2c;
  uVar7 = DAT_003f1a30 | (int)DAT_003f1a30 >> 0x13;
  iVar5 = *(int *)(param_1 + 0x144);
  *puVar3 = DAT_003f1a2c[1] * 10 + 1U | 0x80000000;
  puVar3[1] = uVar9;
  iVar8 = *(int *)(iVar5 + 200);
  pfVar4 = *(float **)(param_1 + 0x134);
  iVar6 = *(int *)(param_1 + 0x138);
  puVar3[3] = uVar7 | piVar1[3] * 0x400000 - 0x100000U;
  if (iVar8 == 2) {
    uVar13 = *(undefined4 *)(iVar5 + 0x70);
    uVar15 = *(undefined4 *)(iVar5 + 0x80);
    uVar16 = *(undefined4 *)(iVar5 + 0x30);
    uVar19 = *(undefined4 *)(iVar5 + 0x40);
    uVar21 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_1 + 0x11c) = uVar13;
    *(undefined4 *)(param_1 + 300) = uVar15;
    *(undefined4 *)(param_1 + 0xdc) = uVar16;
    *(undefined4 *)(param_1 + 0xec) = uVar19;
    *(undefined4 *)(param_1 + 0xfc) = uVar21;
  }
  fVar12 = DAT_003f1a38;
  pfVar2 = DAT_003f1a34;
  puVar3[2] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0xa8)));
  uVar9 = *(uint *)(param_1 + 0x70);
  puVar3[7] = *(uint *)(param_1 + 0x8c);
  puVar3[8] = uVar9;
  fVar22 = *pfVar2;
  fVar17 = *(float *)(iVar6 + 0x504);
  fVar10 = *(float *)(param_1 + 0xac);
  fVar14 = *(float *)(param_1 + 100);
  fVar11 = *(float *)(param_1 + 0x68) * pfVar2[1] * fVar10;
  if (fVar12 < fVar17) {
    fVar11 = fVar11 + (SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                            *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                            *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28)) +
                      SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                           *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                           *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c))) * fVar17;
  }
  uVar18 = *(uint *)(param_1 + 0x48);
  uVar20 = *(uint *)(param_1 + 0x44);
  uVar7 = *(uint *)(param_1 + 0x88);
  puVar3[0x1c] = *(uint *)(param_1 + 0x4c);
  puVar3[9] = (uint)ALBW_AS_U32(fVar11);
  puVar3[10] = (uint)ALBW_AS_U32((fVar14 * fVar22 * fVar10));
  uVar9 = *(uint *)(param_1 + 0x84);
  puVar3[0x1d] = uVar18;
  puVar3[0x1e] = uVar20;
  iVar6 = param_1 + piVar1[4] * 0x10;
  puVar3[4] = *(uint *)(iVar6 + 0xb8);
  puVar3[5] = *(uint *)(iVar6 + 0xb4);
  puVar3[6] = *(uint *)(iVar6 + 0xb0);
  puVar3[0xb] = uVar7;
  puVar3[0xc] = uVar9;
  puVar3[0xd] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x80)));
  puVar3[0xe] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c)));
  uVar9 = *(uint *)(param_1 + 0xa4);
  puVar3[0x10] = *(uint *)(param_1 + 0xa0);
  puVar3[0xf] = uVar9;
  puVar3[0x11] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x9c)));
  puVar3[0x12] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x98)));
  fVar22 = pfVar4[1];
  fVar10 = *(float *)(param_1 + 0xc);
  fVar14 = pfVar4[5];
  fVar12 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 8);
  fVar24 = pfVar4[2];
  fVar23 = pfVar4[3];
  fVar26 = *pfVar4;
  fVar25 = pfVar4[6];
  fVar17 = pfVar4[7];
  fVar27 = pfVar4[4];
  puVar3[0x14] = (uint)ALBW_AS_U32((pfVar4[9] * fVar10 + pfVar4[10] * fVar12 + pfVar4[0xb] + pfVar4[8] * fVar11))
  ;
  puVar3[0x15] = (uint)ALBW_AS_U32((fVar14 * fVar10 + fVar25 * fVar12 + fVar17 + fVar27 * fVar11));
  puVar3[0x16] = (uint)ALBW_AS_U32((fVar22 * fVar10 + fVar24 * fVar12 + fVar23 + fVar26 * fVar11));
  puVar3[0x17] = 0;
  if (*(char *)(iVar5 + 0x2ab) != '\0') {
    uVar9 = *(uint *)(param_1 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x3c);
    puVar3[0x1a] = *(uint *)(param_1 + 0x38);
    puVar3[0x18] = uVar9;
    puVar3[0x19] = uVar7;
  }
  return;
}

