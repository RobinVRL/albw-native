#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int DAT_0042ee18;
extern char *DAT_0042ee1c;
extern undefined4 DAT_0042ee20;

// USA 0042E990 <- EU 0042E970 (Ghidra, non-matching)
// GLOBAL DAT_0042ee18 int
// GLOBAL DAT_0042ee1c char *
// GLOBAL DAT_0042ee20 undefined4

void func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define local_64 (*(int * *)(albw_frame + 0x2c))
  #define local_60 (*(float * *)(albw_frame + 0x30))
  #define local_5c (*(int * *)(albw_frame + 0x34))
  #define local_58 (*(float * *)(albw_frame + 0x38))
  #define local_54 (*(int *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define fStack_38 (*(float *)(albw_frame + 0x58))
  #define fStack_34 (*(float *)(albw_frame + 0x5c))
  iVar2 = DAT_0042ee18;
  *(undefined4 *)(DAT_0042ee18 + 0x68) = param_3;
  iVar4 = *(int *)(param_1 + 0x5c);
  uVar14 = (uint)(*param_2 - *(float *)(iVar4 + 0x14));
  if ((((*(uint *)(iVar4 + 0x20) & uVar14) == 0) &&
      (uVar15 = (uint)(param_2[1] - *(float *)(iVar4 + 0x18)),
      (*(uint *)(iVar4 + 0x24) & uVar15) == 0)) &&
     (uVar16 = (uint)(param_2[2] - *(float *)(iVar4 + 0x1c)),
     (*(uint *)(iVar4 + 0x28) & uVar16) == 0)) {
    uVar8 = *(uint *)(iVar4 + 0x2c);
    uVar12 = (uVar16 >> (uVar8 & 0xff)) << (*(uint *)(iVar4 + 0x34) & 0xff) |
             (uVar15 >> (uVar8 & 0xff)) << (*(uint *)(iVar4 + 0x30) & 0xff) |
             uVar14 >> (uVar8 & 0xff);
    for (iVar4 = *(int *)(iVar4 + 0xc); uVar13 = *(uint *)(iVar4 + uVar12 * 4), -1 < (int)uVar13;
        iVar4 = iVar4 + uVar13) {
      uVar8 = uVar8 - 1;
      uVar12 = ((uVar16 >> (uVar8 & 0xff)) << 0x1f) >> 0x1d | (uVar15 >> (uVar8 & 0xff) & 1) << 1 |
               uVar14 >> (uVar8 & 0xff) & 1;
    }
    iVar4 = (uVar13 & 0x7fffffff) + iVar4;
    *(int *)(param_1 + 0x74) = iVar4;
    pcVar3 = DAT_0042ee1c;
    if (*(char *)(iVar2 + 0x6e) == '\0') {
      puVar10 = (ushort *)(iVar4 + 2);
      if (*puVar10 != 0) {
        do {
          iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar10 * 0x10;
          *(int *)(param_1 + 0x70) = iVar4;
          uVar14 = (uint)*(ushort *)(iVar4 + 0xe);
          if ((*(uint *)(iVar2 + 0x68) & 1 << (uVar14 & 0x1f)) != 0) {
            uVar14 = (uVar14 & 0xb000) >> 0xc;
            if (*pcVar3 == '\0') {
              if (uVar14 != 8) goto LAB_0042ef64;
            }
            else if (uVar14 != 9) {
LAB_0042ef64:
              (**(code **)*param_4)(param_4,param_1);
            }
          }
          puVar10 = puVar10 + 1;
          if (*puVar10 == 0) {
            return;
          }
        } while( true );
      }
    }
    else {
      uVar19 = (ulonglong)*(uint *)(DAT_0042ee18 + 0x14);
      if (*(char *)(param_1 + 0x4a0) == '\0') {
        puVar10 = (ushort *)(iVar4 + 2);
        uVar14 = (uint)*puVar10;
        if (uVar14 != 0) {
          piVar11 = (int *)(param_1 + 0x488);
          do {
            local_64 = *(int **)(param_1 + 0x5c);
            local_60 = (float *)(local_64[2] + uVar14 * 0x10);
            *(float **)(param_1 + 0x70) = local_60;
            if ((*(uint *)(iVar2 + 0x68) & 1 << (*(ushort *)((int)local_60 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)((int)local_60 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar3 == '\0') {
                if (uVar14 != 8) goto LAB_0042ed48;
              }
              else if (uVar14 != 9) {
LAB_0042ed48:
                local_5c = (int *)((int)local_60 - local_64[2] >> 4);
                puVar7 = (undefined4 *)(*local_64 + (uint)*(ushort *)(local_60 + 1) * 0xc);
                local_58 = (float *)*puVar7;
                local_54 = puVar7[1];
                local_50 = ALBW_AS_F32(puVar7[2]);
                local_4c = *(float *)(iVar2 + 0x38);
                func_00115C70(&local_84,(float *)(iVar2 + 8),(float *)&local_58);
                iVar4 = local_64[1];
                pfVar5 = (float *)(iVar4 + (uint)*(ushort *)(local_60 + 2) * 0xc);
                fVar18 = ALBW_AS_F32(uVar19);
                if (((local_84 * *pfVar5 + fStack_80 * pfVar5[1] + fStack_7c * pfVar5[2] <= fVar18)
                    && (pfVar5 = (float *)(iVar4 + (uint)*(ushort *)((int)local_60 + 10) * 0xc),
                       local_84 * *pfVar5 + fStack_80 * pfVar5[1] + fStack_7c * pfVar5[2] <= fVar18)
                    ) && (pfVar5 = (float *)(iVar4 + (uint)*(ushort *)(local_60 + 3) * 0xc),
                         local_84 * *pfVar5 + fStack_80 * pfVar5[1] + fStack_7c * pfVar5[2] <=
                         *local_60 + fVar18)) {
                  pfVar5 = (float *)(iVar4 + (uint)*(ushort *)((int)local_60 + 6) * 0xc);
                  fVar17 = -(local_84 * *pfVar5 + fStack_80 * pfVar5[1]) + -(fStack_7c * pfVar5[2]);
                  if (((-fVar18 <= fVar17) && (fVar17 <= fVar18)) && (fVar17 != -3.4028235e+38)) {
                    puVar6 = *(ushort **)(param_1 + 0x488);
                    uVar1 = *puVar10;
                    *piVar11 = (int)(puVar6 + 1);
                    *puVar6 = uVar1;
                    if (piVar11 <= (int *)*piVar11) {
                      *piVar11 = *(int *)(param_1 + 0x488) + -2;
                      return;
                    }
                  }
                }
              }
            }
            puVar10 = puVar10 + 1;
            uVar14 = (uint)*puVar10;
            if (uVar14 == 0) {
              return;
            }
          } while( true );
        }
      }
      else {
        puVar10 = (ushort *)(iVar4 + 2);
        uVar14 = (uint)*puVar10;
        if (uVar14 != 0) {
          piVar11 = (int *)(param_1 + 0x488);
          do {
            local_5c = *(int **)(param_1 + 0x5c);
            local_58 = (float *)(local_5c[2] + uVar14 * 0x10);
            *(float **)(param_1 + 0x70) = local_58;
            if ((*(uint *)(iVar2 + 0x68) & 1 << (*(ushort *)((int)local_58 + 0xe) & 0x1f)) != 0) {
              uVar14 = (*(ushort *)((int)local_58 + 0xe) & 0xb000) >> 0xc;
              if (*pcVar3 == '\0') {
                if (uVar14 != 8) goto LAB_0042eb08;
              }
              else if (uVar14 != 9) {
LAB_0042eb08:
                local_54 = (int)local_58 - local_5c[2] >> 4;
                pfVar5 = (float *)(*local_5c + (uint)*(ushort *)(local_58 + 1) * 0xc);
                local_50 = *pfVar5;
                local_4c = pfVar5[1];
                local_48 = pfVar5[2];
                local_44 = *(undefined4 *)(iVar2 + 0x38);
                func_00115C70(&local_3c,(float *)(iVar2 + 8),&local_50);
                iVar4 = local_5c[1];
                pfVar5 = (float *)(iVar4 + (uint)*(ushort *)(local_58 + 2) * 0xc);
                fVar18 = ALBW_AS_F32(uVar19);
                if (((local_3c * *pfVar5 + fStack_38 * pfVar5[1] + fStack_34 * pfVar5[2] <= fVar18)
                    && (pfVar5 = (float *)(iVar4 + (uint)*(ushort *)((int)local_58 + 10) * 0xc),
                       local_3c * *pfVar5 + fStack_38 * pfVar5[1] + fStack_34 * pfVar5[2] <= fVar18)
                    ) && (pfVar5 = (float *)(iVar4 + (uint)*(ushort *)(local_58 + 3) * 0xc),
                         local_3c * *pfVar5 + fStack_38 * pfVar5[1] + fStack_34 * pfVar5[2] <=
                         *local_58 + fVar18)) {
                  pfVar5 = (float *)(iVar4 + (uint)*(ushort *)((int)local_58 + 6) * 0xc);
                  fVar17 = -(local_3c * *pfVar5 + fStack_38 * pfVar5[1]) + -(fStack_34 * pfVar5[2]);
                  if (((-fVar18 <= fVar17) && (fVar17 <= fVar18)) && (fVar17 != -3.4028235e+38)) {
                    puVar9 = *(ushort **)(param_1 + 0x488);
                    puVar6 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
                    if (puVar6 != puVar9) {
                      do {
                        if (*puVar10 == *puVar6) goto LAB_0042ec98;
                        puVar6 = puVar6 + 1;
                      } while (puVar6 != puVar9);
                    }
                    uVar1 = *puVar10;
                    *piVar11 = (int)(puVar9 + 1);
                    *puVar9 = uVar1;
LAB_0042ec98:
                    if (piVar11 <= *(int **)(param_1 + 0x488)) {
                      *piVar11 = (int)*(int **)(param_1 + 0x488) + -2;
                      return;
                    }
                  }
                }
              }
            }
            puVar10 = puVar10 + 1;
            uVar14 = (uint)*puVar10;
            if (uVar14 == 0) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

