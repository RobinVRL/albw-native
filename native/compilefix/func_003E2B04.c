/* compilefix: USA 003E2B04 (EU 003E2AE4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'register0x00000054'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - register0x00000054 (the stack pointer) as a value that only reaches r0 of the final tail call func_0010C1B8, which overwrites r0 first (EU 0010C1B8 mov r0,#0): replaced by 0 [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
extern float albw_3d_slider(float keep);

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003E1A70(float *param_1,int param_2);
extern int func_003E1B2C(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_003E1E9C(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern float DAT_003e2e30;
extern float *DAT_003e2e34;
extern float DAT_003e2e38;
extern float DAT_003e2e3c;
extern int DAT_003e2e40;
extern float DAT_003e2e44;

// USA 003E2B04 <- EU 003E2AE4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_003e2e30 float
// GLOBAL DAT_003e2e34 float *
// GLOBAL DAT_003e2e38 float
// GLOBAL DAT_003e2e3c float
// GLOBAL DAT_003e2e40 int
// GLOBAL DAT_003e2e44 float

undefined4 func_003E2B04(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  int param_6,float fparam_0,float fparam_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fparam_4;
  float fVar10;
  float fVar11;
  float fparam_5;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(float *)(albw_frame + 0x4))
  #define local_c8 (*(float *)(albw_frame + 0x8))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define fStack_c0 (*(float *)(albw_frame + 0x10))
  #define fStack_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define fStack_b4 (*(float *)(albw_frame + 0x1c))
  #define fStack_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(float *)(albw_frame + 0x30))
  #define local_9c (*(float *)(albw_frame + 0x34))
  #define local_98 (*(float *)(albw_frame + 0x38))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 (*(float *)(albw_frame + 0x50))
  #define local_7c (*(float *)(albw_frame + 0x54))
  #define fStack_78 (*(float *)(albw_frame + 0x58))
  #define fStack_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define fStack_6c (*(float *)(albw_frame + 0x64))
  #define fStack_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  iVar4 = param_6;
  pfVar3 = param_5;
  iVar2 = DAT_003e2e40;
  pfVar1 = DAT_003e2e34;
  fVar16 = DAT_003e2e30;
  puVar5 = (undefined1 *)0; /* Ghidra: register0x54 (sp); only reaches r0 of the tail call 0010C1B8, whose first instruction is mov r0,#0 */
  if ((DAT_003e2e30 <= fparam_1) && (puVar5 = (undefined1 *)CF_FBITS(fparam_1), (int)ALBW_AS_U32(fparam_1) < 0x3f800001)) {
    fVar6 = fparam_0 / param_1[4];
    fVar12 = ABS(param_1[3] - param_1[2]);
    fVar7 = fVar12 * fVar6;
    fVar9 = fVar7 / DAT_003e2e34[3];
    fVar10 = DAT_003e2e34[1] * fVar9;
    param_1[0x14] = fVar10;
    fVar8 = DAT_003e2e44;
    fparam_4 = fVar10 - (fparam_0 - param_1[4]);
    if (fparam_4 <= fVar16) {
      fparam_4 = fVar10 * DAT_003e2e38;
    }
    fparam_5 = fVar10 + (param_1[5] - fparam_0);
    if (fparam_5 <= fparam_4) {
      fparam_5 = fparam_4 * DAT_003e2e3c;
    }
    fVar12 = (fVar7 * (fparam_4 / fVar10)) / fVar12;
    fVar15 = *pfVar1 * fVar9 * fparam_1;
    fVar9 = param_1[3] * fVar12;
    fVar7 = param_1[2] * fVar12;
    fVar13 = *param_1 * fVar12;
    fVar12 = param_1[1] * fVar12;
    param_1[0x17] = fVar15;
    (void)iVar2;   /* boot agent: shared page 0x1FF81000 (3D slider) does not exist natively */
    fVar16 = albw_3d_slider(fVar16);
    fVar15 = fVar16 * fVar8 * fVar15;
    param_1[0x17] = fVar15;
    local_a0 = (fVar15 * fparam_4) / fVar10;
    local_9c = local_a0 + fVar12;
    local_a0 = local_a0 + fVar13;
    fVar14 = param_1[0x17];
    fVar15 = param_1[0x14];
    fVar11 = param_1[0x17];
    fVar16 = param_1[0x14];
    fVar8 = param_1[0x14] - fparam_0;
    local_d0 = param_1[6] - param_1[0xf] * fVar8;
    local_cc = param_1[7] - param_1[0x10] * fVar8;
    local_c8 = param_1[8] - param_1[0x11] * fVar8;
    fVar8 = param_1[0x17];
    local_84 = local_cc - param_1[10] * fVar8;
    local_88 = local_d0 - param_1[9] * fVar8;
    local_80 = local_c8 - param_1[0xb] * fVar8;
    local_64 = local_88 + param_1[0xf];
    local_60 = local_84 + param_1[0x10];
    local_5c = local_80 + param_1[0x11];
    local_7c = param_1[9];
    fStack_78 = param_1[10];
    fStack_74 = param_1[0xb];
    local_70 = param_1[0xc];
    fStack_6c = param_1[0xd];
    fStack_68 = param_1[0xe];
    fVar8 = param_1[0x17];
    local_cc = local_cc + param_1[10] * fVar8;
    local_d0 = local_d0 + param_1[9] * fVar8;
    local_c8 = local_c8 + param_1[0xb] * fVar8;
    local_ac = local_d0 + param_1[0xf];
    local_a8 = local_cc + param_1[0x10];
    local_a4 = local_c8 + param_1[0x11];
    local_c4 = param_1[9];
    fStack_c0 = param_1[10];
    fStack_bc = param_1[0xb];
    local_b8 = param_1[0xc];
    fStack_b4 = param_1[0xd];
    fStack_b0 = param_1[0xe];
    param_1[0x15] = fparam_4;
    param_1[0x16] = fparam_5;
    param_1[0x13] =
         (param_1[0x14] / fparam_4) * ABS(param_1[1] - *param_1) * fVar6 * (fparam_4 / fVar10);
    local_98 = fVar7;
    local_94 = fVar9;
    local_90 = fparam_4;
    local_8c = fparam_5;
    func_003E1E9C(param_2,local_a0,local_9c,fVar7,fVar9,fparam_4,fparam_5);
    func_003E1A70(param_2,iVar4);
    func_003E1E9C(param_4,fVar13 - (fVar11 * fparam_4) / fVar16,
                  fVar12 - (fVar14 * fparam_4) / fVar15,fVar7,fVar9,fparam_4,fparam_5);
    func_003E1A70(param_4,iVar4);
    func_003E1B2C(param_3,&local_88,&local_70,&local_64);
    return func_003E1B2C(pfVar3,&local_d0,&local_b8,&local_ac);
  }
                    /* WARNING: Subroutine does not return */
  return func_0010C1B8((undefined4)(uintptr_t)(puVar5),(undefined4)(uintptr_t)(param_2),(undefined4)(uintptr_t)(param_3));
}

