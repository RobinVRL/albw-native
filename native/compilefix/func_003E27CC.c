/* compilefix: USA 003E27CC (EU 003E27AC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003E1A70(float *param_1,int param_2);
extern int func_003E1B2C(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_003E1E9C(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern float DAT_003e2ad4;
extern int DAT_003e2ad8;
extern int DAT_003e2adc;
extern float DAT_003e2ae0;

// USA 003E27CC <- EU 003E27AC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003e2ad4 float
// GLOBAL DAT_003e2ad8 int
// GLOBAL DAT_003e2adc int
// GLOBAL DAT_003e2ae0 float

undefined4 func_003E27CC(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float fparam_0,float fparam_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fparam_4;
  float fparam_5;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define fStack_a0 (*(float *)(albw_frame + 0x10))
  #define fStack_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define fStack_94 (*(float *)(albw_frame + 0x1c))
  #define fStack_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define fStack_58 (*(float *)(albw_frame + 0x58))
  #define fStack_54 (*(float *)(albw_frame + 0x5c))
  #define local_50 (*(float *)(albw_frame + 0x60))
  #define fStack_4c (*(float *)(albw_frame + 0x64))
  #define fStack_48 (*(float *)(albw_frame + 0x68))
  #define local_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  fVar13 = DAT_003e2ad4;
  pfVar2 = param_1;
  if ((DAT_003e2ad4 <= fparam_1) && (pfVar2 = (float *)CF_FBITS(fparam_1), (int)ALBW_AS_U32(fparam_1) < 0x3f800001)) {
    param_1[0x14] = fparam_0;
    fVar10 = *(float *)(DAT_003e2ad8 + 0xc);
    fVar3 = param_1[5];
    fVar4 = fVar3;
    if (fVar3 <= fparam_0) {
      param_1[0x17] = fVar13;
      fVar4 = fVar13;
    }
    if (fparam_0 < fVar3) {
      fVar4 = (fVar4 / (fVar4 - fparam_0)) *
              ((ABS(param_1[3] - param_1[2]) * fparam_0) / (param_1[4] * fVar10)) * param_1[0x12];
      param_1[0x17] = fVar4;
    }
    fVar3 = DAT_003e2ae0;
    iVar1 = DAT_003e2adc;
    param_1[0x17] = fVar4 * fparam_1;
    if (*(char *)(iVar1 + 0x84) == '\0') {
      fVar13 = *(float *)(iVar1 + 0x80);
    }
    fVar13 = fVar13 * fVar3 * fVar4 * fparam_1;
    param_1[0x17] = fVar13;
    local_80 = (fVar13 * param_1[4]) / fparam_0 + *param_1;
    local_7c = (fVar13 * param_1[4]) / fparam_0 + param_1[1];
    fVar6 = param_1[0x17];
    fVar8 = param_1[4];
    fVar13 = param_1[0x14];
    fVar11 = param_1[1];
    fVar7 = param_1[0x17];
    fVar9 = param_1[4];
    fVar4 = param_1[0x14];
    fVar12 = *param_1;
    fVar3 = param_1[2];
    fVar10 = param_1[3];
    fparam_4 = param_1[4];
    fparam_5 = param_1[5];
    fVar5 = param_1[0x17];
    local_68 = param_1[6] - param_1[9] * fVar5;
    local_64 = param_1[7] - param_1[10] * fVar5;
    local_60 = param_1[8] - param_1[0xb] * fVar5;
    local_44 = local_68 + param_1[0xf];
    local_40 = local_64 + param_1[0x10];
    local_3c = local_60 + param_1[0x11];
    local_5c = param_1[9];
    fStack_58 = param_1[10];
    fStack_54 = param_1[0xb];
    local_50 = param_1[0xc];
    fStack_4c = param_1[0xd];
    fStack_48 = param_1[0xe];
    fVar5 = param_1[0x17];
    local_b0 = param_1[6] + param_1[9] * fVar5;
    local_ac = param_1[7] + param_1[10] * fVar5;
    local_a8 = param_1[8] + param_1[0xb] * fVar5;
    local_8c = local_b0 + param_1[0xf];
    local_88 = local_ac + param_1[0x10];
    local_84 = local_a8 + param_1[0x11];
    local_a4 = param_1[9];
    fStack_a0 = param_1[10];
    fStack_9c = param_1[0xb];
    local_98 = param_1[0xc];
    fStack_94 = param_1[0xd];
    fStack_90 = param_1[0xe];
    param_1[0x15] = param_1[4];
    param_1[0x16] = param_1[5];
    param_1[0x13] = ABS(param_1[1] - *param_1) * (param_1[0x14] / param_1[4]);
    local_78 = fVar3;
    local_74 = fVar10;
    local_70 = fparam_4;
    local_6c = fparam_5;
    func_003E1E9C(param_2,local_80,local_7c,fVar3,fVar10,fparam_4,fparam_5);
    func_003E1A70(param_2,param_6);
    func_003E1E9C(param_4,fVar12 - (fVar7 * fVar9) / fVar4,fVar11 - (fVar6 * fVar8) / fVar13,fVar3,
                  fVar10,fparam_4,fparam_5);
    func_003E1A70(param_4,param_6);
    func_003E1B2C(param_3,&local_68,&local_50,&local_44);
    return func_003E1B2C(param_5,&local_b0,&local_98,&local_8c);
  }
                    /* WARNING: Subroutine does not return */
  return func_0010C1B8((undefined4)(uintptr_t)(pfVar2),(undefined4)(uintptr_t)(param_2),(undefined4)(uintptr_t)(param_3));
}

