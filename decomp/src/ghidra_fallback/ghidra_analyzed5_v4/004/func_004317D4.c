#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int DAT_00431b34;
extern char *DAT_00431b38;
extern undefined4 DAT_00431b3c;

// USA 004317D4 <- EU 004317B4 (Ghidra, non-matching)
// GLOBAL DAT_00431b34 int
// GLOBAL DAT_00431b38 char *
// GLOBAL DAT_00431b3c undefined4

undefined4 func_004317D4(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int *piVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_68 (*(int * *)(albw_frame + 0x18))
  #define local_64 (*(float * *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(int * *)(albw_frame + 0x28))
  #define local_54 (*(float * *)(albw_frame + 0x2c))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  pcVar2 = DAT_00431b38;
  iVar11 = DAT_00431b34;
  uVar3 = *(uint *)(param_2 + param_3);
  if ((uVar3 & 0x80000000) == 0) {
    iVar11 = param_2 + uVar3;
    func_004317D4(param_1,iVar11,0,param_4);
    func_004317D4(param_1,iVar11,4,param_4);
    func_004317D4(param_1,iVar11,8,param_4);
    func_004317D4(param_1,iVar11,0xc,param_4);
    func_004317D4(param_1,iVar11,0x10,param_4);
    func_004317D4(param_1,iVar11,0x14,param_4);
    func_004317D4(param_1,iVar11,0x18,param_4);
    return func_004317D4(param_1,iVar11,0x1c,param_4);
  }
  iVar9 = (uVar3 & 0x7fffffff) + param_2;
  if (*(char *)(DAT_00431b34 + 0x6e) == '\0') {
    if (*(char *)(DAT_00431b34 + 0x6f) == '\0') {
      puVar10 = (ushort *)(iVar9 + 2);
      uVar3 = (uint)*puVar10;
      if (uVar3 != 0) {
        do {
          iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + uVar3 * 0x10;
          *(int *)(param_1 + 0x70) = iVar9;
          if ((*(uint *)(iVar11 + 0x68) & 1 << (*(ushort *)(iVar9 + 0xe) & 0x1f)) != 0) {
            uVar3 = (*(ushort *)(iVar9 + 0xe) & 0xb000) >> 0xc;
            if (*pcVar2 == '\0') {
              if (uVar3 != 8) goto LAB_00431dc8;
            }
            else if (uVar3 != 9) {
LAB_00431dc8:
              iVar7 = *(int *)(param_1 + 0x58);
              uVar3 = iVar9 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
              if (uVar3 < *(uint *)(iVar7 + 200)) {
                piVar12 = (int *)(*(int *)(iVar7 + 0xcc) + uVar3 * 8);
              }
              else {
                piVar12 = *(int **)(iVar7 + 0xcc);
              }
              iVar9 = piVar12[1];
              bVar14 = iVar9 == 0;
              if (bVar14) {
                iVar9 = *piVar12;
              }
              if (bVar14 && iVar9 == 0) {
                func_0010F1DC((int *)(param_1 + 0x78),
                              (int *)(*(int *)(param_1 + 0x84) + (int)piVar12));
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                (**(code **)*param_4)(param_4,param_1);
                if (*(char *)(iVar11 + 0x6f) != '\0') {
                  return 0;
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
          uVar3 = (uint)*puVar10;
          if (uVar3 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else {
    uVar17 = (ulonglong)*(uint *)(DAT_00431b34 + 0x14);
    if (*(char *)(param_1 + 0x4a0) == '\0') {
      local_68 = (int *)0x0;
      local_64 = (float *)0x0;
      local_60 = 0;
      local_50 = DAT_00431b3c;
      puVar10 = (ushort *)(iVar9 + 2);
      pfVar13 = (float *)(DAT_00431b34 + 8);
      if (*puVar10 != 0) {
        piVar12 = (int *)(param_1 + 0x488);
        do {
          iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar10 * 0x10;
          *(int *)(param_1 + 0x70) = iVar9;
          if ((*(uint *)(iVar11 + 0x68) & 1 << (*(ushort *)(iVar9 + 0xe) & 0x1f)) != 0) {
            uVar3 = (*(ushort *)(iVar9 + 0xe) & 0xb000) >> 0xc;
            if (*pcVar2 == '\0') {
              if (uVar3 != 8) goto LAB_00431b48;
            }
            else if (uVar3 != 9) {
LAB_00431b48:
              iVar7 = *(int *)(param_1 + 0x58);
              uVar3 = iVar9 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
              if (uVar3 < *(uint *)(iVar7 + 200)) {
                piVar4 = (int *)(*(int *)(iVar7 + 0xcc) + uVar3 * 8);
              }
              else {
                piVar4 = *(int **)(iVar7 + 0xcc);
              }
              iVar9 = piVar4[1];
              bVar14 = iVar9 == 0;
              if (bVar14) {
                iVar9 = *piVar4;
              }
              if (bVar14 && iVar9 == 0) {
                func_0010F1DC((int *)(param_1 + 0x78),
                              (int *)(*(int *)(param_1 + 0x84) + (int)piVar4));
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                local_68 = *(int **)(param_1 + 0x5c);
                local_64 = *(float **)(param_1 + 0x70);
                local_60 = (int)local_64 - local_68[2] >> 4;
                pfVar5 = (float *)(*local_68 + (uint)*(ushort *)(local_64 + 1) * 0xc);
                local_5c = *pfVar5;
                local_58 = (int *)ALBW_PTR_BITS(pfVar5[1]);
                local_54 = (float *)ALBW_PTR_BITS(pfVar5[2]);
                local_50 = *(undefined4 *)(iVar11 + 0x38);
                func_00115C70(&local_80,pfVar13,&local_5c);
                iVar9 = local_68[1];
                pfVar5 = (float *)(iVar9 + (uint)*(ushort *)(local_64 + 2) * 0xc);
                fVar16 = ALBW_AS_F32(uVar17);
                if (((local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <= fVar16) &&
                    (pfVar5 = (float *)(iVar9 + (uint)*(ushort *)((int)local_64 + 10) * 0xc),
                    local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <= fVar16)) &&
                   (pfVar5 = (float *)(iVar9 + (uint)*(ushort *)(local_64 + 3) * 0xc),
                   local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <=
                   *local_64 + fVar16)) {
                  pfVar5 = (float *)(iVar9 + (uint)*(ushort *)((int)local_64 + 6) * 0xc);
                  fVar15 = -(local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2]);
                  if (((-fVar16 <= fVar15) && (fVar15 <= fVar16)) && (fVar15 != -3.4028235e+38)) {
                    puVar6 = *(ushort **)(param_1 + 0x488);
                    uVar1 = *puVar10;
                    *piVar12 = (int)(puVar6 + 1);
                    *puVar6 = uVar1;
                    if (piVar12 <= (int *)*piVar12) {
                      *piVar12 = *(int *)(param_1 + 0x488) + -2;
                      return 0;
                    }
                  }
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
          if (*puVar10 == 0) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      local_58 = (int *)0x0;
      local_54 = (float *)0x0;
      local_50 = 0;
      local_40 = DAT_00431b3c;
      puVar10 = (ushort *)(iVar9 + 2);
      pfVar13 = (float *)(DAT_00431b34 + 8);
      if (*puVar10 != 0) {
        piVar12 = (int *)(param_1 + 0x488);
        do {
          iVar9 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar10 * 0x10;
          *(int *)(param_1 + 0x70) = iVar9;
          if ((*(uint *)(iVar11 + 0x68) & 1 << (*(ushort *)(iVar9 + 0xe) & 0x1f)) != 0) {
            uVar3 = (*(ushort *)(iVar9 + 0xe) & 0xb000) >> 0xc;
            if (*pcVar2 == '\0') {
              if (uVar3 != 8) goto LAB_00431888;
            }
            else if (uVar3 != 9) {
LAB_00431888:
              iVar7 = *(int *)(param_1 + 0x58);
              uVar3 = iVar9 - *(int *)(*(int *)(param_1 + 0x5c) + 8) >> 4;
              if (uVar3 < *(uint *)(iVar7 + 200)) {
                piVar4 = (int *)(*(int *)(iVar7 + 0xcc) + uVar3 * 8);
              }
              else {
                piVar4 = *(int **)(iVar7 + 0xcc);
              }
              iVar9 = piVar4[1];
              bVar14 = iVar9 == 0;
              if (bVar14) {
                iVar9 = *piVar4;
              }
              if (bVar14 && iVar9 == 0) {
                func_0010F1DC((int *)(param_1 + 0x78),
                              (int *)(*(int *)(param_1 + 0x84) + (int)piVar4));
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                local_54 = *(float **)(param_1 + 0x70);
                local_58 = *(int **)(param_1 + 0x5c);
                local_50 = (int)local_54 - local_58[2] >> 4;
                pfVar5 = (float *)(*local_58 + (uint)*(ushort *)(local_54 + 1) * 0xc);
                local_4c = *pfVar5;
                local_48 = pfVar5[1];
                local_44 = pfVar5[2];
                local_40 = *(undefined4 *)(iVar11 + 0x38);
                func_00115C70(&local_80,pfVar13,&local_4c);
                iVar9 = local_58[1];
                pfVar5 = (float *)(iVar9 + (uint)*(ushort *)(local_54 + 2) * 0xc);
                fVar16 = ALBW_AS_F32(uVar17);
                if (((local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <= fVar16) &&
                    (pfVar5 = (float *)(iVar9 + (uint)*(ushort *)((int)local_54 + 10) * 0xc),
                    local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <= fVar16)) &&
                   (pfVar5 = (float *)(iVar9 + (uint)*(ushort *)(local_54 + 3) * 0xc),
                   local_80 * *pfVar5 + local_7c * pfVar5[1] + local_78 * pfVar5[2] <=
                   *local_54 + fVar16)) {
                  pfVar5 = (float *)(iVar9 + (uint)*(ushort *)((int)local_54 + 6) * 0xc);
                  fVar15 = -(local_80 * *pfVar5 + local_7c * pfVar5[1]) + -(local_78 * pfVar5[2]);
                  if (((-fVar16 <= fVar15) && (fVar15 <= fVar16)) && (fVar15 != -3.4028235e+38)) {
                    puVar8 = *(ushort **)(param_1 + 0x488);
                    puVar6 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
                    if (puVar6 != puVar8) {
                      do {
                        if (*puVar10 == *puVar6) goto LAB_00431a8c;
                        puVar6 = puVar6 + 1;
                      } while (puVar6 != puVar8);
                    }
                    uVar1 = *puVar10;
                    *piVar12 = (int)(puVar8 + 1);
                    *puVar8 = uVar1;
LAB_00431a8c:
                    if (piVar12 <= *(int **)(param_1 + 0x488)) {
                      *piVar12 = (int)*(int **)(param_1 + 0x488) + -2;
                      return 0;
                    }
                  }
                }
              }
            }
          }
          puVar10 = puVar10 + 1;
          if (*puVar10 == 0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}

