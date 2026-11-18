#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_003E2134(void);
extern uint DAT_006782d4;

// USA 00677FEC <- EU 00677FC4 (Ghidra, non-matching)
// GLOBAL DAT_006782d4 uint

void func_00677FEC(int param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  ulonglong in_d8;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define fStack_94 (*(float *)(albw_frame + 0xc))
  #define fStack_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define fStack_84 (*(float *)(albw_frame + 0x1c))
  #define fStack_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define fStack_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_4c (*(float * *)(albw_frame + 0x54))
  #define local_48 (*(float * *)(albw_frame + 0x58))
  #define iStack_30 (*(int *)(albw_frame + 0x70))
  #define local_2c (*(float * *)(albw_frame + 0x74))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x78))
  iVar9 = 0;
  iVar11 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  iVar14 = *(int *)(param_1 + 0x14);
  if (0 < iVar11) {
    in_d8 = (ulonglong)DAT_006782d4;
  }
  iVar13 = *(int *)(param_1 + 0x1c);
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  if (0 < iVar11) {
    do {
      iVar1 = *(int *)(param_1 + 4);
      puVar8 = (uint *)(*(int *)(param_1 + 0xc) + iVar9 * 0x40);
      uVar5 = *puVar8 & 0xfffffffb;
      *puVar8 = uVar5;
      uVar2 = (uint)*(ushort *)(iVar1 + iVar9 * 2);
      if ((int)uVar2 < iVar11) {
        if (((~uVar5 & 2) == 0) || ((~*(uint *)(*(int *)(param_1 + 0xc) + uVar2 * 0x40) & 4) == 0))
        {
          puVar12 = (uint *)(iVar10 + iVar9 * 0x40);
          local_4c = (float *)(iVar13 + iVar9 * 0xc);
          uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar9 * 2);
          pfVar7 = (float *)(iVar14 + iVar9 * 0x30);
          puVar3 = (uint *)(iVar10 + uVar2 * 0x40);
          local_48 = (float *)(iVar13 + uVar2 * 0xc);
          pfVar6 = (float *)(iVar14 + uVar2 * 0x30);
          *puVar12 = *puVar12 & 0x17ffffff | *puVar3 & (*puVar12 & 0x17ffffff) << 4 & 0xe8000000;
          if ((~*puVar3 & 0x28000000) == 0) {
            func_00114E74(pfVar7,pfVar6,(float *)(puVar12 + 4));
          }
          else {
            fVar15 = ALBW_AS_F32(puVar12[4]);
            fVar16 = ALBW_AS_F32(puVar12[5]);
            fVar17 = ALBW_AS_F32(puVar12[6]);
            fVar18 = ALBW_AS_F32(puVar12[7]);
            fVar19 = ALBW_AS_F32(puVar12[9]);
            fVar20 = ALBW_AS_F32(puVar12[10]);
            fVar21 = ALBW_AS_F32(puVar12[0xb]);
            pfVar7[4] = ALBW_AS_F32(puVar12[8]);
            *pfVar7 = fVar15;
            pfVar7[1] = fVar16;
            pfVar7[2] = fVar17;
            pfVar7[3] = fVar18;
            pfVar7[5] = fVar19;
            pfVar7[6] = fVar20;
            pfVar7[7] = fVar21;
            fVar15 = ALBW_AS_F32(puVar12[0xf]);
            fVar16 = ALBW_AS_F32(puVar12[0xc]);
            fVar17 = ALBW_AS_F32(puVar12[0xd]);
            fVar19 = ALBW_AS_F32(puVar12[0xe]);
            pfVar7[0xb] = fVar15;
            pfVar7[8] = fVar16;
            pfVar7[9] = fVar17;
            pfVar7[10] = fVar19;
            fVar16 = ALBW_AS_F32(puVar3[2]);
            fVar17 = ALBW_AS_F32(puVar3[3]);
            pfVar7[3] = fVar18 * ALBW_AS_F32(puVar3[1]);
            pfVar7[7] = fVar21 * fVar16;
            pfVar7[0xb] = fVar15 * fVar17;
            if ((*puVar3 & 4) == 0) {
              local_8c = pfVar6[3];
              local_7c = pfVar6[7];
              local_6c = pfVar6[0xb];
              fStack_70 = ALBW_AS_F32(in_d8);
              local_78 = fStack_70 / *local_48;
              local_98 = *pfVar6 * local_78;
              local_88 = pfVar6[4] * local_78;
              local_78 = pfVar6[8] * local_78;
              local_74 = fStack_70 / local_48[1];
              fStack_94 = pfVar6[1] * local_74;
              fStack_84 = pfVar6[5] * local_74;
              local_74 = pfVar6[9] * local_74;
              fStack_70 = fStack_70 / local_48[2];
              fStack_90 = pfVar6[2] * fStack_70;
              fStack_80 = pfVar6[6] * fStack_70;
              fStack_70 = pfVar6[10] * fStack_70;
              pfVar6 = &local_98;
            }
            func_00114E74(pfVar7,pfVar6,pfVar7);
          }
          if ((~*puVar12 & 0x2800000) == 0) {
            fVar15 = local_48[1];
            fVar16 = local_48[2];
            *local_4c = *local_48;
            local_4c[1] = fVar15;
            local_4c[2] = fVar16;
          }
          else {
            *local_4c = *local_48 * ALBW_AS_F32(puVar12[1]);
            local_4c[1] = local_48[1] * ALBW_AS_F32(puVar12[2]);
            local_4c[2] = local_48[2] * ALBW_AS_F32(puVar12[3]);
          }
          *puVar8 = *puVar8 & 0xfffffffd | 4;
        }
        if ((~*puVar8 & 0x10) == 0) {
          iVar1 = (**(code **)*local_28)(local_28,param_1,iVar9);
joined_r0x006783ec:
          if (iVar1 != 0) {
            *puVar8 = *puVar8 & 0x33ffffff | 4;
          }
        }
      }
      else {
        if ((~uVar5 & 2) == 0) {
          puVar3 = (uint *)(iVar10 + iVar9 * 0x40);
          pfVar6 = (float *)(iVar14 + iVar9 * 0x30);
          if ((~*puVar3 & 0xc000000) == 0) {
            if (local_2c == (float *)0x0) {
              pfVar7 = (float *)func_003E2134();
              fVar15 = pfVar7[1];
              fVar16 = pfVar7[2];
              fVar17 = pfVar7[3];
              fVar19 = pfVar7[4];
              fVar18 = pfVar7[5];
              fVar20 = pfVar7[6];
              fVar21 = pfVar7[7];
              *pfVar6 = *pfVar7;
              pfVar6[1] = fVar15;
              pfVar6[2] = fVar16;
              pfVar6[3] = fVar17;
              pfVar6[4] = fVar19;
              pfVar6[5] = fVar18;
              pfVar6[6] = fVar20;
              pfVar6[7] = fVar21;
              fVar15 = pfVar7[8];
              fVar16 = pfVar7[9];
              fVar17 = pfVar7[10];
              pfVar6[0xb] = pfVar7[0xb];
              pfVar6[8] = fVar15;
              pfVar6[9] = fVar16;
              pfVar6[10] = fVar17;
            }
            else {
              fVar15 = local_2c[1];
              fVar16 = local_2c[2];
              fVar17 = local_2c[3];
              fVar19 = local_2c[4];
              fVar18 = local_2c[5];
              fVar20 = local_2c[6];
              fVar21 = local_2c[7];
              *pfVar6 = *local_2c;
              pfVar6[1] = fVar15;
              pfVar6[2] = fVar16;
              pfVar6[3] = fVar17;
              pfVar6[4] = fVar19;
              pfVar6[5] = fVar18;
              pfVar6[6] = fVar20;
              pfVar6[7] = fVar21;
              fVar15 = local_2c[8];
              fVar16 = local_2c[9];
              fVar17 = local_2c[10];
              pfVar6[0xb] = local_2c[0xb];
              pfVar6[8] = fVar15;
              pfVar6[9] = fVar16;
              pfVar6[10] = fVar17;
            }
          }
          else if (local_2c == (float *)0x0) {
            fVar15 = ALBW_AS_F32(puVar3[5]);
            fVar16 = ALBW_AS_F32(puVar3[6]);
            fVar17 = ALBW_AS_F32(puVar3[7]);
            fVar19 = ALBW_AS_F32(puVar3[8]);
            fVar18 = ALBW_AS_F32(puVar3[9]);
            fVar20 = ALBW_AS_F32(puVar3[10]);
            fVar21 = ALBW_AS_F32(puVar3[0xb]);
            *pfVar6 = ALBW_AS_F32(puVar3[4]);
            pfVar6[1] = fVar15;
            pfVar6[2] = fVar16;
            pfVar6[3] = fVar17;
            pfVar6[4] = fVar19;
            pfVar6[5] = fVar18;
            pfVar6[6] = fVar20;
            pfVar6[7] = fVar21;
            fVar15 = ALBW_AS_F32(puVar3[0xc]);
            fVar16 = ALBW_AS_F32(puVar3[0xd]);
            fVar17 = ALBW_AS_F32(puVar3[0xe]);
            pfVar6[0xb] = ALBW_AS_F32(puVar3[0xf]);
            pfVar6[8] = fVar15;
            pfVar6[9] = fVar16;
            pfVar6[10] = fVar17;
          }
          else {
            func_00114E74(pfVar6,local_2c,(float *)(puVar3 + 4));
          }
          puVar3 = (uint *)(iVar10 + iVar9 * 0x40);
          if ((~*puVar3 & 0x2800000) == 0) {
            puVar4 = (undefined4 *)(iVar13 + iVar9 * 0xc);
            uVar22 = (undefined4)in_d8;
            *puVar4 = uVar22;
            puVar4[1] = uVar22;
            puVar4[2] = uVar22;
          }
          else {
            puVar12 = (uint *)(iVar13 + iVar9 * 0xc);
            *puVar12 = puVar3[1];
            puVar12[1] = puVar3[2];
            puVar12[2] = puVar3[3];
          }
          *puVar8 = *puVar8 & 0xfffffffd | 4;
        }
        if ((~*puVar8 & 0x10) == 0) {
          iVar1 = (**(code **)*local_28)(local_28,param_1,iVar9);
          goto joined_r0x006783ec;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar9 = 0;
  if (0 < iVar11) {
    do {
      uVar2 = *(uint *)(iVar10 + iVar9 * 0x40);
      if (((~uVar2 & 0x28000000) != 0) && ((~uVar2 & 4) == 0)) {
        pfVar6 = (float *)(iVar14 + iVar9 * 0x30);
        pfVar7 = (float *)(iVar13 + iVar9 * 0xc);
        fVar17 = *pfVar7;
        fVar15 = pfVar7[1];
        fVar16 = pfVar7[2];
        *pfVar6 = *pfVar6 * fVar17;
        pfVar6[1] = pfVar6[1] * fVar15;
        pfVar6[2] = pfVar6[2] * fVar16;
        pfVar6[4] = pfVar6[4] * fVar17;
        pfVar6[5] = pfVar6[5] * fVar15;
        pfVar6[6] = pfVar6[6] * fVar16;
        pfVar6[8] = pfVar6[8] * fVar17;
        pfVar6[9] = pfVar6[9] * fVar15;
        pfVar6[10] = pfVar6[10] * fVar16;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
  }
  return;
}

