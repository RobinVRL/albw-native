/* compilefix: USA 004DA834 (EU 004DA80C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: expression is not assignable
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - the V3 frame conversion took the continuation line `fVar12 * local_44;` of an expression for a declaration and replaced it with a #define: original line restored (raw dump line 106) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00583B1C(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004dab60;
extern undefined4 *DAT_004dab64;
extern int DAT_004dab68;
extern float DAT_004dab6c;
extern float DAT_004dab70;
extern float DAT_004dab74;
extern float *DAT_004dab78;
extern float DAT_004dab7c;
extern float DAT_004dab80;

// USA 004DA834 <- EU 004DA80C (Ghidra, non-matching)
// GLOBAL DAT_004dab60 int *
// GLOBAL DAT_004dab64 undefined4 *
// GLOBAL DAT_004dab68 int
// GLOBAL DAT_004dab6c float
// GLOBAL DAT_004dab70 float
// GLOBAL DAT_004dab74 float
// GLOBAL DAT_004dab78 float *
// GLOBAL DAT_004dab7c float
// GLOBAL DAT_004dab80 float

undefined4 func_004DA834(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fparam_0;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define iStack_7c (*(int *)(albw_frame + 0x14))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define fStack_68 (*(float *)(albw_frame + 0x28))
  #define fStack_64 (*(float *)(albw_frame + 0x2c))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  pfVar6 = (float *)(param_1 + 0x265);
  pfVar5 = (float *)(param_1 + 0x269);
  if (param_1[0x264] == 0) {
    *pfVar6 = ALBW_AS_F32(param_1[0xf4]);
    param_1[0x266] = param_1[0xf5];
    param_1[0x267] = param_1[0xf6];
    *pfVar5 = *pfVar6;
    param_1[0x26a] = param_1[0x266];
    param_1[0x26b] = param_1[0x267];
    param_1[0x268] = param_1[0xfa];
    param_1[0x26c] = param_1[0xfa];
    (**(code **)(*param_1 + 0xac))(param_1,8,0xffffffff);
    piVar1 = (int *)func_005841A8(*DAT_004dab60,*DAT_004dab64,
                                  *(int **)(DAT_004dab68 + *DAT_004dab60));
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      *pfVar5 = *(float *)(iVar2 + 8);
      param_1[0x26a] = *(int *)(iVar2 + 0xc);
      param_1[0x26b] = *(int *)(iVar2 + 0x10);
      param_1[0x26c] = *(int *)(*piVar1 + 0x24);
    }
  }
  if ((*(char *)((int)param_1 + 0x852) == '\b') && (iVar2 = func_00583B1C((int)param_1), iVar2 != 0)
     ) {
    (**(code **)(*param_1 + 0xac))(param_1,9,0xffffffff);
    iVar2 = param_1[0x270];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x271])) {
      iVar4 = *(int *)(iVar2 + 0x20);
      if (((iVar4 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar4 + 0xc))) &&
         (0 < *(int *)(iVar4 + 4))) {
        *(undefined1 *)(iVar4 + 0x280) = 1;
      }
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
    }
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 0x852);
  bVar7 = uVar3 == 9;
  if (bVar7) {
    uVar3 = param_1[0x264];
  }
  if (bVar7 && uVar3 == 0x5f) {
    (**(code **)(*param_1 + 0xac))(param_1,10,0xffffffff);
  }
  if (param_1[0x264] - 10U < 0x5b) {
    fVar8 = (float)VectorUnsignedToFloat(param_1[0x264] - 10U,(byte)(in_fpscr >> 0x15) & 3);
    fparam_0 = (fVar8 - DAT_004dab6c) / DAT_004dab70;
    fVar8 = DAT_004dab6c;
    fVar9 = DAT_004dab74;
    func_00115D70(&local_88,DAT_004dab78,DAT_004dab74);
    local_6c = -*DAT_004dab78;
    fStack_64 = -DAT_004dab78[2];
    fStack_68 = -DAT_004dab78[1];
    fVar13 = local_84;
    fVar14 = fStack_80;
    func_00115D70(&local_44,&local_6c,fVar9);
    fVar10 = (fparam_0 - fVar8) / DAT_004dab7c;
    fVar9 = fVar10 * fVar10;
    fVar8 = fVar10 * fVar10 - fVar10;
    fVar12 = fVar8 * fVar10;
    fVar11 = fVar9 - fVar12 * DAT_004dab80;
    local_58 = (*pfVar6 - fVar11 * *pfVar6) + fVar11 * *pfVar5 + (fVar12 - fVar8) * local_88 +
               fVar12 * local_44;
    fVar12 = fVar8 * fVar10;
    fVar10 = fVar8 * fVar10;
    fVar11 = fVar9 - fVar12 * DAT_004dab80;
    fVar9 = fVar9 - fVar10 * DAT_004dab80;
    local_54 = (ALBW_AS_F32(param_1[0x266]) - fVar11 * ALBW_AS_F32(param_1[0x266])) +
               fVar11 * ALBW_AS_F32(param_1[0x26a]) + (fVar12 - fVar8) * fVar13 + fVar12 * local_40;
    local_50 = (ALBW_AS_F32(param_1[0x267]) - fVar9 * ALBW_AS_F32(param_1[0x267])) +
               fVar9 * ALBW_AS_F32(param_1[0x26b]) + (fVar10 - fVar8) * fVar14 + fVar10 * local_3c;
    func_0051D0B0(param_1 + 0xfa,param_1[0x268],param_1[0x26c],fparam_0);
    func_00115C70(&local_84,&local_58,(float *)(param_1 + 0xf4));
    param_1[0xf7] = (int)ALBW_AS_U32(local_84);
    param_1[0xf8] = (int)ALBW_AS_U32(fStack_80);
    param_1[0xf9] = iStack_7c;
  }
  if ((99 < (uint)param_1[0x264]) && (iVar2 = func_00583B1C((int)param_1), iVar2 != 0)) {
    (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
    *(undefined1 *)((int)param_1 + 0x9b5) = 0;
    return 1;
  }
  param_1[0x264] = param_1[0x264] + 1;
  return 0;
}

