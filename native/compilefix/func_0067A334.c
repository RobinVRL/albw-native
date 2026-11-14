/* compilefix: USA 0067A334 (EU 0067A30C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0067939C(int *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1);
extern int func_0067C4C0(int *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1);
extern float DAT_0067a4e0;
extern int DAT_0067a4e4;

// USA 0067A334 <- EU 0067A30C (Ghidra, non-matching)
// GLOBAL DAT_0067a4e0 float
// GLOBAL DAT_0067a4e4 int

undefined4 func_0067A334(float *param_1,int *param_2,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = DAT_0067a4e0;
  pfVar5 = (float *)CF_FBITS(param_1[8]);
  pfVar4 = (float *)*param_2;
  uVar6 = 0xfffffff0;
  uVar3 = param_2[1];
  if (pfVar4 != pfVar5 + (uint)*(ushort *)((int)param_1 + 0xe) * 4 + -4 && pfVar4 != pfVar5) {
    if (0 < (int)uVar3) {
      uVar6 = (uint)*(byte *)((int)param_1 + 9);
    }
    if ((int)uVar3 < 0) {
      uVar6 = (uint)*(byte *)(param_1 + 2);
    }
    if (uVar3 != 0) {
      if ((uVar6 == 2) && ((uVar3 & 1) != 0)) {
        fVar8 = (float)VectorSignedToFloat(uVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
        uVar2 = func_0067939C(param_2,param_1,pfVar4,(param_1[1] - *param_1) * fVar8,fparam_0);
        return uVar2;
      }
      fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = func_0067C4C0(param_2,param_1,pfVar4,(param_1[1] - *param_1) * fVar8,fparam_0);
      return uVar2;
    }
    uVar2 = func_0067C4C0(param_2,param_1,pfVar4,DAT_0067a4e0,fparam_0);
    return uVar2;
  }
  uVar6 = uVar3 + 1;
  param_2[1] = uVar6;
  if (0 < (int)uVar6) {
    pfVar4 = (float *)(uint)*(byte *)((int)param_1 + 9);
  }
  if ((int)uVar6 < 0) {
    pfVar4 = (float *)(uint)*(byte *)(param_1 + 2);
  }
  if (uVar6 == 0) {
    uVar2 = func_0067C4C0(param_2,param_1,pfVar5,fVar8,fparam_0);
    return uVar2;
  }
  if (pfVar4 == (float *)0x0) {
    fVar10 = *param_1;
    pfVar4 = (float *)((uint)*(ushort *)((int)param_1 + 0xe) * 0x10 + -0x10 + (int)ALBW_AS_U32(param_1[8]));
    fVar7 = *pfVar4;
    fVar9 = pfVar4[1];
    *param_2 = 0;
    param_2[1] = 1;
    iVar1 = DAT_0067a4e4;
    fVar7 = fVar7 + fVar10;
    if (param_1[1] < fVar7) {
      fVar7 = param_1[1];
    }
    param_2[2] = (int)ALBW_AS_U32(fVar7);
    param_2[3] = iVar1;
    param_2[4] = (int)ALBW_AS_U32(fVar9);
    param_2[5] = (int)ALBW_AS_U32(fVar8);
    param_2[6] = (int)ALBW_AS_U32(fVar8);
    param_2[7] = (int)ALBW_AS_U32(fVar8);
    return 1;
  }
  if ((pfVar4 == (float *)0x2) && ((uVar6 & 1) != 0)) {
    fVar8 = (float)VectorSignedToFloat(uVar3 + 2,(byte)(in_fpscr >> 0x15) & 3);
    uVar2 = func_0067939C(param_2,param_1,
                          (float *)((uint)*(ushort *)((int)param_1 + 0xe) * 0x10 + -0x10 +
                                   (int)ALBW_AS_U32(param_1[8])),(param_1[1] - *param_1) * fVar8,fparam_0);
    return uVar2;
  }
  fVar8 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = func_0067C4C0(param_2,param_1,(float *)CF_FBITS(param_1[8]),(param_1[1] - *param_1) * fVar8,fparam_0
                       );
  return uVar2;
}

