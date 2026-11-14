/* compilefix: USA 003754D8 (EU 003754B4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _local_XX (Ghidra's 4-byte view of the stack slot local_XX) -> *(undefined4 *)&local_XX (same frame offset) [1]
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_0032ABD0(int param_1,uint param_2);
extern int func_0032C72C(int param_1,float *param_2,uint param_3);
extern int func_00375314(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00492078(float *param_1,float *param_2,float *param_3);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00375898;
extern int *DAT_0037589c;
extern int *DAT_003758a0;
extern uint *DAT_003758a4;
extern undefined4 *DAT_003758a8;
extern undefined4 DAT_003758ac;
extern uint DAT_003758b0;
extern float DAT_003758b4;
extern float DAT_003758b8;
extern float DAT_003758bc;
extern undefined4 DAT_003758c0;
extern int *DAT_003758c4;
extern float DAT_003758c8;
extern float DAT_003758cc;

// USA 003754D8 <- EU 003754B4 (Ghidra, non-matching)
// GLOBAL DAT_00375898 int *
// GLOBAL DAT_0037589c int *
// GLOBAL DAT_003758a0 int *
// GLOBAL DAT_003758a4 uint *
// GLOBAL DAT_003758a8 undefined4 *
// GLOBAL DAT_003758ac undefined4
// GLOBAL DAT_003758b0 uint
// GLOBAL DAT_003758b4 float
// GLOBAL DAT_003758b8 float
// GLOBAL DAT_003758bc float
// GLOBAL DAT_003758c0 undefined4
// GLOBAL DAT_003758c4 int *
// GLOBAL DAT_003758c8 float
// GLOBAL DAT_003758cc float

undefined4 func_003754D8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  short *psVar5;
  uint uVar6;
  undefined4 unaff_r8;
  uint in_fpscr;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(int * *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(int *)(albw_frame + 0x14))
  #define local_88 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_86 (*(ushort *)(albw_frame + 0x1a))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(undefined1 *)(albw_frame + 0x28))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define afStack_54 ((float *)(albw_frame + 0x4c))
  piVar4 = DAT_00375898;
  if (*(char *)((int)param_1 + 0x4a1) == '\0') {
    piVar4 = DAT_0037589c;
  }
  param_1[0xfa] = *piVar4 + param_1[0xfa];
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003758a0 + 0x3dbbc,param_1[0x14]);
  if (((*DAT_003758a4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003758a4), iVar2 != 0)) {
    *DAT_003758a8 = DAT_003758ac;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003758a8), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  fparam_0 = DAT_003758b8;
  fVar11 = DAT_003758b4;
  uVar6 = DAT_003758b0;
  if (puVar1 != (undefined4 *)0x0) {
    psVar5 = (short *)((int)param_1 + 0x2e);
    if (*(char *)((int)param_1 + 0x4a1) == '\0') {
      func_0032C72C((int)puVar1,(float *)(param_1 + 0xf4),(int)*psVar5);
      param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fparam_0));
    }
    else if (param_1[0x125] == 0) {
      if (*(char *)((int)param_1 + 0x4a2) == '\0') {
        pfVar3 = (float *)(param_1 + 0x118);
      }
      else {
        pfVar3 = (float *)(param_1 + 0x11b);
      }
      local_98 = *pfVar3;
      local_94 = (int *)CF_FBITS(pfVar3[1]);
      local_90 = pfVar3[2];
      if ((char)param_1[0x129] != '\0') {
        func_0032C72C((int)puVar1,&local_98,(int)*psVar5);
        local_94 = (int *)param_1[0x119];
      }
      iVar2 = func_004D838C((float *)(param_1 + 0xf4),&local_98,fparam_0,DAT_003758bc,DAT_003758bc);
      if (iVar2 != 0) {
        if (*(char *)((int)param_1 + 0x4a2) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4a2) = 1;
        }
        else {
          func_0032ABD0((int)puVar1,(int)*psVar5);
          *(undefined1 *)((int)param_1 + 0x4a1) = 0;
          *(undefined1 *)(param_1 + 0x129) = 0;
          if (param_1[0x114] != 0) {
            *(undefined1 *)(param_1[0x114] + 0x61) = 0;
          }
        }
      }
    }
    else {
      iVar2 = param_1[0x125] + -1;
      param_1[0x125] = iVar2;
      if (iVar2 == 0) {
        func_00375314(param_1);
      }
    }
    iVar2 = param_1[0x115];
    if (iVar2 != 0) {
      fVar9 = ALBW_AS_F32(param_1[0xf5]);
      iVar7 = param_1[0xf6];
      *(int *)(iVar2 + 4) = param_1[0xf4];
      *(float *)(iVar2 + 8) = fVar9 - fVar11;
      *(int *)(iVar2 + 0xc) = iVar7;
      func_004356B4((int *)param_1[0x115]);
      local_98 = 0.0;
      local_90 = 0.0;
      local_94 = param_1 + 0x110;
      local_78 = 0;
      local_7c = param_1[0x115];
      local_8c = param_1[0xb3];
      (*(undefined4 *)&local_88) = CONCAT22((ushort)((uint)unaff_r8 >> 0x10) | (ushort)((uint)DAT_003758c0 >> 0x10),
                           (short)param_1[0x15]);
      local_84 = 1;
      local_80 = param_1[0xe8];
      func_004A8F40(*DAT_003758c4,(int *)&local_98,0x1600);
    }
    uVar6 = puVar1[0x140];
  }
  fVar9 = DAT_003758c8;
  if (0 < param_1[0x126]) {
    iVar2 = param_1[0x126] + -1;
    param_1[0x126] = iVar2;
    fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(param_1[0x127],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar9;
    if (fVar9 != fVar10) {
      fVar8 = (fVar12 - fVar9) / (fVar10 - fVar9);
    }
    if (*(char *)((int)param_1 + 0x4a3) == '\0') {
      param_1[0x124] = (int)ALBW_AS_U32((fVar11 + (fparam_0 - fVar8) * fVar11));
    }
    else {
      param_1[0x124] = (int)ALBW_AS_U32((fVar11 + fVar8 * fVar11));
    }
  }
  iVar2 = param_1[0x116];
  fVar11 = ALBW_AS_F32(param_1[0x124]) * DAT_003758cc;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x74) = fVar11;
  *(float *)(iVar2 + 0x78) = fVar11;
  *(float *)(iVar2 + 0x7c) = fVar11;
  iVar2 = param_1[0x116];
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  pfVar3 = (float *)(iVar2 + 0x80);
  func_004D8AEC(pfVar3,param_1[0xfa],(float *)(param_1 + 0xf4));
  local_6c = fparam_0;
  local_68 = fVar9;
  local_64 = fVar9;
  func_004D7F70(&local_6c,-param_1[0xfa]);
  func_0048B5D4(&local_90,&local_6c,uVar6);
  func_00491404(afStack_54,&local_90);
  func_00492078(pfVar3,pfVar3,afStack_54);
  func_004CEAF0(param_1[0x116]);
  local_60 = ALBW_AS_F32(param_1[0x124]);
  local_5c = fparam_0;
  local_58 = local_60;
  func_00151150(param_1[0x117],&local_60);
  return func_001512E8((int *)param_1[0x117]);
}

