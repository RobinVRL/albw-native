#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E2134(void);
extern int func_006776F8(int param_1,float *param_2,undefined4 *param_3);
extern int func_00677FEC(int param_1,float *param_2,undefined4 *param_3);

// USA 00676F18 <- EU 00676EF0 (Ghidra, non-matching)

undefined4 func_00676F18(int param_1,float *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  float fVar25;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\0') {
    iVar9 = *(int *)(param_1 + 8);
    iVar10 = *(int *)(param_1 + 0xc);
    iVar11 = *(int *)(param_1 + 0x14);
    iVar8 = 0;
    if (0 < iVar9) {
      do {
        puVar7 = (uint *)(*(int *)(param_1 + 0xc) + iVar8 * 0x40);
        iVar4 = *(int *)(param_1 + 4);
        *puVar7 = *puVar7 & 0xfffffffb;
        uVar2 = (uint)*(ushort *)(iVar4 + iVar8 * 2);
        if ((int)uVar2 < iVar9) {
          if (((~*puVar7 & 2) == 0) ||
             ((~*(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 0x40) & 4) == 0)) {
            iVar4 = iVar10 + iVar8 * 0x40;
            uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar8 * 2);
            pfVar3 = (float *)(iVar11 + iVar8 * 0x30);
            puVar6 = (uint *)(iVar10 + uVar2 * 0x40);
            pfVar5 = (float *)(iVar11 + uVar2 * 0x30);
            if ((~*puVar6 & 0x2800000) == 0) {
              func_00114E74(pfVar3,pfVar5,(float *)(iVar4 + 0x10));
            }
            else {
              if ((*puVar6 & 4) != 0) {
                fVar15 = *pfVar5;
                fVar16 = pfVar5[1];
                fVar25 = pfVar5[3];
                fVar23 = pfVar5[7];
                fVar24 = pfVar5[0xb];
                fVar12 = ALBW_AS_F32(puVar6[1]);
                fVar13 = ALBW_AS_F32(puVar6[2]);
                fVar14 = ALBW_AS_F32(puVar6[3]);
                fVar17 = pfVar5[4];
                fVar18 = pfVar5[5];
                fVar19 = pfVar5[6];
                fVar20 = pfVar5[8];
                fVar21 = pfVar5[9];
                fVar22 = pfVar5[10];
                pfVar3[2] = pfVar5[2] * fVar14;
                pfVar3[3] = fVar25;
                pfVar3[6] = fVar19 * fVar14;
                pfVar3[7] = fVar23;
                pfVar3[0xb] = fVar24;
                pfVar3[8] = fVar20 * fVar12;
                pfVar3[9] = fVar21 * fVar13;
                pfVar3[10] = fVar22 * fVar14;
                pfVar3[4] = fVar17 * fVar12;
                pfVar3[5] = fVar18 * fVar13;
                *pfVar3 = fVar15 * fVar12;
                pfVar3[1] = fVar16 * fVar13;
                pfVar5 = pfVar3;
              }
              func_00114E74(pfVar3,pfVar5,(float *)(iVar4 + 0x10));
            }
            *puVar7 = *puVar7 & 0xfffffffd | 4;
          }
          if ((~*puVar7 & 0x10) == 0) {
            iVar4 = (**(code **)*param_3)(param_3,param_1,iVar8);
joined_r0x006771c0:
            if (iVar4 != 0) {
              *puVar7 = *puVar7 & 0x33ffffff | 4;
            }
          }
        }
        else {
          if ((~*puVar7 & 2) == 0) {
            puVar6 = (uint *)(iVar10 + iVar8 * 0x40);
            pfVar5 = (float *)(iVar11 + iVar8 * 0x30);
            if ((~*puVar6 & 0xc000000) == 0) {
              if (param_2 == (float *)0x0) {
                pfVar3 = (float *)func_003E2134();
                fVar12 = pfVar3[1];
                fVar13 = pfVar3[2];
                fVar14 = pfVar3[3];
                fVar15 = pfVar3[4];
                fVar16 = pfVar3[5];
                fVar17 = pfVar3[6];
                fVar18 = pfVar3[7];
                *pfVar5 = *pfVar3;
                pfVar5[1] = fVar12;
                pfVar5[2] = fVar13;
                pfVar5[3] = fVar14;
                pfVar5[4] = fVar15;
                pfVar5[5] = fVar16;
                pfVar5[6] = fVar17;
                pfVar5[7] = fVar18;
                fVar12 = pfVar3[8];
                fVar13 = pfVar3[9];
                fVar14 = pfVar3[10];
                pfVar5[0xb] = pfVar3[0xb];
                pfVar5[8] = fVar12;
                pfVar5[9] = fVar13;
                pfVar5[10] = fVar14;
              }
              else {
                fVar12 = param_2[1];
                fVar13 = param_2[2];
                fVar14 = param_2[3];
                fVar15 = param_2[4];
                fVar16 = param_2[5];
                fVar17 = param_2[6];
                fVar18 = param_2[7];
                *pfVar5 = *param_2;
                pfVar5[1] = fVar12;
                pfVar5[2] = fVar13;
                pfVar5[3] = fVar14;
                pfVar5[4] = fVar15;
                pfVar5[5] = fVar16;
                pfVar5[6] = fVar17;
                pfVar5[7] = fVar18;
                fVar12 = param_2[8];
                fVar13 = param_2[9];
                fVar14 = param_2[10];
                pfVar5[0xb] = param_2[0xb];
                pfVar5[8] = fVar12;
                pfVar5[9] = fVar13;
                pfVar5[10] = fVar14;
              }
            }
            else if (param_2 == (float *)0x0) {
              fVar12 = ALBW_AS_F32(puVar6[5]);
              fVar13 = ALBW_AS_F32(puVar6[6]);
              fVar14 = ALBW_AS_F32(puVar6[7]);
              fVar15 = ALBW_AS_F32(puVar6[8]);
              fVar16 = ALBW_AS_F32(puVar6[9]);
              fVar17 = ALBW_AS_F32(puVar6[10]);
              fVar18 = ALBW_AS_F32(puVar6[0xb]);
              *pfVar5 = ALBW_AS_F32(puVar6[4]);
              pfVar5[1] = fVar12;
              pfVar5[2] = fVar13;
              pfVar5[3] = fVar14;
              pfVar5[4] = fVar15;
              pfVar5[5] = fVar16;
              pfVar5[6] = fVar17;
              pfVar5[7] = fVar18;
              fVar12 = ALBW_AS_F32(puVar6[0xc]);
              fVar13 = ALBW_AS_F32(puVar6[0xd]);
              fVar14 = ALBW_AS_F32(puVar6[0xe]);
              pfVar5[0xb] = ALBW_AS_F32(puVar6[0xf]);
              pfVar5[8] = fVar12;
              pfVar5[9] = fVar13;
              pfVar5[10] = fVar14;
            }
            else {
              func_00114E74(pfVar5,param_2,(float *)(puVar6 + 4));
            }
            *puVar7 = *puVar7 & 0xfffffffd | 4;
          }
          if ((~*puVar7 & 0x10) == 0) {
            iVar4 = (**(code **)*param_3)(param_3,param_1,iVar8);
            goto joined_r0x006771c0;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
    }
    iVar9 = *(int *)(param_1 + 8);
    iVar8 = 0;
    if (0 < iVar9) {
      do {
        puVar7 = (uint *)(iVar10 + iVar8 * 0x40);
        if (((~*puVar7 & 0x2800000) != 0) && ((~*puVar7 & 4) == 0)) {
          pfVar5 = (float *)(iVar11 + iVar8 * 0x30);
          fVar14 = ALBW_AS_F32(puVar7[1]);
          fVar12 = ALBW_AS_F32(puVar7[3]);
          fVar13 = ALBW_AS_F32(puVar7[2]);
          *pfVar5 = *pfVar5 * fVar14;
          pfVar5[4] = pfVar5[4] * fVar14;
          pfVar5[5] = pfVar5[5] * fVar13;
          pfVar5[6] = pfVar5[6] * fVar12;
          pfVar5[8] = pfVar5[8] * fVar14;
          pfVar5[9] = pfVar5[9] * fVar13;
          pfVar5[10] = pfVar5[10] * fVar12;
          pfVar5[1] = pfVar5[1] * fVar13;
          pfVar5[2] = pfVar5[2] * fVar12;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
      return 0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      return func_006776F8(param_1,param_2,param_3);
    }
    if (cVar1 == '\x02') {
      func_00677FEC(param_1,param_2,param_3);
    }
  }
  return 0;
}

