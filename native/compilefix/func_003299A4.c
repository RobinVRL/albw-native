/* compilefix: USA 003299A4 (EU 00329980), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0032CD88(undefined4 *param_1);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_00329bb0;
extern int *DAT_00329bb4;
extern float DAT_00329bb8;
extern float DAT_00329bbc;
extern undefined4 DAT_00329bc0;

// USA 003299A4 <- EU 00329980 (Ghidra, non-matching)
// GLOBAL DAT_00329bb0 undefined4
// GLOBAL DAT_00329bb4 int *
// GLOBAL DAT_00329bb8 float
// GLOBAL DAT_00329bbc float
// GLOBAL DAT_00329bc0 undefined4

void func_003299A4(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int unaff_r9;
  float *in_r12;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  func_004FCDF4(param_1 + 0x5a8,1);
  *(undefined4 *)(param_1 + 0xc54) = DAT_00329bb0;
  func_004F87F8(param_1,0);
  func_004FC07C(param_1,8,8,0);
  func_004FAB60(param_1,1,0);
  func_0032CD88((undefined4 *)(param_1 + 0x8c4));
  func_0032CD88((undefined4 *)(param_1 + 0x99c));
  iVar5 = *(int *)(param_1 + 0xa98);
  pfVar8 = (float *)0xffffffff;
  pfVar6 = *(float **)(iVar5 + 0x20);
  pfVar7 = (float *)0xffffffff;
  if (0 < (int)pfVar6) {
    unaff_r9 = *(int *)(iVar5 + 0x28);
  }
  pfVar2 = (float *)0x0;
  pfVar9 = pfVar7;
  pfVar3 = pfVar8;
  fVar11 = DAT_00329bb8;
  fVar12 = DAT_00329bb8;
  if (0 < (int)pfVar6) {
    do {
      pfVar7 = pfVar9;
      pfVar8 = pfVar3;
      in_r12 = pfVar2;
      fVar13 = fVar11;
      fVar14 = fVar12;
      if ((unaff_r9 != 0 && pfVar2 < pfVar6) &&
         (pfVar10 = *(float **)(unaff_r9 + (int)pfVar2 * 4), in_r12 = pfVar10,
         pfVar10 != (float *)0x0)) {
        in_r12 = pfVar10 + 6;
        fVar14 = *in_r12 - **(float **)(*DAT_00329bb4 + 0x1c);
        fVar13 = pfVar10[8] - (*(float **)(*DAT_00329bb4 + 0x1c))[2];
        fVar15 = fVar14 * fVar14 + fVar13 * fVar13;
        pfVar7 = pfVar3;
        pfVar8 = pfVar2;
        fVar13 = fVar12;
        fVar14 = fVar15;
        if ((fVar12 <= fVar15) &&
           (pfVar7 = pfVar9, pfVar8 = pfVar3, fVar13 = fVar11, fVar14 = fVar12, fVar15 < fVar11)) {
          pfVar7 = pfVar2;
          fVar13 = fVar15;
        }
      }
      pfVar2 = (float *)((int)pfVar2 + 1);
      pfVar9 = pfVar7;
      pfVar3 = pfVar8;
      fVar11 = fVar13;
      fVar12 = fVar14;
    } while ((int)pfVar2 < (int)pfVar6);
  }
  pfVar9 = (float *)0xffffffff;
  pfVar3 = (float *)0x0;
  fVar11 = DAT_00329bb8;
  if (0 < (int)pfVar6) {
    do {
      if (pfVar3 != pfVar8 && pfVar3 != pfVar7) {
        in_r12 = *(float **)(iVar5 + 0x28);
      }
      if ((pfVar3 != pfVar8 && pfVar3 != pfVar7) && in_r12 != (float *)0x0) {
        if (pfVar3 < pfVar6) {
          pfVar2 = (float *)CF_FBITS(in_r12[(int)pfVar3]);
        }
        else {
          pfVar2 = (float *)0x0;
        }
        in_r12 = pfVar2;
        if (pfVar2 != (float *)0x0) {
          in_r12 = pfVar2 + 6;
          fVar13 = *in_r12 - *(float *)(param_1 + 0x3d0);
          fVar12 = pfVar2[8] - *(float *)(param_1 + 0x3d8);
          fVar12 = fVar13 * fVar13 + fVar12 * fVar12;
          if (fVar12 < fVar11) {
            pfVar9 = pfVar3;
            fVar11 = fVar12;
          }
        }
      }
      pfVar3 = (float *)((int)pfVar3 + 1);
    } while ((int)pfVar3 < (int)pfVar6);
  }
  iVar4 = 0;
  if (*(int *)(iVar5 + 0x28) != 0) {
    if (pfVar9 < pfVar6) {
      iVar4 = *(int *)(*(int *)(iVar5 + 0x28) + (int)pfVar9 * 4);
    }
    else {
      iVar4 = 0;
    }
  }
  func_00115C70(&local_30,(float *)(iVar4 + 0x18),(float *)(param_1 + 0x3d0));
  func_00115DC8(&local_30);
  func_00115D70(&local_30,&local_30,DAT_00329bbc);
  uVar1 = DAT_00329bc0;
  *(float *)(param_1 + 0x3dc) = local_30;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_2c;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_28;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0xc4c) = uVar1;
  *(undefined1 *)(param_1 + 0xc93) = 0;
  iVar5 = func_0068C690((float *)(param_1 + 0x3dc));
  *(int *)(param_1 + 0xc40) = iVar5;
  return;
}

