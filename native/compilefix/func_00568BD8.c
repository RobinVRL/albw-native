/* compilefix: USA 00568BD8 (EU 00568BB0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: statement requires expression of integer type ('float' invalid)
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - switch on a float-typed copy of a byte with denormal case labels (1.4013e-45 = bits 1 ...) -> integer switch on the bits, cases 0..4 (EU 00568C5C: ldrb; cmp #5; ldrlo pc, table) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003FF2A8(float *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
extern undefined4 DAT_00568f98;
extern undefined4 DAT_00568f9c;
extern float DAT_00568fa0;
extern float DAT_00568fa4;
extern uint *DAT_00568fa8;
extern float *DAT_00568fac;

// USA 00568BD8 <- EU 00568BB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float
// GLOBAL DAT_00568f98 undefined4
// GLOBAL DAT_00568f9c undefined4
// GLOBAL DAT_00568fa0 float
// GLOBAL DAT_00568fa4 float
// GLOBAL DAT_00568fa8 uint *
// GLOBAL DAT_00568fac float *

void func_00568BD8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,float param_5)

{
  _Alignas(8) unsigned char albw_frame[0x80]; /* entry_sp - 0x70 .. entry_sp + 0x10 */
#define stack0xffffff90 (*(undefined4 *)(albw_frame + 0x0))
#define stack0xffffff94 (*(undefined4 *)(albw_frame + 0x4))
  __builtin_memcpy(albw_frame + 0x70, &param_5, 4);
#define param_5 (*(float *)(albw_frame + 0x70))
  float *pfVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  uint in_fpscr;
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
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float in_stack_ffffff90;
  float in_stack_ffffff94;
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c ((float *)(albw_frame + 0x14))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define iStack_28 (*(int *)(albw_frame + 0x48))
  local_68[0] = (uint)(*(int *)(param_4 + 0x78) << 0x1a) >> 0x1e;
  local_68[1] = 3;
  puVar6 = local_68;
  if (3 < local_68[0]) {
    puVar6 = local_68 + 1;
  }
  uVar15 = *puVar6;
  bVar2 = *(byte *)(param_4 + 0x9e) & 4;
  if ((*(byte *)(param_4 + 0x9e) & 4) != 0) {
    bVar2 = 1;
  }
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (bVar2 == 1) {
    iVar12 = 0;
    uVar11 = 0;
    if (uVar15 != 0) {
      do {
        bVar2 = *(byte *)(param_4 + uVar11 + 0x67);
        uVar13 = (uint)*(byte *)(((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) +
                                 ((uint)(*(int *)(param_4 + 0x74) << 0x1c) >> 0x1e) * 0x14 +
                                 *(int *)(param_4 + 0x7c) + uVar11 * 8 + 1);
        if (uVar13 == 3 || uVar13 == 4) {
          if ((~(bVar2 >> 7) & 1) != 0) {
            func_003FF2A8((float *)(param_4 + (uint)bVar2 * 0x10 + 4),local_30,param_4,uVar11,uVar13
                          ,iVar12);
          }
          iVar12 = iVar12 + 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar15);
    }
  }
  else {
    if (uVar15 == 0) {
      *(undefined1 *)(param_4 + 100) = 0;
      *(undefined1 *)(param_4 + 0x65) = 0;
      *(undefined1 *)(param_4 + 0x66) = 0;
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
      fVar16 = 0.0;
      uVar11 = 0;
      local_5c[1] = 0.0;
      uVar31 = CONCAT44(DAT_00568f98,DAT_00568f9c);
      fVar29 = DAT_00568fa0;
      fVar30 = DAT_00568fa4;
      do {
        fVar7 = ALBW_AS_F32((uint)*(byte *)(((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) +
                                       ((uint)(*(int *)(param_4 + 0x74) << 0x1c) >> 0x1e) * 0x14 +
                                       *(int *)(param_4 + 0x7c) + uVar11 * 8 + 1));
        switch(ALBW_AS_U32(fVar7)) /* the byte read as float bits: an integer switch */ {
        case 0:
        case 1:
        case 2:
          iVar9 = param_4 + iVar12 * 0x10;
          pfVar10 = (float *)(iVar9 + 4);
          *(undefined1 *)(param_4 + uVar11 + 0x67) = 0x80;
          if (param_5 == 0.0) {
            puVar4 = (undefined8 *)
                     (*(int *)(param_4 + 0x7c) + ((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19)
                     + uVar11 * 0x14);
            fVar17 = *(float *)((int)puVar4 + 0xc);
            fVar7 = *(float *)(puVar4 + 2);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(puVar4 + 1) == fVar29) << 0x1e;
            uVar28 = *puVar4;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              func_003E183C((float *)&stack0xffffff94,(float *)&stack0xffffff90,
                            *(float *)(puVar4 + 1) * fVar30);
              fVar18 = ALBW_AS_F32(uVar31);
              *(float *)(iVar9 + 0xc) = fVar29;
              *(float *)(iVar9 + 0x10) =
                   ALBW_AS_F32(uVar28) + fVar18 +
                   (in_stack_ffffff94 * fVar7 - in_stack_ffffff90 * fVar17) * fVar18;
              *pfVar10 = in_stack_ffffff90 * fVar17;
              *(float *)(iVar9 + 8) = -(in_stack_ffffff94 * fVar7);
              *(float *)(iVar9 + 0x1c) = fVar29;
              *(float *)(iVar9 + 0x20) =
                   (ALBW_AS_F32(((ulonglong)uVar28 >> 0x20)) + fVar18) -
                   (in_stack_ffffff94 * fVar17 + in_stack_ffffff90 * fVar7) * fVar18;
              *(float *)(iVar9 + 0x14) = in_stack_ffffff94 * fVar17;
              *(float *)(iVar9 + 0x18) = in_stack_ffffff90 * fVar7;
              goto LAB_00569080;
            }
            fVar18 = ALBW_AS_F32(uVar31);
            *pfVar10 = fVar17;
            *(float *)(iVar9 + 8) = fVar7;
            *(float *)(iVar9 + 0xc) = (ALBW_AS_F32(uVar28) - fVar17 * fVar18) + fVar18;
            *(float *)(iVar9 + 0x10) =
                 (ALBW_AS_F32(((ulonglong)uVar28 >> 0x20)) - fVar7 * fVar18) + fVar18;
LAB_00569004:
            uVar5 = 0x10 >> ((uVar11 & 0x7f) << 1);
            iVar12 = iVar12 + 1;
          }
          else {
            in_stack_ffffff90 = fVar7;
            in_stack_ffffff94 = param_5;
            if (((*DAT_00568fa8 & 1) == 0) &&
               (iVar3 = func_00100174((int *)DAT_00568fa8), pfVar14 = DAT_00568fac,
               in_stack_ffffff90 = fVar7, iVar3 != 0)) {
              *DAT_00568fac = ALBW_AS_F32(uVar31);
              pfVar14[1] = ALBW_AS_F32(uVar31);
            }
            iVar3 = *(int *)(param_4 + 0x7c) + uVar11 * 0x20;
            fVar7 = (float)VectorUnsignedToFloat
                                     ((uint)*(ushort *)(iVar3 + 4),(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
            ;
            fVar20 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 6),(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorUnsignedToFloat
                                      ((uint)*(ushort *)(iVar3 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
            ;
            pfVar14 = (float *)(*(int *)(param_4 + 0x7c) +
                                ((uint)(*(int *)(param_4 + 0x74) << 0x1e) >> 0x19) + uVar11 * 0x14);
            fVar7 = fVar7 / fVar17;
            uVar5 = in_fpscr & 0xfffffff | (uint)(pfVar14[2] == fVar29) << 0x1e;
            fVar20 = fVar20 / fVar18;
            uVar28 = *(undefined8 *)(pfVar14 + 3);
            if ((SUB41(uVar5 >> 0x1e,0) && (int)uVar28 == 0x3f800000) &&
                (int)((ulonglong)uVar28 >> 0x20) == 0x3f800000) {
              fVar19 = ALBW_AS_F32(((ulonglong)uVar31 >> 0x20));
              fVar17 = *pfVar14;
              fVar18 = pfVar14[1];
              pfVar14 = (float *)((int)ALBW_AS_U32(in_stack_ffffff94) + (int)ALBW_AS_U32(in_stack_ffffff90) * 0x20);
              *pfVar10 = (*pfVar14 + fVar17) * fVar7;
              *(float *)(iVar9 + 8) = fVar19 - (pfVar14[1] + fVar18) * fVar20;
              *(float *)(iVar9 + 0xc) = (pfVar14[6] + fVar17) * fVar7;
              *(float *)(iVar9 + 0x10) = fVar19 - (pfVar14[7] + fVar18) * fVar20;
              *(float *)(iVar9 + 0x14) = (pfVar14[4] + fVar17) * fVar7;
              *(float *)(iVar9 + 0x18) = fVar19 - (pfVar14[5] + fVar18) * fVar20;
              *(float *)(iVar9 + 0x1c) = (pfVar14[2] + fVar17) * fVar7;
              *(float *)(iVar9 + 0x20) = fVar19 - (pfVar14[3] + fVar18) * fVar20;
            }
            else {
              func_003E183C(local_5c,&local_60,pfVar14[2] * fVar30);
              pfVar1 = DAT_00568fac;
              pfVar8 = (float *)((int)ALBW_AS_U32(in_stack_ffffff94) + (int)ALBW_AS_U32(in_stack_ffffff90) * 0x20);
              fVar21 = ALBW_AS_F32(((ulonglong)uVar28 >> 0x20));
              fVar22 = *DAT_00568fac;
              fVar23 = DAT_00568fac[1];
              fVar24 = *pfVar8;
              fVar25 = pfVar8[1];
              fVar17 = local_60 * ALBW_AS_F32(uVar28) * fVar7;
              fVar19 = local_5c[0] * ALBW_AS_F32(uVar28) * fVar20;
              fVar26 = pfVar8[6];
              fVar27 = pfVar8[7];
              fVar18 = -(local_5c[0] * fVar21) * fVar7;
              fVar21 = local_60 * fVar21 * fVar20;
              fVar7 = (fVar22 + *pfVar14) * fVar7;
              fVar20 = (fVar23 + pfVar14[1]) * fVar20;
              *pfVar10 = fVar17 * (fVar24 - fVar22) + fVar18 * (fVar25 - fVar23) + fVar7;
              fVar32 = ALBW_AS_F32(((ulonglong)uVar31 >> 0x20));
              *(float *)(iVar9 + 8) =
                   fVar32 - (fVar19 * (fVar24 - fVar22) + fVar21 * (fVar25 - fVar23) + fVar20);
              *(float *)(iVar9 + 0xc) =
                   fVar17 * (fVar26 - fVar22) + fVar18 * (fVar27 - fVar23) + fVar7;
              *(float *)(iVar9 + 0x10) =
                   fVar32 - (fVar19 * (fVar26 - fVar22) + fVar21 * (fVar27 - fVar23) + fVar20);
              fVar24 = *pfVar1;
              fVar23 = pfVar1[1];
              fVar25 = pfVar8[4] - fVar24;
              fVar22 = pfVar8[5] - fVar23;
              fVar24 = pfVar8[2] - fVar24;
              fVar23 = pfVar8[3] - fVar23;
              *(float *)(iVar9 + 0x14) = fVar17 * fVar25 + fVar18 * fVar22 + fVar7;
              *(float *)(iVar9 + 0x1c) = fVar17 * fVar24 + fVar18 * fVar23 + fVar7;
              *(float *)(iVar9 + 0x18) = fVar32 - (fVar19 * fVar25 + fVar21 * fVar22 + fVar20);
              *(float *)(iVar9 + 0x20) = fVar32 - (fVar19 * fVar24 + fVar21 * fVar23 + fVar20);
            }
            uVar5 = uVar5 & 0xfffffff;
            in_fpscr = uVar5 | (uint)(*pfVar10 == *(float *)(iVar9 + 0x14)) << 0x1e;
            if ((((SUB41(in_fpscr >> 0x1e,0)) &&
                 (in_fpscr = uVar5 | (uint)(*(float *)(iVar9 + 0xc) == *(float *)(iVar9 + 0x1c)) <<
                                     0x1e, SUB41(in_fpscr >> 0x1e,0))) &&
                (in_fpscr = uVar5 | (uint)(*(float *)(iVar9 + 8) == *(float *)(iVar9 + 0x20)) <<
                                    0x1e, SUB41(in_fpscr >> 0x1e,0))) &&
               (in_fpscr = uVar5 | (uint)(*(float *)(iVar9 + 0x10) == *(float *)(iVar9 + 0x18)) <<
                                   0x1e, SUB41(in_fpscr >> 0x1e,0))) goto LAB_00569004;
LAB_00569080:
            uVar5 = 0x20 >> ((uVar11 & 0x7f) << 1);
            iVar12 = iVar12 + 2;
          }
          uVar13 = uVar13 | uVar5;
          break;
        case 3:
        case 4:
          in_stack_ffffff94 = fVar16;
          func_003FF2A8((float *)(param_4 + iVar12 * 0x10 + 4),local_30,param_4,uVar11,(int)ALBW_AS_U32(fVar7),
                        (int)ALBW_AS_U32(fVar16));
          local_5c[1] = 1.4013e-45;
          *(char *)(param_4 + uVar11 + 0x67) = (char)iVar12;
          uVar13 = uVar13 | 0x30U >> ((uVar11 & 0x7f) << 1);
          iVar12 = iVar12 + 2;
          fVar16 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar16) + 1));
          in_stack_ffffff90 = fVar7;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar15);
      *(char *)(param_4 + 100) = (char)iVar12;
      *(char *)(param_4 + 0x66) = SUB41(local_5c[1],0);
      *(char *)(param_4 + 0x65) = (char)uVar13;
    }
    *(byte *)(param_4 + 0x9e) = *(byte *)(param_4 + 0x9e) & 0xfb | 4;
  }
  return;
}

