/* compilefix: USA 004D4AC0 (EU 004D4A98), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00111A64(uint *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_004d4c9c;
extern undefined *DAT_004d4ca0;
extern float DAT_004d4ca4;
extern int *DAT_004d4ca8;
extern float DAT_004d4cac;
extern float DAT_004d4cb0;

// USA 004D4AC0 <- EU 004D4A98 (Ghidra, non-matching)
// GLOBAL DAT_004d4c9c int *
// GLOBAL DAT_004d4ca0 undefined *
// GLOBAL DAT_004d4ca4 float
// GLOBAL DAT_004d4ca8 int *
// GLOBAL DAT_004d4cac float
// GLOBAL DAT_004d4cb0 float

/* WARNING: Type propagation algorithm not settling */

void func_004D4AC0(int param_1)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x3a0];
  #define local_398 ((int *)(albw_frame + 0x8))
  #define local_390 ((float *)(albw_frame + 0x10))
  #define local_48 ((float *)(albw_frame + 0x358))
  iVar4 = func_00588BE4(param_1);
  if (iVar4 == *DAT_004d4c9c) {
    fVar10 = 0.0;
    local_48[0] = 0.0;
    local_48[1] = 0.0;
    local_48[2] = 0.0;
    local_48[3] = 0.0;
    func_00100118((int)local_398,DAT_004d4ca0,0xd4,4);
    fVar15 = DAT_004d4ca4;
    piVar5 = *(int **)(param_1 + 0x480);
    piVar8 = piVar5 + *(int *)(param_1 + 0x478);
    fVar13 = DAT_004d4cac;
    fVar16 = DAT_004d4cb0;
    for (; piVar5 != piVar8; piVar5 = piVar5 + 1) {   /* Ghidra wrote fVar13 / fVar16 back to the literal pool (read-only; same values): dropped (160bd) */
      sVar2 = *(short *)(*piVar5 + 0x2c);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x2a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar15) << 0x1f |
              (uint)(fVar13 == fVar15) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(fVar13) || NAN(fVar15)) << 0x1c;
      bVar3 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        iVar4 = (int)sVar2;
        piVar12 = local_398 + iVar4 * 0x35;
        if (*piVar12 < local_398[iVar4 * 0x35 + 1]) {
          pfVar9 = (float *)CF_FBITS(local_390[iVar4 * 0x35U + 1]);
          if (pfVar9 != (float *)0x0) {
            local_390[iVar4 * 0x35U + 1] = *pfVar9;
            *pfVar9 = 0.0;
            pfVar9[1] = 0.0;
          }
          if (*piVar12 < local_398[iVar4 * 0x35 + 1]) {
            *(float **)((int)ALBW_AS_U32(local_390[iVar4 * 0x35]) + *piVar12 * 4) = pfVar9;
            *piVar12 = *piVar12 + 1;
          }
          if (pfVar9 != (float *)0x0) {
            *pfVar9 = fVar13;
            pfVar9[1] = fVar10;
            local_48[sVar2] = local_48[sVar2] + fVar13;
          }
        }
      }
      fVar10 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar10) + 1));
      fVar13 = DAT_004d4cac;
      fVar16 = DAT_004d4cb0;
    }
    iVar11 = 0;
    iVar4 = *DAT_004d4ca8;
    do {
      fVar10 = local_48[iVar11];
      uVar6 = in_fpscr & 0xfffffff;
      uVar1 = uVar6 | (uint)(fVar10 < fVar15) << 0x1f | (uint)(fVar10 == fVar15) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar10) || NAN(fVar15)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        in_fpscr = uVar6 | (uint)(fVar13 <= fVar10) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar10 = fVar13;
        }
        uVar6 = func_00111A64((uint *)(iVar4 + 0x660));
        fVar14 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        piVar5 = (int *)CF_FBITS(local_390[iVar11 * 0x35]);
        piVar8 = piVar5 + local_398[iVar11 * 0x35];
        fVar10 = fVar14 * fVar16 * fVar10;
        for (; piVar5 != piVar8; piVar5 = piVar5 + 1) {
          fVar10 = fVar10 - *(float *)*piVar5;
          uVar6 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar10) << 0x1f |
                  (uint)(fVar15 == fVar10) << 0x1e;
          in_fpscr = uVar6 | (uint)(NAN(fVar15) || NAN(fVar10)) << 0x1c;
          bVar3 = (byte)(uVar6 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar10 = ((float *)*piVar5)[1];
            if ((uint)ALBW_AS_U32(fVar10) < (uint)ALBW_AS_U32(*(float *)(param_1 + 0x620))) {
              iVar7 = *(int *)(param_1 + 0x624) + (int)ALBW_AS_U32(fVar10) * 0x118;
            }
            else {
              iVar7 = *(int *)(param_1 + 0x624);
            }
            *(undefined1 *)(iVar7 + 0x10c) = 1;
            *(undefined1 *)(iVar7 + 0x10d) = 10;
            *(undefined2 *)(iVar7 + 0x114) = 0xb4;
            break;
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
  }
  return;
}

