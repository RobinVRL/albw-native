#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00451C5C(int param_1,float *param_2,int param_3);
extern int func_0048C258(int *param_1,undefined *param_2);
extern int func_00529C1C(int param_1,int param_2);
extern int func_00529D00(int param_1,int param_2);
extern int func_0058208C(int param_1,int *param_2,int param_3);
extern int *DAT_0043a1c0;
extern float DAT_0043a1c4;
extern float DAT_0043a1c8;
extern float DAT_0043a1cc;
extern float DAT_0043a1d0;
extern undefined *DAT_0043a1d4;

// USA 00439E74 <- EU 00439E54 (Ghidra, non-matching)
// GLOBAL DAT_0043a1c0 int *
// GLOBAL DAT_0043a1c4 float
// GLOBAL DAT_0043a1c8 float
// GLOBAL DAT_0043a1cc float
// GLOBAL DAT_0043a1d0 float
// GLOBAL DAT_0043a1d4 undefined *

void func_00439E74(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(int *)(albw_frame + 0x4))
  #define local_68 (*(int * *)(albw_frame + 0x8))
  #define auStack_64 ((undefined1 *)(albw_frame + 0xc))
  iVar13 = *DAT_0043a1c0;
  if (iVar13 != 0) {
    iVar2 = 1;
    *(undefined4 *)(param_1 + 0x160) = 0;
    iVar10 = 1;
    *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
    do {
      *(undefined4 *)(param_1 + 0x164 + iVar2 * 4) = 0xffffffff;
      iVar10 = iVar10 + 2;
      *(undefined4 *)(param_1 + 0x164 + (iVar2 + 1) * 4) = 0xffffffff;
      iVar2 = iVar2 + 2;
    } while (iVar10 < 0xd);
    iVar13 = func_0058208C(iVar13,(int *)(param_1 + 0x154),1);
    if (iVar13 != 0) {
      iVar13 = *(int *)(param_1 + 0x15c);
      iVar2 = *(int *)(param_1 + 0x154);
      local_70 = 0;
      local_6c = 0;
      local_68 = (int *)0x0;
      func_0010B3EC(&local_70,0xd,(int)auStack_64);
      fVar19 = DAT_0043a1c4;
      fVar21 = DAT_0043a1c8;
      fVar20 = DAT_0043a1cc;
      fVar22 = DAT_0043a1d0;
      for (puVar12 = *(undefined4 **)(param_1 + 0x15c);
          puVar12 != (undefined4 *)(iVar13 + iVar2 * 4); puVar12 = puVar12 + 1) {
        pfVar4 = (float *)*puVar12;
        if (((uint)ALBW_AS_U32(pfVar4[5]) & 0x200000) != 0) {
          uVar3 = *(uint *)(param_1 + 0x160);
          if (*(uint *)(param_1 + 0x1b4) == 0xffffffff) {
            puVar6 = (uint *)(param_1 + 0xec);
            if (uVar3 < 0xd) {
              puVar6 = puVar6 + uVar3;
            }
            uVar7 = *puVar6;
            bVar14 = *(char *)(uVar7 + 0xd) == '\0';
            if (bVar14) {
              uVar7 = (uint)*(byte *)(uVar7 + 0xe);
            }
            if (bVar14 && uVar7 == 0) {
              piVar8 = (int *)(param_1 + 0xec);
              if (uVar3 < 0xd) {
                piVar8 = piVar8 + uVar3;
              }
              fVar18 = pfVar4[2];
              fVar15 = fVar19 + *pfVar4 * fVar21;
              iVar9 = *piVar8;
              *(float *)(iVar9 + 0x74) = *pfVar4;
              *(float *)(iVar9 + 0x78) = fVar18;
              iVar10 = (int)fVar15;
              fVar17 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
              uVar3 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar15) << 0x1e |
                      (uint)(fVar15 <= fVar17) << 0x1d;
              bVar1 = (byte)(uVar3 >> 0x18);
              bVar14 = (bool)(bVar1 >> 6);
              if (!bVar14) {
                uVar3 = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar15) << 0x1e |
                        (uint)(fVar15 <= fVar22) << 0x1d;
                bVar1 = (byte)(uVar3 >> 0x18);
                bVar14 = (bool)(bVar1 >> 6);
              }
              if ((bool)(bVar1 >> 5 & 1) && !bVar14) {
                iVar10 = iVar10 + -1;
              }
              uVar16 = ALBW_AS_U32(VectorSignedToFloat(iVar10,(byte)(uVar3 >> 0x15) & 3));
              *(undefined4 *)(iVar9 + 0x7c) = uVar16;
              fVar15 = fVar20 - fVar18 * fVar21;
              iVar10 = (int)fVar15;
              fVar17 = (float)VectorSignedToFloat(iVar10,(byte)(uVar3 >> 0x15) & 3);
              in_fpscr = uVar3 & 0xfffffff | (uint)(fVar17 == fVar15) << 0x1e |
                         (uint)(fVar15 <= fVar17) << 0x1d;
              bVar1 = (byte)(in_fpscr >> 0x18);
              bVar14 = (bool)(bVar1 >> 6);
              if (!bVar14) {
                in_fpscr = uVar3 & 0xfffffff | (uint)(fVar22 == fVar15) << 0x1e |
                           (uint)(fVar15 <= fVar22) << 0x1d;
                bVar1 = (byte)(in_fpscr >> 0x18);
                bVar14 = (bool)(bVar1 >> 6);
              }
              if ((bool)(bVar1 >> 5 & 1) && !bVar14) {
                iVar10 = iVar10 + -1;
              }
              uVar16 = ALBW_AS_U32(VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3));
              *(undefined4 *)(iVar9 + 0x80) = uVar16;
              *(float *)(iVar9 + 0x84) = pfVar4[7];
              fVar15 = pfVar4[10];
              fVar17 = pfVar4[0xb];
              *(float *)(iVar9 + 0x88) = pfVar4[9];
              *(float *)(iVar9 + 0x8c) = fVar15;
              *(float *)(iVar9 + 0x90) = fVar17;
              func_00529C1C((int)pfVar4,iVar9 + 0xa0);
              func_00529D00((int)pfVar4,iVar9 + 0xec);
              piVar8 = (int *)(param_1 + 0xec);
              if (*(uint *)(param_1 + 0x160) < 0xd) {
                piVar8 = piVar8 + *(uint *)(param_1 + 0x160);
              }
              *(undefined1 *)(*piVar8 + 0xe) = 1;
              piVar8 = (int *)(param_1 + 0xec);
              if (*(uint *)(param_1 + 0x160) < 0xd) {
                piVar8 = piVar8 + *(uint *)(param_1 + 0x160);
              }
              puVar5 = (undefined4 *)(param_1 + 0x198);
              if (*(byte *)(param_1 + 0x1a0) < 2) {
                puVar5 = puVar5 + *(byte *)(param_1 + 0x1a0);
              }
              *(undefined4 *)(*piVar8 + 0x138) = *puVar5;
            }
          }
          else {
            puVar6 = (uint *)(param_1 + 0x120);
            if (uVar3 < 0xd) {
              puVar6 = puVar6 + uVar3;
            }
            uVar7 = *puVar6;
            bVar14 = *(char *)(uVar7 + 0xd) == '\0';
            if (bVar14) {
              uVar7 = (uint)*(byte *)(uVar7 + 0xe);
            }
            if (bVar14 && uVar7 == 0) {
              if ((uint)*(ushort *)((int)pfVar4 + 0x32) == *(uint *)(param_1 + 0x1b4)) {
                piVar8 = (int *)(param_1 + 0x198);
                if (*(byte *)(param_1 + 0x1a0) < 2) {
                  piVar8 = piVar8 + *(byte *)(param_1 + 0x1a0);
                }
                piVar11 = (int *)(param_1 + 0x120);
                if (uVar3 < 0xd) {
                  piVar11 = piVar11 + uVar3;
                }
                iVar9 = *piVar8;
                iVar10 = *piVar11;
              }
              else {
                piVar8 = (int *)(param_1 + 0x120);
                if (uVar3 < 0xd) {
                  piVar8 = piVar8 + uVar3;
                }
                iVar10 = *piVar8;
                iVar9 = 0;
              }
              func_00451C5C(iVar10,pfVar4,iVar9);
              piVar8 = (int *)(param_1 + 0x120);
              if (*(uint *)(param_1 + 0x160) < 0xd) {
                piVar8 = piVar8 + *(uint *)(param_1 + 0x160);
              }
              *(undefined1 *)(*piVar8 + 0xe) = 1;
            }
          }
          piVar8 = (int *)(param_1 + 0xec);
          if (*(uint *)(param_1 + 0x160) < 0xd) {
            piVar8 = piVar8 + *(uint *)(param_1 + 0x160);
          }
          if (local_70 < local_6c) {
            local_68[local_70] = *piVar8;
            local_70 = local_70 + 1;
          }
          *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        }
      }
      func_0048C258(&local_70,DAT_0043a1d4);
      uVar3 = 0;
      piVar8 = local_68 + local_70;
      for (; local_68 != piVar8; local_68 = local_68 + 1) {
        uVar7 = 0;
        do {
          piVar11 = (int *)(param_1 + 0xec);
          if (uVar7 < 0xd) {
            piVar11 = piVar11 + uVar7;
          }
          if (*piVar11 == *local_68) {
            puVar6 = (uint *)(param_1 + 0x164);
            if (uVar3 < 0xd) {
              puVar6 = (uint *)(param_1 + 0x164 + uVar3 * 4);
            }
            *puVar6 = uVar7;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0xd);
        uVar3 = uVar3 + 1;
      }
    }
  }
  return;
}

