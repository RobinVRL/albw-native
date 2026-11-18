#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E2134(void);
extern int func_006772EC(int param_1,float *param_2,undefined4 param_3);
extern int func_00677B90(int param_1,float *param_2,undefined4 param_3);

// USA 00676BF4 <- EU 00676BCC (Ghidra, non-matching)

undefined4 func_00676BF4(int param_1,float *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
  float fVar27;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        func_00677B90(param_1,param_2,param_3);
      }
      return 0;
    }
    return func_006772EC(param_1,param_2,param_3);
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0xc);
  iVar13 = *(int *)(param_1 + 0x14);
  iVar9 = 0;
  if (0 < iVar11) {
    do {
      iVar2 = *(int *)(param_1 + 4);
      puVar10 = (uint *)(*(int *)(param_1 + 0xc) + iVar9 * 0x40);
      uVar5 = *puVar10 & 0xfffffffb;
      *puVar10 = uVar5;
      uVar3 = (uint)*(ushort *)(iVar2 + iVar9 * 2);
      if ((int)uVar3 < iVar11) {
        if (((~uVar5 & 2) == 0) || ((~*(uint *)(*(int *)(param_1 + 0xc) + uVar3 * 0x40) & 4) == 0))
        {
          iVar2 = iVar12 + iVar9 * 0x40;
          uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar9 * 2);
          pfVar4 = (float *)(iVar13 + iVar9 * 0x30);
          puVar7 = (uint *)(iVar12 + uVar3 * 0x40);
          pfVar6 = (float *)(iVar13 + uVar3 * 0x30);
          if (((~*puVar7 & 0x2800000) == 0) || ((*puVar7 & 4) == 0)) {
            pfVar8 = (float *)(iVar2 + 0x10);
          }
          else {
            fVar17 = *pfVar6;
            fVar18 = pfVar6[1];
            fVar27 = pfVar6[3];
            fVar25 = pfVar6[7];
            fVar26 = pfVar6[0xb];
            fVar14 = ALBW_AS_F32(puVar7[1]);
            fVar15 = ALBW_AS_F32(puVar7[2]);
            fVar16 = ALBW_AS_F32(puVar7[3]);
            pfVar8 = (float *)(iVar2 + 0x10);
            fVar19 = pfVar6[4];
            fVar20 = pfVar6[5];
            fVar21 = pfVar6[6];
            fVar22 = pfVar6[8];
            fVar23 = pfVar6[9];
            fVar24 = pfVar6[10];
            pfVar4[2] = pfVar6[2] * fVar16;
            pfVar4[3] = fVar27;
            pfVar4[6] = fVar21 * fVar16;
            pfVar4[7] = fVar25;
            pfVar4[0xb] = fVar26;
            pfVar4[8] = fVar22 * fVar14;
            pfVar4[9] = fVar23 * fVar15;
            pfVar4[10] = fVar24 * fVar16;
            pfVar4[4] = fVar19 * fVar14;
            pfVar4[5] = fVar20 * fVar15;
            *pfVar4 = fVar17 * fVar14;
            pfVar4[1] = fVar18 * fVar15;
            pfVar6 = pfVar4;
          }
LAB_00676d2c:
          func_00114E74(pfVar4,pfVar6,pfVar8);
LAB_00676d90:
          *puVar10 = *puVar10 & 0xfffffffd | 4;
        }
      }
      else if ((~uVar5 & 2) == 0) {
        puVar7 = (uint *)(iVar12 + iVar9 * 0x40);
        pfVar4 = (float *)(iVar13 + iVar9 * 0x30);
        if ((~*puVar7 & 0xc000000) == 0) {
          if (param_2 == (float *)0x0) {
            pfVar6 = (float *)func_003E2134();
            fVar14 = pfVar6[1];
            fVar15 = pfVar6[2];
            fVar16 = pfVar6[3];
            fVar17 = pfVar6[4];
            fVar18 = pfVar6[5];
            fVar19 = pfVar6[6];
            fVar20 = pfVar6[7];
            *pfVar4 = *pfVar6;
            pfVar4[1] = fVar14;
            pfVar4[2] = fVar15;
            pfVar4[3] = fVar16;
            pfVar4[4] = fVar17;
            pfVar4[5] = fVar18;
            pfVar4[6] = fVar19;
            pfVar4[7] = fVar20;
            fVar14 = pfVar6[8];
            fVar15 = pfVar6[9];
            fVar16 = pfVar6[10];
            pfVar4[0xb] = pfVar6[0xb];
            pfVar4[8] = fVar14;
            pfVar4[9] = fVar15;
            pfVar4[10] = fVar16;
          }
          else {
            fVar14 = param_2[1];
            fVar15 = param_2[2];
            fVar16 = param_2[3];
            fVar17 = param_2[4];
            fVar18 = param_2[5];
            fVar19 = param_2[6];
            fVar20 = param_2[7];
            *pfVar4 = *param_2;
            pfVar4[1] = fVar14;
            pfVar4[2] = fVar15;
            pfVar4[3] = fVar16;
            pfVar4[4] = fVar17;
            pfVar4[5] = fVar18;
            pfVar4[6] = fVar19;
            pfVar4[7] = fVar20;
            fVar14 = param_2[8];
            fVar15 = param_2[9];
            fVar16 = param_2[10];
            pfVar4[0xb] = param_2[0xb];
            pfVar4[8] = fVar14;
            pfVar4[9] = fVar15;
            pfVar4[10] = fVar16;
          }
        }
        else {
          if (param_2 != (float *)0x0) {
            pfVar8 = (float *)(puVar7 + 4);
            pfVar6 = param_2;
            goto LAB_00676d2c;
          }
          fVar14 = ALBW_AS_F32(puVar7[5]);
          fVar15 = ALBW_AS_F32(puVar7[6]);
          fVar16 = ALBW_AS_F32(puVar7[7]);
          fVar17 = ALBW_AS_F32(puVar7[8]);
          fVar18 = ALBW_AS_F32(puVar7[9]);
          fVar19 = ALBW_AS_F32(puVar7[10]);
          fVar20 = ALBW_AS_F32(puVar7[0xb]);
          *pfVar4 = ALBW_AS_F32(puVar7[4]);
          pfVar4[1] = fVar14;
          pfVar4[2] = fVar15;
          pfVar4[3] = fVar16;
          pfVar4[4] = fVar17;
          pfVar4[5] = fVar18;
          pfVar4[6] = fVar19;
          pfVar4[7] = fVar20;
          fVar14 = ALBW_AS_F32(puVar7[0xc]);
          fVar15 = ALBW_AS_F32(puVar7[0xd]);
          fVar16 = ALBW_AS_F32(puVar7[0xe]);
          pfVar4[0xb] = ALBW_AS_F32(puVar7[0xf]);
          pfVar4[8] = fVar14;
          pfVar4[9] = fVar15;
          pfVar4[10] = fVar16;
        }
        goto LAB_00676d90;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar9 = 0;
  if (0 < iVar11) {
    do {
      puVar10 = (uint *)(iVar12 + iVar9 * 0x40);
      if (((~*puVar10 & 0x2800000) != 0) && ((~*puVar10 & 4) == 0)) {
        pfVar4 = (float *)(iVar13 + iVar9 * 0x30);
        fVar14 = ALBW_AS_F32(puVar10[1]);
        fVar16 = ALBW_AS_F32(puVar10[2]);
        fVar15 = ALBW_AS_F32(puVar10[3]);
        *pfVar4 = *pfVar4 * fVar14;
        pfVar4[1] = pfVar4[1] * fVar16;
        pfVar4[2] = pfVar4[2] * fVar15;
        pfVar4[4] = pfVar4[4] * fVar14;
        pfVar4[5] = pfVar4[5] * fVar16;
        pfVar4[6] = pfVar4[6] * fVar15;
        pfVar4[8] = pfVar4[8] * fVar14;
        pfVar4[9] = pfVar4[9] * fVar16;
        pfVar4[10] = pfVar4[10] * fVar15;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
    return 0;
  }
  return 0;
}

