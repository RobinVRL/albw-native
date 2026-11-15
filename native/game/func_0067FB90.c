/* USA 0067FB90 (EU 0067FB68): nw::font TextWriter / WideTextWriter CalcLineRectImpl-style
 * loop over a CharStrmReader {cursor, read pmf {ptr, adj}} (built by 0056F89C at local_c8).
 * Native fix of the generated Ghidra text: both pointer-to-member calls of the reader's read
 * function lost their object argument (EU 0067FC5C `add r0, r0, r2, asr #1`; this = reader +
 * adj/2), so f_004204D8 read through a garbage cursor. Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0056F89C(undefined4 *param_1,int *param_2,undefined4 param_3);
extern int DAT_0067ff0c;
extern float DAT_0067ff10;

// USA 0067FB90 <- EU 0067FB68 (Ghidra, non-matching)
// GLOBAL DAT_0067ff0c int
// GLOBAL DAT_0067ff10 float

undefined4 func_0067FB90(byte *param_1,float *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_128 (*(undefined4 *)(albw_frame + 0x8))
  #define abStack_118 ((byte *)(albw_frame + 0x18))
  #define local_108 (*(float *)(albw_frame + 0x28))
  #define local_c8 (*(uint *)(albw_frame + 0x68))
  #define local_c4 (*(code * *)(albw_frame + 0x6c))
  #define local_c0 (*(code * *)(albw_frame + 0x70))
  #define local_b8 (*(byte * *)(albw_frame + 0x78))
  #define uStack_b4 (*(uint *)(albw_frame + 0x7c))
  #define uStack_b0 (*(uint *)(albw_frame + 0x80))
  #define fStack_ac (*(float *)(albw_frame + 0x84))
  #define fStack_a8 (*(float *)(albw_frame + 0x88))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x90))
  #define uStack_9c (*(uint *)(albw_frame + 0x94))
  #define local_98 (*(uint *)(albw_frame + 0x98))
  #define local_94 (*(byte * *)(albw_frame + 0x9c))
  #define local_90 (*(uint *)(albw_frame + 0xa0))
  #define uStack_8c (*(uint *)(albw_frame + 0xa4))
  #define local_88 (*(float *)(albw_frame + 0xa8))
  #define local_84 (*(float *)(albw_frame + 0xac))
  #define local_80 (*(undefined4 *)(albw_frame + 0xb0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_78 (*(uint *)(albw_frame + 0xb8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_70 (*(float *)(albw_frame + 0xc0))
  #define local_6c (*(float *)(albw_frame + 0xc4))
  #define local_68 (*(float *)(albw_frame + 0xc8))
  #define local_64 (*(float *)(albw_frame + 0xcc))
  #define local_60 (*(float *)(albw_frame + 0xd0))
  #define local_5c (*(float *)(albw_frame + 0xd4))
  #define local_58 (*(float *)(albw_frame + 0xd8))
  #define local_54 (*(float *)(albw_frame + 0xdc))
  #define pbStack_34 (*(byte * *)(albw_frame + 0xfc))
  #define pfStack_30 (*(float * *)(albw_frame + 0x100))
  #define puStack_2c (*(uint * *)(albw_frame + 0x104))
  #define local_28 (*(int *)(albw_frame + 0x108))
  uVar8 = *param_3;
  uVar18 = (ulonglong)(uint)ALBW_AS_U32(DAT_0067ff10);
  local_80 = *(undefined4 *)(param_1 + 8);
  uStack_7c = *(undefined4 *)(param_1 + 0xc);
  uVar10 = uVar8 + param_4 * 2;
  uVar9 = 0;
  local_88 = DAT_0067ff10;
  local_84 = DAT_0067ff10;
  local_74 = local_74 & 0xffff0000;
  uVar11 = 0;
  local_78 = 0;
  local_128 = 0;
  bVar1 = *(int *)(param_1 + 0x30) < DAT_0067ff0c;
  fVar15 = DAT_0067ff10;
  local_94 = param_1;
  local_90 = uVar8;
  uStack_8c = uVar10;
  pbStack_34 = param_1;
  pfStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  func_0056F89C(&local_c8,*(int **)(param_1 + 0x24),0);
  uVar5 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))(*(int **)(param_1 + 0x24));
  }
  fVar14 = *(float *)(param_1 + 0x38);
  fVar16 = *(float *)(param_1 + 0xc);
  fVar17 = ALBW_AS_F32(uVar18);
  uVar19 = CONCAT44(fVar15,fVar17);
  fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  *param_2 = fVar17;
  param_2[2] = fVar17;
  fVar14 = (fVar14 + fVar15 * fVar16) - fVar14;
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar17) << 0x1f | (uint)(fVar14 == fVar17) << 0x1e
          | (uint)(fVar17 <= fVar14) << 0x1d;
  uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar17)) << 0x1c;
  bVar4 = (byte)(uVar3 >> 0x18);
  fVar15 = fVar14;
  if ((bool)(bVar4 >> 5 & 1)) {
    fVar15 = fVar17;
  }
  if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) {
    fVar14 = fVar17;
  }
  param_2[1] = fVar15;
  param_2[3] = fVar14;
  local_c8 = uVar8;
  bVar12 = ((uint)local_c0 & 1) == 0;
  pcVar7 = local_c0;
  if (bVar12) {
    pcVar7 = local_c4;
  }
  if (!bVar12) {
    pcVar7 = *(code **)(local_c4 + *(int *)((int)&local_c8 + ((int)local_c0 >> 1)));
  }
  uVar8 = (*pcVar7)((int)&local_c8 + ((int)local_c0 >> 1));  /* pmf call: this = reader + adj/2 */
joined_r0x0067fc84:
  if (uVar10 < local_c8) {
LAB_0067ff90:
    *param_3 = local_c8;
    return local_128;
  }
  fVar15 = ALBW_AS_F32(uVar18);
  if (uVar8 < 0x20) {
    local_5c = ALBW_AS_F32(uVar19);
    local_78 = uVar9 ^ 1;
    *(float *)(param_1 + 0x10) = fVar15;
    local_90 = local_c8;
    local_60 = fVar15;
    local_58 = local_5c;
    local_54 = local_5c;
    if ((bVar1 && uVar8 != 10) && uVar11 != 0) {
      local_b8 = local_94;
      uStack_b4 = local_c8;
      uStack_b0 = uStack_8c;
      fStack_ac = local_88;
      fStack_a8 = local_84;
      uStack_a4 = local_80;
      uStack_a0 = uStack_7c;
      uStack_9c = local_78;
      local_98 = local_74;
      func_00110D44((undefined4 *)abStack_118,param_1,0x48);
      local_70 = ALBW_AS_F32(uVar19);
      local_b8 = abStack_118;
      local_6c = local_70;
      local_68 = local_70;
      local_64 = local_70;
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                (*(int **)(param_1 + 0x44),&local_70,uVar8,&local_b8);
      fVar15 = local_68 - local_70;
      fVar14 = ALBW_AS_F32(uVar19);
      uVar3 = uVar13 & 0xfffffff;
      uVar2 = uVar3 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
      uVar13 = uVar2 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_0067fd88;
      fVar15 = *(float *)(param_1 + 0x30);
      fVar14 = local_108 - local_88;
      uVar3 = uVar3 | (uint)(fVar14 < fVar15) << 0x1f | (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar3 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_0067fd88;
      local_128 = 1;
      uVar8 = 10;
      local_74 = local_74 & 0xffff0000;
      local_c8 = uVar11;
      goto joined_r0x0067fc84;
    }
LAB_0067fd88:
    iVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                      (*(int **)(param_1 + 0x44),&local_60,uVar8,&local_94);
    local_c8 = local_90;
    fVar15 = *param_2;
    if (local_60 < *param_2) {
      fVar15 = local_60;
    }
    *param_2 = fVar15;
    fVar15 = param_2[1];
    if (local_5c < param_2[1]) {
      fVar15 = local_5c;
    }
    param_2[1] = fVar15;
    fVar15 = local_58;
    if (local_58 <= param_2[2]) {
      fVar15 = param_2[2];
    }
    param_2[2] = fVar15;
    uVar13 = uVar13 & 0xfffffff | (uint)(local_54 <= param_2[3]) << 0x1d;
    fVar14 = local_54;
    if (SUB41(uVar13 >> 0x1d,0)) {
      fVar14 = param_2[3];
    }
    param_2[3] = fVar14;
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x10);
    if (iVar6 == 4) {
      *param_3 = *param_3 + local_28 * 2;
      return 0;
    }
    if (iVar6 == 1) {
      uVar9 = 0;
    }
    else {
      if (iVar6 == 2) {
        uVar9 = 1;
        goto LAB_0067ff48;
      }
      if (iVar6 == 3) goto LAB_0067ff90;
    }
  }
  else {
    if (uVar9 != 0) {
      fVar14 = *(float *)(param_1 + 0x34);
    }
    fVar16 = fVar15;
    if (uVar9 != 0) {
      fVar16 = fVar14 + fVar15;
    }
    if (param_1[0x2d] == 0) {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(*(int **)(param_1 + 0x24),uVar8);
      fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x15) & 3);
      fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x1c) + fVar16;
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                      (*(int **)(param_1 + 0x24),local_74 & 0xffff,uVar8);
    fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x15) & 3);
    fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    uVar18 = CONCAT44(fVar16,fVar15);
    if (bVar1 && uVar11 != 0) {
      fVar15 = *(float *)(param_1 + 0x30);
      fVar14 = fVar16 - ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
      uVar3 = uVar13 & 0xfffffff | (uint)(fVar14 < fVar15) << 0x1f |
              (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar3 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar13 >> 0x1c) & 1)) {
        local_128 = 1;
        uVar8 = 10;
        local_74 = (uint)(*(undefined2 *)((char *)&local_74 + 2)) << 0x10;
        local_c8 = uVar11;
        goto joined_r0x0067fc84;
      }
    }
    uVar18 = (ulonglong)(uint)ALBW_AS_U32(fVar16);
    uVar9 = 1;
    fVar15 = *param_2;
    if (fVar16 < *param_2) {
      fVar15 = fVar16;
    }
    uVar13 = uVar13 & 0xfffffff | (uint)(fVar16 <= param_2[2]) << 0x1d;
    *param_2 = fVar15;
    fVar14 = param_2[2];
    if (!SUB41(uVar13 >> 0x1d,0)) {
      fVar14 = fVar16;
    }
    param_2[2] = fVar14;
    local_74 = CONCAT22((*(undefined2 *)((char *)&local_74 + 2)),(short)uVar8);
  }
LAB_0067ff48:
  if (bVar1) {
    uVar11 = local_c8;
  }
  pcVar7 = local_c4;
  if (((uint)local_c0 & 1) != 0) {
    pcVar7 = *(code **)(local_c4 + *(int *)((int)&local_c8 + ((int)local_c0 >> 1)));
  }
  uVar8 = (*pcVar7)((int)&local_c8 + ((int)local_c0 >> 1));  /* pmf call: this = reader + adj/2 */
  goto joined_r0x0067fc84;
}

