#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E2134(void);
extern uint DAT_006779e8;

// USA 006776F8 <- EU 006776D0 (Ghidra, non-matching)
// GLOBAL DAT_006779e8 uint

void func_006776F8(int param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
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
  ulonglong uVar28;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define iStack_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(float * *)(albw_frame + 0x44))
  #define puStack_28 (*(undefined4 * *)(albw_frame + 0x48))
  iVar10 = 0;
  iVar11 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0xc);
  iVar13 = *(int *)(param_1 + 0x14);
  if (0 < iVar11) {
    uVar28 = (ulonglong)DAT_006779e8;
    iStack_30 = param_1;
    local_2c = param_2;
    puStack_28 = param_3;
    do {
      iVar1 = *(int *)(param_1 + 4);
      puVar9 = (uint *)(*(int *)(param_1 + 0xc) + iVar10 * 0x40);
      uVar4 = *puVar9 & 0xfffffffb;
      *puVar9 = uVar4;
      uVar2 = (uint)*(ushort *)(iVar1 + iVar10 * 2);
      if ((int)uVar2 < iVar11) {
        if (((~uVar4 & 2) == 0) || ((~*(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 0x40) & 4) == 0))
        {
          puVar8 = (uint *)(iVar12 + iVar10 * 0x40);
          uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar10 * 2);
          pfVar3 = (float *)(iVar13 + iVar10 * 0x30);
          puVar6 = (uint *)(iVar12 + uVar2 * 0x40);
          pfVar5 = (float *)(iVar13 + uVar2 * 0x30);
          if ((~*puVar6 & 0x2800000) == 0) {
            func_00114E74(pfVar3,pfVar5,(float *)(puVar8 + 4));
          }
          else {
            if ((*puVar8 & 0x400000) == 0) {
              if ((*puVar6 & 4) == 0) {
                pfVar7 = (float *)(puVar8 + 4);
              }
              else {
                fVar17 = pfVar5[1];
                fVar18 = pfVar5[2];
                fVar27 = pfVar5[3];
                fVar25 = pfVar5[7];
                fVar26 = pfVar5[0xb];
                fVar14 = ALBW_AS_F32(puVar6[1]);
                fVar15 = ALBW_AS_F32(puVar6[2]);
                fVar16 = ALBW_AS_F32(puVar6[3]);
                fVar19 = pfVar5[4];
                fVar20 = pfVar5[5];
                fVar21 = pfVar5[6];
                fVar22 = pfVar5[8];
                fVar23 = pfVar5[9];
                fVar24 = pfVar5[10];
                *pfVar3 = *pfVar5 * fVar14;
                pfVar3[3] = fVar27;
                pfVar3[4] = fVar19 * fVar14;
                pfVar3[7] = fVar25;
                pfVar3[0xb] = fVar26;
                pfVar3[8] = fVar22 * fVar14;
                pfVar3[9] = fVar23 * fVar15;
                pfVar3[10] = fVar24 * fVar16;
                pfVar3[1] = fVar17 * fVar15;
                pfVar3[2] = fVar18 * fVar16;
                pfVar3[5] = fVar20 * fVar15;
                pfVar3[6] = fVar21 * fVar16;
                pfVar5 = pfVar3;
                pfVar7 = (float *)(puVar8 + 4);
              }
            }
            else {
              fVar14 = ALBW_AS_F32(puVar8[5]);
              fVar15 = ALBW_AS_F32(puVar8[6]);
              fVar16 = ALBW_AS_F32(puVar8[7]);
              fVar17 = ALBW_AS_F32(puVar8[8]);
              fVar18 = ALBW_AS_F32(puVar8[9]);
              fVar19 = ALBW_AS_F32(puVar8[10]);
              fVar20 = ALBW_AS_F32(puVar8[0xb]);
              *pfVar3 = ALBW_AS_F32(puVar8[4]);
              pfVar3[1] = fVar14;
              pfVar3[2] = fVar15;
              pfVar3[3] = fVar16;
              pfVar3[4] = fVar17;
              pfVar3[5] = fVar18;
              pfVar3[6] = fVar19;
              pfVar3[7] = fVar20;
              fVar14 = ALBW_AS_F32(puVar8[0xd]);
              fVar15 = ALBW_AS_F32(puVar8[0xe]);
              fVar16 = ALBW_AS_F32(puVar8[0xf]);
              pfVar3[8] = ALBW_AS_F32(puVar8[0xc]);
              pfVar3[9] = fVar14;
              pfVar3[10] = fVar15;
              pfVar3[0xb] = fVar16;
              fVar15 = ALBW_AS_F32(puVar6[2]);
              fVar14 = ALBW_AS_F32(puVar6[3]);
              pfVar3[3] = pfVar3[3] * ALBW_AS_F32(puVar6[1]);
              pfVar3[7] = fVar20 * fVar15;
              pfVar3[0xb] = pfVar3[0xb] * fVar14;
              pfVar7 = pfVar3;
              if ((*puVar6 & 4) == 0) {
                local_5c = pfVar5[3];
                local_4c = pfVar5[7];
                local_40 = ALBW_AS_F32(uVar28);
                local_48 = local_40 / ALBW_AS_F32(puVar6[1]);
                local_3c = pfVar5[0xb];
                local_58 = pfVar5[4] * local_48;
                local_68 = *pfVar5 * local_48;
                local_48 = pfVar5[8] * local_48;
                local_44 = local_40 / ALBW_AS_F32(puVar6[2]);
                fStack_64 = pfVar5[1] * local_44;
                fStack_54 = pfVar5[5] * local_44;
                local_44 = pfVar5[9] * local_44;
                local_40 = local_40 / ALBW_AS_F32(puVar6[3]);
                local_50 = pfVar5[6] * local_40;
                fStack_60 = pfVar5[2] * local_40;
                local_40 = pfVar5[10] * local_40;
                pfVar5 = &local_68;
              }
            }
            func_00114E74(pfVar3,pfVar5,pfVar7);
          }
          *puVar9 = *puVar9 & 0xfffffffd | 4;
        }
        if ((~*puVar9 & 0x10) == 0) {
          iVar1 = (**(code **)*param_3)(param_3,param_1,iVar10);
joined_r0x00677a78:
          if (iVar1 != 0) {
            *puVar9 = *puVar9 & 0x33ffffff | 4;
          }
        }
      }
      else {
        if ((~uVar4 & 2) == 0) {
          puVar6 = (uint *)(iVar12 + iVar10 * 0x40);
          pfVar5 = (float *)(iVar13 + iVar10 * 0x30);
          if ((~*puVar6 & 0xc000000) == 0) {
            if (local_2c == (float *)0x0) {
              pfVar3 = (float *)func_003E2134();
              fVar14 = pfVar3[1];
              fVar15 = pfVar3[2];
              fVar16 = pfVar3[3];
              fVar17 = pfVar3[4];
              fVar18 = pfVar3[5];
              fVar19 = pfVar3[6];
              fVar20 = pfVar3[7];
              *pfVar5 = *pfVar3;
              pfVar5[1] = fVar14;
              pfVar5[2] = fVar15;
              pfVar5[3] = fVar16;
              pfVar5[4] = fVar17;
              pfVar5[5] = fVar18;
              pfVar5[6] = fVar19;
              pfVar5[7] = fVar20;
              fVar14 = pfVar3[8];
              fVar15 = pfVar3[9];
              fVar16 = pfVar3[10];
              pfVar5[0xb] = pfVar3[0xb];
              pfVar5[8] = fVar14;
              pfVar5[9] = fVar15;
              pfVar5[10] = fVar16;
            }
            else {
              fVar14 = local_2c[1];
              fVar15 = local_2c[2];
              fVar16 = local_2c[3];
              fVar17 = local_2c[4];
              fVar18 = local_2c[5];
              fVar19 = local_2c[6];
              fVar20 = local_2c[7];
              *pfVar5 = *local_2c;
              pfVar5[1] = fVar14;
              pfVar5[2] = fVar15;
              pfVar5[3] = fVar16;
              pfVar5[4] = fVar17;
              pfVar5[5] = fVar18;
              pfVar5[6] = fVar19;
              pfVar5[7] = fVar20;
              fVar14 = local_2c[8];
              fVar15 = local_2c[9];
              fVar16 = local_2c[10];
              pfVar5[0xb] = local_2c[0xb];
              pfVar5[8] = fVar14;
              pfVar5[9] = fVar15;
              pfVar5[10] = fVar16;
            }
          }
          else if (local_2c == (float *)0x0) {
            fVar14 = ALBW_AS_F32(puVar6[5]);
            fVar15 = ALBW_AS_F32(puVar6[6]);
            fVar16 = ALBW_AS_F32(puVar6[7]);
            fVar17 = ALBW_AS_F32(puVar6[8]);
            fVar18 = ALBW_AS_F32(puVar6[9]);
            fVar19 = ALBW_AS_F32(puVar6[10]);
            fVar20 = ALBW_AS_F32(puVar6[0xb]);
            *pfVar5 = ALBW_AS_F32(puVar6[4]);
            pfVar5[1] = fVar14;
            pfVar5[2] = fVar15;
            pfVar5[3] = fVar16;
            pfVar5[4] = fVar17;
            pfVar5[5] = fVar18;
            pfVar5[6] = fVar19;
            pfVar5[7] = fVar20;
            fVar14 = ALBW_AS_F32(puVar6[0xc]);
            fVar15 = ALBW_AS_F32(puVar6[0xd]);
            fVar16 = ALBW_AS_F32(puVar6[0xe]);
            pfVar5[0xb] = ALBW_AS_F32(puVar6[0xf]);
            pfVar5[8] = fVar14;
            pfVar5[9] = fVar15;
            pfVar5[10] = fVar16;
          }
          else {
            func_00114E74(pfVar5,local_2c,(float *)(puVar6 + 4));
          }
          *puVar9 = *puVar9 & 0xfffffffd | 4;
        }
        if ((~*puVar9 & 0x10) == 0) {
          iVar1 = (**(code **)*param_3)(param_3,param_1,iVar10);
          goto joined_r0x00677a78;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      puVar9 = (uint *)(iVar12 + iVar10 * 0x40);
      if (((~*puVar9 & 0x2800000) != 0) && ((~*puVar9 & 4) == 0)) {
        pfVar5 = (float *)(iVar13 + iVar10 * 0x30);
        fVar14 = ALBW_AS_F32(puVar9[1]);
        fVar15 = ALBW_AS_F32(puVar9[2]);
        fVar16 = ALBW_AS_F32(puVar9[3]);
        *pfVar5 = *pfVar5 * fVar14;
        pfVar5[1] = pfVar5[1] * fVar15;
        pfVar5[2] = pfVar5[2] * fVar16;
        pfVar5[4] = pfVar5[4] * fVar14;
        pfVar5[5] = pfVar5[5] * fVar15;
        pfVar5[6] = pfVar5[6] * fVar16;
        pfVar5[8] = pfVar5[8] * fVar14;
        pfVar5[9] = pfVar5[9] * fVar15;
        pfVar5[10] = pfVar5[10] * fVar16;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  return;
}

