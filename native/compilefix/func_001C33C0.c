/* compilefix: USA 001C33C0 (EU 001C33C0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [3]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
extern char s_cf_001c370e[];
extern char s_cf_001c3710[];
#include "compilefix.h"

extern int func_00110848(int param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00151150(int param_1,float *param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065BB78(undefined4 *param_1,undefined1 param_2);
extern int func_00688C34(float *param_1,float fparam_0,float fparam_1);
extern uint DAT_001c36d4;
extern uint DAT_001c36d8;
extern uint DAT_001c36dc;
extern uint DAT_001c36e0;
extern undefined4 DAT_001c36e4;
extern undefined4 DAT_001c36e8;
extern int DAT_001c36ec;
extern int DAT_001c36f0;
extern float DAT_001c36f4;
extern float DAT_001c36f8;
extern int DAT_001c36fc;
extern int DAT_001c3700;
extern int *DAT_001c3704;
extern int DAT_001c3708;
extern undefined DAT_001c370c;
extern int DAT_001c371c;
extern int DAT_001c3ba8;
extern float DAT_001c3bac;
extern float DAT_001c3bb0;
extern int DAT_001c3bb4;
extern uint DAT_001c3bb8;
extern uint DAT_001c3bbc;
extern undefined4 DAT_001c3bc0;
extern float DAT_001c3bc4;
extern undefined4 DAT_001c3bc8;
extern undefined4 DAT_001c3bcc;
extern int DAT_001c3bd0;
extern float DAT_001c3c28;
extern undefined4 _DAT_001c370c;

// USA 001C33C0 <- EU 001C33C0 (Ghidra, non-matching)
// GLOBAL DAT_001c36d4 uint
// GLOBAL DAT_001c36d8 uint
// GLOBAL DAT_001c36dc uint
// GLOBAL DAT_001c36e0 uint
// GLOBAL DAT_001c36e4 undefined4
// GLOBAL DAT_001c36e8 undefined4
// GLOBAL DAT_001c36ec int
// GLOBAL DAT_001c36f0 int
// GLOBAL DAT_001c36f4 float
// GLOBAL DAT_001c36f8 float
// GLOBAL DAT_001c36fc int
// GLOBAL DAT_001c3700 int
// GLOBAL DAT_001c3704 int *
// GLOBAL DAT_001c3708 int
// GLOBAL DAT_001c370c undefined
// GLOBAL DAT_001c371c int
// GLOBAL DAT_001c3ba8 int
// GLOBAL DAT_001c3bac float
// GLOBAL DAT_001c3bb0 float
// GLOBAL DAT_001c3bb4 int
// GLOBAL DAT_001c3bb8 uint
// GLOBAL DAT_001c3bbc uint
// GLOBAL DAT_001c3bc0 undefined4
// GLOBAL DAT_001c3bc4 float
// GLOBAL DAT_001c3bc8 undefined4
// GLOBAL DAT_001c3bcc undefined4
// GLOBAL DAT_001c3bd0 int
// GLOBAL DAT_001c3c28 float
// GLOBAL s_cf_001c370e string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001C33C0(int param_1)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar18;
  longlong lVar17;
  undefined4 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 uVar23;
  longlong lVar22;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_130 (*(float *)(albw_frame + 0x0))
  #define local_12c (*(float *)(albw_frame + 0x4))
  #define local_128 (*(float *)(albw_frame + 0x8))
  #define local_124 (*(float *)(albw_frame + 0xc))
  #define local_120 (*(float *)(albw_frame + 0x10))
  #define fStack_11c (*(float *)(albw_frame + 0x14))
  #define local_118 (*(float *)(albw_frame + 0x18))
  #define local_114 (*(float *)(albw_frame + 0x1c))
  #define local_110 (*(float *)(albw_frame + 0x20))
  #define local_10c (*(float *)(albw_frame + 0x24))
  #define fStack_108 (*(float *)(albw_frame + 0x28))
  #define local_104 (*(float *)(albw_frame + 0x2c))
  #define local_f8 (*(int *)(albw_frame + 0x38))
  #define iStack_f4 (*(int *)(albw_frame + 0x3c))
  #define local_e8 (*(float *)(albw_frame + 0x48))
  #define uStack_e4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_dc (*(undefined4 *)(albw_frame + 0x54))
  #define local_bc (*(undefined4 *)(albw_frame + 0x74))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_ac (*(undefined4 *)(albw_frame + 0x84))
  #define local_a8 (*(float *)(albw_frame + 0x88))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_9c (*(undefined4 *)(albw_frame + 0x94))
  #define local_98 (*(undefined4 *)(albw_frame + 0x98))
  #define fStack_94 (*(float *)(albw_frame + 0x9c))
  #define local_90 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_8c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_88 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xac))
  #define fStack_80 (*(float *)(albw_frame + 0xb0))
  #define local_7c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_74 (*(int *)(albw_frame + 0xbc))
  #define local_70 (*(int * *)(albw_frame + 0xc0))
  #define local_6c (*(int * *)(albw_frame + 0xc4))
  #define local_68 (*(float * *)(albw_frame + 0xc8))
  #define local_64 (*(int * *)(albw_frame + 0xcc))
  #define local_60 (*(int * *)(albw_frame + 0xd0))
  #define local_5c (*(int * *)(albw_frame + 0xd4))
  #define local_58 (*(int * *)(albw_frame + 0xd8))
  #define local_54 (*(int * *)(albw_frame + 0xdc))
  if (*(short *)(param_1 + 0x7ec) != 0) {
    *(short *)(param_1 + 0x7ec) = *(short *)(param_1 + 0x7ec) + -1;
    return 0;
  }
  local_74 = param_1 + 4;
  local_70 = (int *)(param_1 + 0x818);
  local_6c = (int *)(param_1 + 0x85c);
  local_54 = (int *)(param_1 + 0x808);
  local_60 = (int *)(param_1 + 0x804);
  local_68 = (float *)(param_1 + 0x800);
  local_64 = (int *)(param_1 + 0x854);
  iVar7 = 0;
  local_5c = (int *)(param_1 + 0x810);
  uVar20 = (ulonglong)DAT_001c36d4;
  lVar17 = (ulonglong)DAT_001c36d8 << 0x20;
  local_58 = (int *)(param_1 + 0x828);
  lVar21 = (ulonglong)DAT_001c36dc << 0x20;
  lVar22 = (ulonglong)DAT_001c36e0 << 0x20;
  uVar16 = CONCAT44(DAT_001c36e4,DAT_001c36e8);
  do {
    fVar13 = DAT_001c3bb0;
    uVar23 = (undefined4)((ulonglong)lVar22 >> 0x20);
    uVar18 = (undefined4)((ulonglong)lVar17 >> 0x20);
    uVar19 = (undefined4)uVar20;
    fVar12 = ALBW_AS_F32(((ulonglong)lVar21 >> 0x20));
    if (*(char *)((int)local_68 + 0x4e) == '\0') {
      if (*(int *)(param_1 + 0x804) != 0) {
        iVar6 = *(int *)(param_1 + 0x808);
        fVar14 = (float)VectorSignedToFloat(-iVar6,(byte)(in_fpscr >> 0x15) & 3);
        iVar10 = *(int *)(param_1 + 0x804) + (int)(fVar14 * DAT_001c3bac);
        *local_60 = iVar10;
        fVar14 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
        fVar14 = fVar14 * fVar13;
        iVar10 = (int)fVar14;
        fVar13 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
        uVar4 = in_fpscr & 0xfffffff;
        in_fpscr = uVar4 | (uint)(fVar13 == fVar14) << 0x1e | (uint)(fVar14 <= fVar13) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        bVar3 = (bool)(bVar1 >> 6);
        if (!bVar3) {
          in_fpscr = uVar4 | (uint)(ALBW_AS_F32(uVar16) == fVar14) << 0x1e |
                     (uint)(fVar14 <= ALBW_AS_F32(uVar16)) << 0x1d;
          bVar1 = (byte)(in_fpscr >> 0x18);
          bVar3 = (bool)(bVar1 >> 6);
        }
        if ((bool)(bVar1 >> 5 & 1) && !bVar3) {
          iVar10 = iVar10 + -1;
        }
        *(int *)(param_1 + 0x804) = iVar10;
        *local_54 = iVar6 + iVar10;
      }
      uVar4 = DAT_001c3bb8;
      iVar10 = param_1 + iVar7 * 4;
      iVar6 = *(int *)(iVar10 + 0x814);
      func_0051D2F4((int *)(iVar10 + 0x814),*(int *)(param_1 + 0x808),DAT_001c3bb8,DAT_001c3bb4,
                    fVar12);
      piVar8 = (int *)(iVar10 + 0x80c);
      *(int *)(iVar10 + 0x80c) = *(int *)(iVar10 + 0x814) - iVar6;
      uVar5 = func_0058E2B8(piVar8);
      if ((uVar5 <= uVar4) && (uVar4 = func_0058E2B8(local_60), uVar4 <= DAT_001c3bbc)) {
        *(undefined1 *)(param_1 + 0x84e) = 1;
        iVar10 = func_0058E2B8(piVar8);
        *piVar8 = iVar10;
      }
    }
    else {
      iVar10 = param_1 + iVar7 * 4;
      piVar8 = (int *)(iVar10 + 0x80c);
      if (*(int *)(iVar10 + 0x82c) + 0x3fffffffU < 0x7fffffff) {
        bVar3 = func_0051D27C(piVar8,DAT_001c36f0,DAT_001c36ec);
        uVar4 = (uint)bVar3;
        iVar6 = *piVar8 + *(int *)(iVar10 + 0x814);
        if (0x40000000 < iVar6) {
          uVar4 = 0x40000000;
        }
        *(int *)(iVar10 + 0x814) = iVar6;
        if (0x40000000 < iVar6) {
LAB_001c34e0:
          piVar8 = local_6c;
          *(uint *)(iVar10 + 0x814) = uVar4;
          if (*(char *)((int)local_68 + 0x4f) == '\0') {
            *(undefined1 *)(param_1 + 0x84f) = 1;
            if (*(int *)(param_1 + 0x344) == 0) {
              *local_6c = 0;
              local_6c[1] = 0;
            }
            else {
              iVar6 = *local_6c;
              if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == local_6c[1])) {
                func_00110848(iVar6);
              }
              func_004A1B9C(&local_f8,*(int *)(param_1 + 0x344),(uint *)(s_cf_001c3710))
              ;
              *piVar8 = local_f8;
              piVar8[1] = iStack_f4;
            }
            iVar6 = param_1 + iVar7 * 0xc;
            local_ac = *(undefined4 *)(iVar6 + 0x83c);
            local_b4 = *(undefined4 *)(iVar6 + 0x834);
            local_b0 = *(undefined4 *)(iVar6 + 0x838);
            func_001119F4((undefined4 *)(&local_e8),(undefined4 *)(*(int *)(iVar10 + 0x7b0) + 0x80));
            local_a8 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
            local_a4 = (undefined4)uVar16;
            local_a0 = local_a4;
            local_9c = local_a4;
            local_98 = local_a4;
            fStack_94 = local_a8;
            local_90 = local_a4;
            local_8c = uVar23;
            local_88 = local_a4;
            local_84 = local_a4;
            fStack_80 = local_a8;
            local_7c = local_a4;
            func_001157FC(&local_e8,&local_e8,&local_a8);
            local_b4 = local_dc;
            local_ac = local_bc;
            local_b0 = *(undefined4 *)(param_1 + 0x3d4);
            iVar10 = *local_6c;
            if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == local_6c[1])) {
              func_004A2F38(iVar10,&local_b4);
            }
          }
        }
      }
      else {
        bVar3 = func_0051D27C(piVar8,DAT_001c36f0,DAT_001c36ec);
        uVar4 = (uint)bVar3;
        iVar6 = *(int *)(iVar10 + 0x814) - *piVar8;
        if (iVar6 < -0x40000000) {
          uVar4 = 0xc0000000;
        }
        *(int *)(iVar10 + 0x814) = iVar6;
        if (iVar6 < -0x40000000) goto LAB_001c34e0;
      }
    }
    lVar21 = CONCAT44(fVar12,DAT_001c3bc0);
    uVar20 = CONCAT44(DAT_001c3bc4,uVar19);
    lVar17 = CONCAT44(uVar18,DAT_001c3bc8);
    lVar22 = CONCAT44(uVar23,DAT_001c3bcc);
    while( true ) {
      iVar6 = param_1 + iVar7 * 4;
      iVar10 = *(int *)(iVar6 + 0x7b0);
      pfVar9 = (float *)(iVar10 + 0x80);
      *(int *)(iVar10 + 0x134) = (int)uVar16;
      *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
      func_004D8AEC(pfVar9,*(uint *)(iVar6 + 0x81c),(float *)(param_1 + iVar7 * 0xc + 0x834));
      pfVar11 = (float *)(DAT_001c3bd0 + iVar7 * 4);
      local_114 = *pfVar11;
      local_130 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      local_12c = ALBW_AS_F32(uVar16);
      local_128 = local_12c;
      local_124 = local_12c;
      local_120 = local_12c;
      fStack_11c = local_130;
      local_118 = local_12c;
      local_110 = local_12c;
      local_10c = local_12c;
      fStack_108 = local_130;
      local_104 = local_12c;
      func_001157FC(pfVar9,pfVar9,&local_130);
      func_00491E80(&local_130,*(uint *)(iVar6 + 0x814),0,0);
      func_001157FC(pfVar9,pfVar9,&local_130);
      func_00491E80(&local_130,0,0,*(uint *)(iVar6 + 0x824));
      func_001157FC(pfVar9,pfVar9,&local_130);
      local_130 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      local_12c = ALBW_AS_F32(uVar16);
      local_114 = -*pfVar11;
      local_128 = local_12c;
      local_124 = local_12c;
      local_120 = local_12c;
      fStack_11c = local_130;
      local_118 = local_12c;
      local_110 = local_12c;
      local_10c = local_12c;
      fStack_108 = local_130;
      local_104 = local_12c;
      func_001157FC(pfVar9,pfVar9,&local_130);
      *(undefined4 *)(iVar10 + 0x158) = *(undefined4 *)(param_1 + 0x7f0);
      func_004CEAF0(iVar10);
      iVar10 = DAT_001c36fc;
      fVar13 = DAT_001c36f8;
      iVar7 = iVar7 + 1;
      if (1 < iVar7) {
        local_12c = *(float *)(param_1 + 0x7f0) * DAT_001c3bc4 * *(float *)(param_1 + 0x7f0);
        local_128 = local_12c;
        local_124 = local_12c;
        func_00151150(*(int *)(param_1 + 0x7c0),&local_12c);
        fVar13 = ALBW_AS_F32(uVar16);
        func_00688C34((float *)(param_1 + 0x7f4),DAT_001c3c28,ALBW_AS_F32(uVar20));
        iVar7 = func_00688C34((float *)(param_1 + 0x7f0),fVar13,*(float *)(param_1 + 0x7f4));
        if (iVar7 == 0) {
          return 0;
        }
        return func_0065BB78((undefined4 *)(param_1 + 0x788),4);
      }
      if (iVar7 != 1) break;
      fVar12 = *(float *)(param_1 + 0x7fc) + DAT_001c36f4;
      *(float *)(param_1 + 0x7fc) = fVar12;
      if ((uint)ALBW_AS_U32(fVar13) <= (uint)ALBW_AS_U32(fVar12)) {
        fVar12 = ALBW_AS_F32(lVar21);
      }
      *(float *)(param_1 + 0x7fc) = fVar12;
      *(float *)(param_1 + 0x844) = *(float *)(param_1 + 0x844) + fVar12;
      *local_58 = *local_58 + 0xb60b6;
      func_0051D27C(local_5c,0,iVar10);
      piVar8 = local_5c;
      fVar13 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar13 <= *(float *)(param_1 + 0x844)) << 0x1d;
      if (!SUB41(uVar4 >> 0x1d,0)) {
        *(float *)(param_1 + 0x844) = fVar13;
        if (*(int *)(param_1 + 0x7f8) == DAT_001c3700) {
          iVar6 = func_00588BE4(param_1);
          piVar2 = local_64;
          iVar10 = DAT_001c3708;
          if (iVar6 != *DAT_001c3704) {
            iVar10 = _DAT_001c370c;
          }
          *piVar8 = iVar10;
          if (*(int *)(param_1 + 0x344) == 0) {
            *local_64 = 0;
            local_64[1] = 0;
          }
          else {
            iVar10 = *local_64;
            if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == local_64[1])) {
              func_00110848(iVar10);
            }
            func_004A1B9C(&local_f8,*(int *)(param_1 + 0x344),(uint *)(s_cf_001c3710));
            *piVar2 = local_f8;
            piVar2[1] = iStack_f4;
          }
          local_e0 = *(undefined4 *)(param_1 + 0x848);
          uStack_e4 = *(undefined4 *)(param_1 + 0x3d4);
          local_e8 = *(float *)(param_1 + 0x840);
          iVar10 = *local_64;
          if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == local_64[1])) {
            func_004A2F38(iVar10,(undefined4 *)(&local_e8));
          }
        }
        *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7f8);
        *(float *)(param_1 + 0x7f8) = *(float *)(param_1 + 0x7f8) * ALBW_AS_F32((uVar20 >> 0x20));
      }
      fVar13 = ALBW_AS_F32(uVar16);
      if (*(int *)(local_74 + 0x80c) != 0) {
        fVar13 = ALBW_AS_F32(uVar20);
      }
      pfVar9 = (float *)(param_1 + 0x800);
      fVar15 = *pfVar9;
      fVar14 = (fVar13 - fVar15) * ALBW_AS_F32(((ulonglong)lVar21 >> 0x20));
      uVar4 = uVar4 & 0xfffffff;
      fVar12 = ALBW_AS_F32(lVar17);
      if (fVar14 <= ALBW_AS_F32(uVar16)) {
        fVar14 = -fVar14;
      }
      if ((fVar12 <= fVar14) && (fVar12 = fVar14, DAT_001c371c < (int)ALBW_AS_U32(fVar14))) {
        fVar12 = ALBW_AS_F32(lVar22);
      }
      uVar5 = uVar4 | (uint)(fVar15 < fVar13) << 0x1f | (uint)(fVar15 == fVar13) << 0x1e |
              (uint)(fVar13 <= fVar15) << 0x1d;
      in_fpscr = uVar5 | (uint)(NAN(fVar15) || NAN(fVar13)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar1 >> 5 & 1)) {
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar12 = fVar15 - fVar12;
          in_fpscr = uVar4 | (uint)(fVar12 == fVar13) << 0x1e | (uint)(fVar13 <= fVar12) << 0x1d;
          bVar1 = (byte)(in_fpscr >> 0x18);
          if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
             (uVar4 = uVar4 | (uint)(fVar12 < fVar15) << 0x1f | (uint)(fVar12 == fVar15) << 0x1e,
             in_fpscr = uVar4 | (uint)(NAN(fVar12) || NAN(fVar15)) << 0x1c,
             bVar1 = (byte)(uVar4 >> 0x18),
             !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
          goto LAB_001c3744;
          goto LAB_001c374c;
        }
      }
      else {
        fVar12 = fVar15 + fVar12;
        in_fpscr = uVar4 | (uint)(fVar13 == fVar12) << 0x1e | (uint)(fVar12 <= fVar13) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
           (uVar4 = uVar4 | (uint)(fVar15 < fVar12) << 0x1f | (uint)(fVar15 == fVar12) << 0x1e,
           in_fpscr = uVar4 | (uint)(NAN(fVar15) || NAN(fVar12)) << 0x1c,
           bVar1 = (byte)(uVar4 >> 0x18),
           !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_001c3744:
          *pfVar9 = fVar13;
        }
        else {
LAB_001c374c:
          *pfVar9 = fVar12;
        }
      }
      uVar4 = *(uint *)(local_74 + 0x82c);
      fVar13 = *local_68;
      pfVar9 = (float *)(DAT_001c3ba8 + (uVar4 >> 0x18) * 0x10);
      fVar12 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
      *(float *)(param_1 + 0x840) =
           *(float *)(param_1 + 0x840) + (*pfVar9 + pfVar9[1] * fVar12 * fVar15) * fVar13;
      *(float *)(param_1 + 0x848) =
           *(float *)(param_1 + 0x848) + (pfVar9[2] + pfVar9[3] * fVar14 * fVar15) * fVar13;
      iVar10 = *(int *)(local_74 + 0x80c);
      if (0x7ffffffe < uVar4 + 0x3fffffff) {
        iVar10 = -iVar10;
      }
      *local_70 = *local_70 + iVar10;
    }
  } while( true );
}

