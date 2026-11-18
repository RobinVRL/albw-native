#include "ghidra_types.h"

extern int func_003FAEF8(int *param_1);
extern uint DAT_001695f0;
extern undefined4 DAT_001695f4;

// USA 00169344 <- EU 00169344 (Ghidra, non-matching)
// GLOBAL DAT_001695f0 uint
// GLOBAL DAT_001695f4 undefined4

void func_00169344(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  uint *puVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  short sVar14;
  short *psVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  
  uVar11 = 0;
  uVar2 = *param_2;
  if (0 < (int)uVar2) {
    sVar14 = (short)DAT_001695f4;
    uVar21 = (ulonglong)DAT_001695f0;
    do {
      if (uVar11 < uVar2) {
        puVar3 = (uint *)(param_2[2] + uVar11 * 0x18);
      }
      else {
        puVar3 = (uint *)param_2[2];
      }
      uVar2 = *puVar3;
      if (-1 < (int)uVar2) {
        if (uVar2 < *(uint *)(param_1 + 4)) {
          puVar6 = (uint *)(*(int *)(param_1 + 8) + uVar2 * 4);
        }
        else {
          puVar6 = *(uint **)(param_1 + 8);
        }
        piVar12 = (int *)*puVar6;
        if (piVar12 != (int *)0x0) {
          iVar8 = *(int *)(param_1 + 0xc);
          if (iVar8 < *(int *)(param_1 + 0x10)) {
            iVar9 = iVar8 + 1;
            puVar6 = (uint *)(*(int *)(param_1 + 0x14) + iVar8 * 0x28);
            *(int *)(param_1 + 0xc) = iVar9;
          }
          else {
            puVar6 = (uint *)0x0;
            iVar9 = iVar8;
          }
          *puVar6 = *puVar3;
          puVar6[1] = (uint)piVar12;
          fVar18 = ALBW_AS_F32(puVar3[3]);
          fVar20 = ALBW_AS_F32(uVar21);
          if (fVar18 < fVar20) {
            iVar9 = *piVar12;
          }
          if (fVar18 < fVar20) {
            fVar18 = *(float *)(iVar9 + 8);
          }
          puVar6[5] = (uint)ALBW_AS_U32(fVar18);
          bVar7 = (byte)puVar3[5];
          bVar16 = (char)bVar7 < '\0';
          bVar17 = bVar7 == 0;
          if (bVar17) {
            bVar7 = 0;
          }
          if (bVar16) {
            bVar7 = *(byte *)(*piVar12 + 4) & 1;
            if ((*(byte *)(*piVar12 + 4) & 1) != 0) {
LAB_00169424:
              bVar7 = 1;
            }
          }
          else if (!bVar17) goto LAB_00169424;
          *(byte *)(puVar6 + 7) = bVar7;
          fVar18 = ALBW_AS_F32(puVar3[1]);
          fVar19 = ALBW_AS_F32(puVar3[2]);
          if ((fVar20 <= fVar19) || (fVar18 != fVar20)) {
            puVar6[3] = (uint)ALBW_AS_U32(fVar18);
            puVar6[2] = (uint)ALBW_AS_U32(fVar18);
          }
          else {
            puVar6[3] = puVar6[5];
            puVar6[2] = puVar6[5];
          }
          puVar6[4] = (uint)ALBW_AS_U32(fVar19);
          puVar6[6] = 0;
          *(undefined1 *)((int)puVar6 + 0x26) = 1;
          *(undefined1 *)((int)puVar6 + 0x25) = 1;
          uVar2 = 0;
          puVar6[8] = puVar3[4];
          if (0 < *(int *)(param_1 + 0x90)) {
LAB_0016949c:
            iVar8 = *(int *)(param_1 + 0x94);
            if (uVar2 < *(uint *)(param_1 + 0x90)) {
              iVar8 = *(int *)(param_1 + 0x94) + uVar2 * 0x14;
            }
            if (*(char *)(iVar8 + 0x10) != '\0') goto code_r0x001694b8;
            *(char *)(puVar6 + 9) = (char)uVar2;
            iVar8 = *(int *)(param_1 + 0x94);
            if (uVar2 < *(uint *)(param_1 + 0x90)) {
              iVar8 = iVar8 + uVar2 * 0x14;
            }
            iVar9 = param_1 + 0x90;
            *(undefined1 *)(iVar8 + 0x10) = 1;
            if (uVar2 < *(uint *)(param_1 + 0x90)) {
              iVar9 = *(int *)(param_1 + 0x94) + uVar2 * 0x14;
            }
            if (*(uint *)(param_1 + 0x90) <= uVar2) {
              iVar9 = *(int *)(iVar9 + 4);
            }
            *(bool *)(iVar9 + 0x11) = *(char *)(*piVar12 + 5) == '\x01';
            if (uVar2 < *(uint *)(param_1 + 0x90)) {
              piVar13 = (int *)(*(int *)(param_1 + 0x94) + uVar2 * 0x14);
            }
            else {
              piVar13 = *(int **)(param_1 + 0x94);
            }
            uVar4 = 0;
            if (piVar12[3] != 0) {
              do {
                uVar10 = 0;
                sVar1 = *(short *)(piVar12[2] + uVar4 * 2);
                sVar5 = sVar1;
                if (0 < *(int *)(param_1 + 0x98)) {
                  do {
                    psVar15 = *(short **)(param_1 + 0xa0);
                    if (uVar10 < *(uint *)(param_1 + 0x98)) {
                      psVar15 = *(short **)(param_1 + 0xa0) + uVar10;
                    }
                    sVar5 = sVar14;
                  } while ((*psVar15 != sVar1) &&
                          (uVar10 = uVar10 + 1, sVar5 = sVar1,
                          (int)uVar10 < (int)*(uint *)(param_1 + 0x98)));
                }
                iVar8 = uVar4 * 2;
                uVar4 = uVar4 + 1;
                *(short *)(*piVar13 + iVar8) = sVar5;
              } while (uVar4 < (uint)piVar12[3]);
            }
            iVar8 = *(int *)(param_1 + 0x94);
            if (uVar2 < *(uint *)(param_1 + 0x90)) {
              iVar8 = iVar8 + uVar2 * 0x14;
            }
            func_003FAEF8((int *)(iVar8 + 8));
          }
        }
      }
LAB_001694c4:
      uVar2 = *param_2;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar2);
  }
  return;
code_r0x001694b8:
  uVar2 = uVar2 + 1;
  if ((int)*(uint *)(param_1 + 0x90) <= (int)uVar2) goto LAB_001694c4;
  goto LAB_0016949c;
}

