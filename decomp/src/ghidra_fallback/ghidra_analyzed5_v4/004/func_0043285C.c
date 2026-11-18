#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int DAT_00432c38;
extern float DAT_00432c3c;
extern float DAT_00432c40;
extern float *DAT_00432c44;
extern int *DAT_00432c48;
extern uint *DAT_00432c4c;
extern int *DAT_00432c50;
extern uint *DAT_00432c54;
extern undefined4 DAT_00432c58;
extern undefined4 DAT_00432c5c;

// USA 0043285C <- EU 0043283C (Ghidra, non-matching)
// GLOBAL DAT_00432c38 int
// GLOBAL DAT_00432c3c float
// GLOBAL DAT_00432c40 float
// GLOBAL DAT_00432c44 float *
// GLOBAL DAT_00432c48 int *
// GLOBAL DAT_00432c4c uint *
// GLOBAL DAT_00432c50 int *
// GLOBAL DAT_00432c54 uint *
// GLOBAL DAT_00432c58 undefined4
// GLOBAL DAT_00432c5c undefined4

void func_0043285C(uint *param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  short *psVar6;
  undefined4 *puVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_d8;
  float fVar20;
  undefined8 in_d9;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_8c (*(uint *)(albw_frame + 0x24))
  #define local_88 (*(int *)(albw_frame + 0x28))
  #define local_78 (*(int *)(albw_frame + 0x38))
  #define local_70 (*(int *)(albw_frame + 0x40))
  #define local_64 (*(int *)(albw_frame + 0x4c))
  #define local_60 (*(uint *)(albw_frame + 0x50))
  #define local_5c (*(float * *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define fStack_50 (*(float *)(albw_frame + 0x60))
  iVar2 = DAT_00432c38;
  fVar20 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  uVar13 = *param_1;
  if (uVar13 != 0) {
    fVar19 = DAT_00432c40;
    fVar16 = DAT_00432c3c;
    if (((*(uint *)(DAT_00432c38 + 0x24) & 1) == 0) &&
       (iVar1 = func_00100174((int *)(DAT_00432c38 + 0x24)), pfVar9 = DAT_00432c44, iVar1 != 0)) {
      *DAT_00432c44 = fVar16;
      pfVar9[1] = fVar16;
      pfVar9[2] = fVar16;
      pfVar9[3] = fVar19;
      pfVar9[4] = fVar19;
      pfVar9[5] = fVar19;
    }
    local_b0 = fVar16;
    local_ac = fVar16;
    local_a8 = fVar16;
    local_a4 = fVar19;
    local_a0 = fVar19;
    local_9c = fVar19;
    func_0010E3C4((uint *)&local_b0,(uint *)DAT_00432c44,0x18);
    if (((*(uint *)(iVar2 + 0x20) & 1) == 0) &&
       (iVar1 = func_00100174(DAT_00432c48), puVar5 = DAT_00432c4c, iVar1 != 0)) {
      puVar8 = DAT_00432c4c + 3;
      DAT_00432c4c[1] = 0x100;
      puVar5[2] = (uint)puVar8;
      *puVar5 = 0;
    }
    puVar5 = DAT_00432c4c;
    func_0010E3C4((uint *)DAT_00432c4c[2],DAT_00432c4c + 0x1ec,0x400);
    if (uVar13 * 3 <= puVar5[1]) {
      *puVar5 = uVar13 * 3;
    }
    if (((*(uint *)(iVar2 + 0x1c) & 1) == 0) &&
       (iVar2 = func_00100174(DAT_00432c50), puVar5 = DAT_00432c54, iVar2 != 0)) {
      puVar8 = DAT_00432c54 + 3;
      DAT_00432c54[1] = 0x80;
      puVar5[2] = (uint)puVar8;
      *puVar5 = 0;
    }
    local_8c = 0;
    if (0 < (int)uVar13) {
      local_5c = &local_a4;
      uVar21 = CONCAT44(DAT_00432c5c,DAT_00432c58);
      do {
        if (local_8c < *param_1) {
          local_60 = param_1[2] + local_8c * 0x24;
        }
        else {
          local_60 = param_1[2];
        }
        local_78 = 0;
        local_70 = local_8c * 3;
        local_64 = local_8c * 9;
        do {
          puVar5 = DAT_00432c54;
          piVar3 = (int *)DAT_00432c4c[2];
          if ((uint)(local_70 + local_78) < *DAT_00432c4c) {
            piVar3 = piVar3 + local_70 + local_78;
          }
          if (-1 < *piVar3) {
            local_88 = local_78 * 3;
            pfVar9 = (float *)(local_60 + local_78 * 0xc);
            *DAT_00432c54 = 0;
            uVar4 = local_8c + 1;
            if ((int)uVar4 < (int)uVar13) {
              do {
                if (uVar4 < *param_1) {
                  uVar14 = param_1[2] + uVar4 * 0x24;
                }
                else {
                  uVar14 = param_1[2];
                }
                iVar2 = 0;
                do {
                  puVar8 = DAT_00432c54;
                  uVar12 = uVar4 * 3 + iVar2;
                  piVar3 = (int *)DAT_00432c4c[2];
                  if (uVar12 < *DAT_00432c4c) {
                    piVar3 = piVar3 + uVar12;
                  }
                  if ((-1 < *piVar3) &&
                     (pfVar10 = (float *)(uVar14 + iVar2 * 0xc),
                     (*pfVar9 - *pfVar10) * (*pfVar9 - *pfVar10) +
                     (pfVar9[1] - pfVar10[1]) * (pfVar9[1] - pfVar10[1]) +
                     (pfVar9[2] - pfVar10[2]) * (pfVar9[2] - pfVar10[2]) < fparam_0)) {
                    uVar12 = param_1[5];
                    if (uVar4 < param_1[3]) {
                      uVar12 = uVar12 + uVar4 * 0x24;
                    }
                    pfVar10 = (float *)(uVar12 + iVar2 * 0xc);
                    if (*pfVar10 < local_b0) {
                      local_b0 = *pfVar10;
                    }
                    if (pfVar10[1] < local_ac) {
                      local_ac = pfVar10[1];
                    }
                    if (pfVar10[2] < local_a8) {
                      local_a8 = pfVar10[2];
                    }
                    if (local_a4 <= *pfVar10) {
                      local_a4 = *pfVar10;
                    }
                    if (local_a0 <= pfVar10[1]) {
                      local_a0 = pfVar10[1];
                    }
                    if (local_9c <= pfVar10[2]) {
                      local_9c = pfVar10[2];
                    }
                    if ((int)*DAT_00432c54 < (int)DAT_00432c54[1]) {
                      *(uint *)(DAT_00432c54[2] + *DAT_00432c54 * 4) =
                           uVar4 & 0xffff | iVar2 << 0x10;
                      *puVar8 = *puVar8 + 1;
                    }
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < 3);
                uVar4 = uVar4 + 1;
              } while ((int)uVar4 < (int)uVar13);
              if (*puVar5 != 0) {
                uVar4 = param_1[5];
                if (local_8c < param_1[3]) {
                  uVar4 = uVar4 + local_64 * 4;
                }
                pfVar9 = (float *)(uVar4 + local_78 * 0xc);
                if (*pfVar9 < local_b0) {
                  local_b0 = *pfVar9;
                }
                if (pfVar9[1] < local_ac) {
                  local_ac = pfVar9[1];
                }
                fVar19 = pfVar9[2];
                if (local_a8 <= pfVar9[2]) {
                  fVar19 = local_a8;
                }
                fVar16 = *pfVar9;
                if (*pfVar9 < local_a4) {
                  fVar16 = local_a4;
                }
                fVar17 = pfVar9[1];
                if (pfVar9[1] < local_a0) {
                  fVar17 = local_a0;
                }
                fVar18 = pfVar9[2];
                if (pfVar9[2] < local_9c) {
                  fVar18 = local_9c;
                }
                local_a8 = fVar19;
                local_a4 = fVar16;
                local_a0 = fVar17;
                local_9c = fVar18;
                func_00115C54(&local_58,&local_b0,local_5c);
                fVar19 = SQRT(local_58 * local_58 + local_54 * local_54 + fStack_50 * fStack_50);
                if (ALBW_AS_F32(uVar21) < fVar19) {
                  fVar19 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20)) / fVar19;
                  in_d9 = CONCAT44(local_54 * fVar19,local_58 * fVar19);
                  fVar20 = fStack_50 * fVar19;
                }
                uVar4 = 0;
                uVar14 = (uint)((ulonglong)in_d9 >> 0x20);
                if (0 < (int)*puVar5) {
                  do {
                    puVar8 = DAT_00432c4c;
                    psVar6 = (short *)DAT_00432c54[2];
                    if (uVar4 < *DAT_00432c54) {
                      psVar6 = psVar6 + uVar4 * 2;
                    }
                    puVar11 = param_1 + 3;
                    uVar15 = (uint)*psVar6;
                    uVar4 = uVar4 + 1;
                    uVar12 = uVar15;
                    if (uVar15 < param_1[3]) {
                      puVar11 = (uint *)param_1[5];
                      uVar12 = uVar15 * 9;
                    }
                    if (uVar15 < param_1[3]) {
                      puVar11 = puVar11 + uVar12;
                    }
                    else {
                      puVar11 = (uint *)puVar11[2];
                    }
                    puVar11 = puVar11 + psVar6[1] * 3;
                    puVar11[2] = (uint)ALBW_AS_U32(fVar20);
                    *puVar11 = (uint)in_d9;
                    puVar11[1] = uVar14;
                    uVar12 = (int)psVar6[1] + *psVar6 * 3;
                    if (uVar12 < *puVar8) {
                      puVar7 = (undefined4 *)(puVar8[2] + uVar12 * 4);
                    }
                    else {
                      puVar7 = (undefined4 *)puVar8[2];
                    }
                    *puVar7 = 0xffffffff;
                  } while ((int)uVar4 < (int)*puVar5);
                }
                pfVar9 = DAT_00432c44;
                uVar4 = param_1[5];
                if (local_8c < param_1[3]) {
                  uVar4 = uVar4 + local_64 * 4;
                }
                puVar5 = (uint *)(uVar4 + local_88 * 4);
                puVar5[2] = (uint)ALBW_AS_U32(fVar20);
                *puVar5 = (uint)in_d9;
                puVar5[1] = uVar14;
                func_0010E3C4((uint *)&local_b0,(uint *)pfVar9,0x18);
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < 3);
        local_8c = local_8c + 1;
      } while ((int)local_8c < (int)uVar13);
    }
  }
  return;
}

