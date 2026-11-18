#include "ghidra_types.h"

extern int *DAT_003f1608;
extern uint DAT_003f160c;
extern float *DAT_003f1610;
extern float DAT_003f1614;

// USA 003F13CC <- EU 003F13AC (Ghidra, non-matching)
// GLOBAL DAT_003f1608 int *
// GLOBAL DAT_003f160c uint
// GLOBAL DAT_003f1610 float *
// GLOBAL DAT_003f1614 float

void func_003F13CC(int param_1)

{
  int *piVar1;
  float fVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  uVar8 = DAT_003f160c;
  piVar1 = DAT_003f1608;
  puVar3 = (uint *)*DAT_003f1608;
  uVar7 = DAT_003f160c | (int)DAT_003f160c >> 0x13;
  iVar5 = *(int *)(param_1 + 0x144);
  *puVar3 = DAT_003f1608[1] * 10 + 1U | 0x80000000;
  puVar3[1] = uVar8;
  iVar9 = *(int *)(iVar5 + 200);
  pfVar4 = *(float **)(param_1 + 0x134);
  iVar6 = *(int *)(param_1 + 0x138);
  puVar3[3] = uVar7 | piVar1[3] * 0x400000 - 0x100000U;
  if (iVar9 == 2) {
    uVar11 = *(undefined4 *)(iVar5 + 0x70);
    uVar13 = *(undefined4 *)(iVar5 + 0x80);
    uVar15 = *(undefined4 *)(iVar5 + 0x30);
    uVar16 = *(undefined4 *)(iVar5 + 0x40);
    uVar18 = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined4 *)(param_1 + 0x11c) = uVar11;
    *(undefined4 *)(param_1 + 300) = uVar13;
    *(undefined4 *)(param_1 + 0xdc) = uVar15;
    *(undefined4 *)(param_1 + 0xec) = uVar16;
    *(undefined4 *)(param_1 + 0xfc) = uVar18;
  }
  if (*(char *)(iVar5 + 0x2ab) != '\0') {
    uVar8 = *(uint *)(param_1 + 0x3c);
    uVar7 = *(uint *)(param_1 + 0x40);
    puVar3[0x1a] = *(uint *)(param_1 + 0x38);
    puVar3[0x19] = uVar8;
    puVar3[0x18] = uVar7;
  }
  fVar2 = DAT_003f1614;
  fVar21 = pfVar4[1];
  fVar10 = *(float *)(param_1 + 0xc);
  fVar19 = pfVar4[5];
  fVar12 = *(float *)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 8);
  fVar22 = pfVar4[2];
  fVar17 = pfVar4[3];
  fVar24 = *pfVar4;
  fVar23 = pfVar4[6];
  fVar20 = pfVar4[7];
  fVar25 = pfVar4[4];
  puVar3[0x14] = (uint)ALBW_AS_U32((pfVar4[9] * fVar10 + pfVar4[10] * fVar12 + pfVar4[0xb] + pfVar4[8] * fVar14))
  ;
  puVar3[0x15] = (uint)ALBW_AS_U32((fVar19 * fVar10 + fVar23 * fVar12 + fVar20 + fVar25 * fVar14));
  puVar3[0x16] = (uint)ALBW_AS_U32((fVar21 * fVar10 + fVar22 * fVar12 + fVar17 + fVar24 * fVar14));
  puVar3[0x17] = 0;
  pfVar4 = DAT_003f1610;
  puVar3[2] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0xa8)));
  uVar8 = *(uint *)(param_1 + 0x8c);
  uVar7 = *(uint *)(param_1 + 0x70);
  fVar12 = *(float *)(param_1 + 0x68);
  iVar5 = param_1 + piVar1[4] * 0x10;
  fVar19 = *(float *)(param_1 + 100);
  fVar14 = *(float *)(param_1 + 0xac);
  puVar3[4] = *(uint *)(iVar5 + 0xb8);
  puVar3[5] = *(uint *)(iVar5 + 0xb4);
  puVar3[6] = *(uint *)(iVar5 + 0xb0);
  puVar3[7] = uVar8;
  puVar3[8] = uVar7;
  fVar10 = *pfVar4;
  fVar17 = *(float *)(iVar6 + 0x504);
  fVar12 = fVar12 * pfVar4[1] * fVar14;
  if (fVar2 < fVar17) {
    fVar12 = fVar12 + (SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                            *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                            *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28)) +
                      SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                           *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                           *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c))) * fVar17;
  }
  uVar8 = *(uint *)(param_1 + 0x84);
  uVar7 = *(uint *)(param_1 + 0x88);
  puVar3[9] = (uint)ALBW_AS_U32(fVar12);
  puVar3[10] = (uint)ALBW_AS_U32((fVar19 * fVar10 * fVar14));
  puVar3[0xc] = uVar8;
  puVar3[0xb] = uVar7;
  puVar3[0xd] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x80)));
  puVar3[0xe] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x7c)));
  uVar8 = *(uint *)(param_1 + 0xa4);
  puVar3[0x10] = *(uint *)(param_1 + 0xa0);
  puVar3[0xf] = uVar8;
  puVar3[0x11] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x9c)));
  puVar3[0x12] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x98)));
  uVar8 = *(uint *)(param_1 + 0x4c);
  uVar7 = *(uint *)(param_1 + 0x48);
  puVar3[0x1e] = *(uint *)(param_1 + 0x44);
  puVar3[0x1c] = uVar8;
  puVar3[0x1d] = uVar7;
  return;
}

