#include "ghidra_types.h"

extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_003F6FBC(int param_1);
extern int func_003F8250(int param_1,int param_2,int param_3,int param_4);
extern int func_0051E6AC(int param_1);
extern uint *DAT_002e42ec;
extern int *DAT_002e42f0;
extern int *DAT_002e42f4;
extern int *DAT_002e42f8;
extern undefined *DAT_002e42fc;

// USA 002E3DF4 <- EU 002E3DD0 (Ghidra, non-matching)
// GLOBAL DAT_002e42ec uint *
// GLOBAL DAT_002e42f0 int *
// GLOBAL DAT_002e42f4 int *
// GLOBAL DAT_002e42f8 int *
// GLOBAL DAT_002e42fc undefined *

void func_002E3DF4(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 * *)(albw_frame + 0x0))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(uint *)(albw_frame + 0x18))
  if ((*DAT_002e42ec & 1) == 0) {
    func_003F6FBC(*(int *)(param_1 + 0x10));
    cVar1 = *(char *)(*DAT_002e42f0 + 0x22);
    bVar16 = cVar1 == '\0';
    if (bVar16) {
      cVar1 = *(char *)(param_1 + 0xa0);
    }
    if (*(char *)(*DAT_002e42f4 + 0x16) == '\0') {
      if (bVar16 && cVar1 == '\0') {
        iVar7 = 1 - *(int *)(param_1 + 0x9c);
        *(int *)(param_1 + 0x9c) = iVar7;
        puVar10 = *(undefined4 **)(param_1 + iVar7 * 4 + 0x94);
        uVar3 = 0;
        do {
          puVar8 = (undefined4 *)(param_1 + 0xa4);
          if (uVar3 < 4) {
            puVar8 = (undefined4 *)(param_1 + 0xa4 + uVar3 * 0x14);
          }
          uVar3 = uVar3 + 1;
          *puVar8 = 0;
        } while ((int)uVar3 < 4);
        iVar7 = func_0051E6AC(*DAT_002e42f8);
        uVar3 = 0;
        do {
          iVar4 = *(int *)(*(int *)(param_1 + 0x10) + (uVar3 & 0xff) * 4 + 0x120);
          if (iVar4 != 0) {
            do {
              fVar23 = *(float *)(iVar7 + 0x24);
              fVar17 = *(float *)(iVar4 + 0x1b8);
              fVar22 = *(float *)(iVar7 + 0x28);
              fVar20 = *(float *)(iVar7 + 0x2c);
              fVar21 = *(float *)(iVar7 + 0x20);
              fVar19 = *(float *)(iVar4 + 0x1a8);
              fVar18 = *(float *)(iVar4 + 0x1c8);
              piVar11 = (int *)(param_1 + 0x34);
              if (uVar3 < 0xc) {
                piVar11 = (int *)(param_1 + 0x34 + uVar3 * 8);
              }
              iVar15 = *(int *)(iVar4 + 0x278);
              piVar11 = (int *)*piVar11;
              iVar13 = *piVar11;
              if (iVar13 < piVar11[1]) {
                *piVar11 = iVar13 + 1;
                piVar11 = (int *)(piVar11[2] + iVar13 * 8);
                *piVar11 = iVar4;
                piVar11[1] = (int)ALBW_AS_U32((fVar23 * fVar17 + fVar22 * fVar18 + fVar20 + fVar21 * fVar19));
              }
              iVar4 = iVar15;
            } while (iVar15 != 0);
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0xc);
        local_30 = 0;
        do {
          pcVar2 = DAT_002e42fc;
          iVar7 = param_1 + 0xa4;
          puVar5 = (uint *)(param_1 + 0xa4);
          if (local_30 < 4) {
            iVar7 = param_1 + 0xa4 + local_30 * 0x14;
            puVar5 = (uint *)(param_1 + 0xa4 + local_30 * 0x14);
          }
          local_2c = (undefined4 *)(iVar7 + 0xc);
          local_40 = puVar10;
          if (*puVar5 == 0) {
            if (local_2c != (undefined4 *)0x0) {
              *local_2c = 0;
              *(undefined4 *)(iVar7 + 0x10) = 0;
            }
          }
          else {
            local_28 = 0;
            puVar8 = (undefined4 *)0x0;
            if ((0 < (int)*puVar5) && ((undefined4 *)puVar5[2] != (undefined4 *)0x0)) {
              puVar8 = (undefined4 *)puVar5[2];
              local_28 = *puVar5;
            }
            uVar9 = *puVar5;
            uVar3 = uVar9;
            if (local_28 != 0) {
              uVar3 = local_28;
            }
            if ((local_28 != 0 && uVar9 - 1 < uVar3) && (1 < (int)uVar9)) {
              iVar7 = (int)uVar9 / 2;
              if (0 < iVar7) {
                do {
                  iVar4 = iVar7 * 2 - uVar9;
                  local_38 = puVar8[iVar7 * 2 + -2];
                  uStack_34 = puVar8[iVar7 * 2 + -1];
                  iVar15 = iVar7 * 2;
                  iVar13 = iVar7;
                  while (iVar14 = iVar15, iVar14 <= (int)uVar9) {
                    if ((iVar4 < 0 != SBORROW4(iVar14,uVar9)) &&
                       (iVar4 = (*pcVar2)(puVar8 + iVar14 * 2 + -2), iVar4 < 0)) {
                      iVar14 = iVar14 + 1;
                    }
                    iVar4 = (*pcVar2)(&local_38,puVar8 + iVar14 * 2 + -2);
                    if (-1 < iVar4) break;
                    uVar12 = puVar8[iVar14 * 2 + -1];
                    puVar8[iVar13 * 2 + -2] = puVar8[iVar14 * 2 + -2];
                    puVar8[iVar13 * 2 + -1] = uVar12;
                    iVar4 = iVar14 * 2 - uVar9;
                    iVar15 = iVar14 * 2;
                    iVar13 = iVar14;
                  }
                  iVar7 = iVar7 + -1;
                  puVar8[iVar13 * 2 + -2] = local_38;
                  puVar8[iVar13 * 2 + -1] = uStack_34;
                } while (0 < iVar7);
                if ((int)uVar9 < 2) goto LAB_002e4154;
              }
              do {
                local_38 = puVar8[uVar9 * 2 + -2];
                uStack_34 = puVar8[uVar9 * 2 + -1];
                uVar3 = uVar9 - 1;
                iVar7 = 2;
                uVar12 = *puVar8;
                puVar8[uVar9 * 2 + -1] = puVar8[1];
                puVar8[uVar9 * 2 + -2] = uVar12;
                iVar4 = 1;
                if (1 < (int)uVar3) {
                  do {
                    iVar13 = iVar7;
                    if ((iVar7 < (int)uVar3) &&
                       (iVar15 = (*pcVar2)(puVar8 + iVar7 * 2 + -2), iVar15 < 0)) {
                      iVar13 = iVar7 + 1;
                    }
                    iVar7 = (*pcVar2)(&local_38,puVar8 + iVar13 * 2 + -2);
                    if (-1 < iVar7) break;
                    uVar12 = puVar8[iVar13 * 2 + -1];
                    iVar7 = iVar13 * 2;
                    puVar8[iVar4 * 2 + -2] = puVar8[iVar13 * 2 + -2];
                    puVar8[iVar4 * 2 + -1] = uVar12;
                    iVar4 = iVar13;
                  } while (iVar7 <= (int)uVar3);
                }
                puVar8[iVar4 * 2 + -2] = local_38;
                puVar8[iVar4 * 2 + -1] = uStack_34;
                uVar9 = uVar3;
              } while (1 < (int)uVar3);
            }
LAB_002e4154:
            uVar3 = 0;
            if (0 < (int)local_28) {
              do {
                puVar6 = puVar8;
                if (uVar3 < local_28) {
                  puVar6 = puVar8 + uVar3 * 2;
                }
                piVar11 = (int *)*puVar6;
                iVar7 = param_1 + 0x34;
                if ((piVar11[0x66] & 0xffU) < 0xc) {
                  iVar7 = iVar7 + (piVar11[0x66] & 0xffU) * 8;
                }
                uVar9 = (uint)*(char *)(iVar7 + 4);
                if ((*(char *)(param_1 + 0xa1) != '\0') &&
                   ((*(uint *)(*(int *)(*(int *)(*(int *)(*piVar11 + 0xc) + piVar11[100] * 4) + 0x18
                                       ) + piVar11[0x65] * 0x3c + 0xc) >> 0x10 & 4) == 0)) {
                  uVar9 = 1;
                }
                local_40 = (undefined4 *)
                           func_003F8250(*(int *)(param_1 + 0x10),(int)local_40,(int)piVar11,
                                         uVar9 ^ 1);
                uVar3 = uVar3 + 1;
              } while ((int)uVar3 < (int)local_28);
            }
            puVar8 = local_2c;
            if (local_2c != (undefined4 *)0x0) {
              uVar3 = ((int)local_40 - (int)puVar10 & 0xfffffffcU) + 8;
              if (((uVar3 & 0xf) != 0) && (uVar3 = 4 - (uVar3 * 0x10000000 >> 0x1e), 0 < (int)uVar3)
                 ) {
                puVar6 = local_40 + -1;
                if ((uVar3 & 1) != 0) {
                  *local_40 = 0;
                  puVar6 = local_40;
                }
                for (iVar7 = (int)uVar3 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
                  puVar6[1] = 0;
                  puVar6 = puVar6 + 2;
                  *puVar6 = 0;
                }
                local_40 = local_40 + uVar3;
              }
              local_40 = func_003CC030(local_40,1);
              puVar8[1] = (int)local_40 - (int)puVar10 >> 2;
              *puVar8 = puVar10;
            }
          }
        } while ((((int)local_40 - *(int *)(param_1 + *(int *)(param_1 + 0x9c) * 4 + 0x94) >> 2 <
                   0x20000) && (local_30 = local_30 + 1, (int)local_30 < 4)) &&
                (puVar10 = local_40, local_30 != 3));
      }
    }
    else {
      uVar3 = 0;
      do {
        puVar10 = (undefined4 *)(param_1 + 0xa4);
        if (uVar3 < 4) {
          puVar10 = (undefined4 *)(param_1 + 0xa4 + uVar3 * 0x14);
        }
        iVar7 = param_1 + 0xa4;
        *puVar10 = 0;
        if (uVar3 < 4) {
          iVar7 = iVar7 + uVar3 * 0x14;
        }
        uVar3 = uVar3 + 1;
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(undefined4 *)(iVar7 + 0x10) = 0;
      } while ((int)uVar3 < 4);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}

