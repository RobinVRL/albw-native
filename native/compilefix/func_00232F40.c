/* compilefix: USA 00232F40 (EU 00232F40), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_001B7E40(float *param_1,int param_2);
extern int func_004CF600(int param_1,float *param_2,int param_3);
extern int DAT_00233094;
extern undefined4 DAT_00233098;
extern int DAT_0023309c;
extern int DAT_002330a0;

// USA 00232F40 <- EU 00232F40 (Ghidra, non-matching)
// GLOBAL DAT_00233094 int
// GLOBAL DAT_00233098 undefined4
// GLOBAL DAT_0023309c int
// GLOBAL DAT_002330a0 int

undefined4 func_00232F40(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  
  iVar4 = param_1 + 0xb8e8;
  func_0010C0B8(iVar4);
  bVar1 = *(byte *)(DAT_00233094 + param_1);
  func_0010EEE0(iVar4);
  pfVar9 = (float *)(param_1 + 0x10 + (int)(short)(1 - (ushort)bVar1) * (int)(short)DAT_00233098 * 4
                    );
  if ((*(char *)((int)pfVar9 + 0x7d) != '\0') && (*(char *)(DAT_0023309c + (int)pfVar9) != '\0')) {
    iVar7 = param_1 + 0xb8cc;
    fVar8 = pfVar9[0x583];
    fVar5 = 0.0;
    if (0 < (int)ALBW_AS_U32(fVar8)) {
      do {
        if ((uint)ALBW_AS_U32(fVar5) < (uint)ALBW_AS_U32(pfVar9[0x583])) {
          pfVar6 = (float *)((int)ALBW_AS_U32(pfVar9[0x585]) + (int)ALBW_AS_U32(fVar5) * 0x38);
        }
        else {
          pfVar6 = (float *)CF_FBITS(pfVar9[0x585]);
        }
        fVar2 = 0.0;
        if (*(char *)(pfVar6 + 0xd) != '\0') {
          fVar2 = pfVar6[0xc];
        }
        if ((*(char *)(pfVar6 + 0xd) != '\0' && fVar2 != 0.0) &&
           (*(char *)((int)pfVar6 + 0x36) == '\0')) {
          if (iVar7 != 0) {
            func_0010C0B8(iVar7);
          }
          iVar3 = func_004CF600((int)ALBW_AS_U32(pfVar6[0xc]),pfVar6,(int)(pfVar9 + 0x563));
          *(byte *)((int)pfVar6 + 0x35) = (byte)iVar3 ^ 1;
          if (iVar7 != 0) {
            func_0010EEE0(iVar7);
          }
        }
        fVar5 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar5) + 1));
      } while ((int)ALBW_AS_U32(fVar5) < (int)ALBW_AS_U32(fVar8));
    }
    *(undefined1 *)((int)pfVar9 + 0x1609) = 0;
    *(undefined1 *)(pfVar9 + 0x582) = 1;
    func_001B7E40(pfVar9,iVar7);
    if (*(char *)(DAT_002330a0 + param_1) != '\0') {
      func_0010C0B8(iVar4);
      pfVar9[0x1706] = *(float *)(param_1 + 0xb8c8);
      return func_0010EEE0(iVar4);
    }
  }
  return 0;
}

