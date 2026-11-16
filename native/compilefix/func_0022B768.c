/* compilefix: USA 0022B768 (EU 0022B768), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00556E64(int param_1);
extern int func_0058AB74(int param_1);
extern int iRam0022bb58;
extern undefined4 uRam0022bb44;
extern int *piRam0022bb4c;
extern undefined4 *puRam0022bb48;
extern int *DAT_0022bb24;
extern float DAT_0022bb28;
extern undefined4 DAT_0022bb2c;
extern float DAT_0022bb30;
extern undefined4 *DAT_0022bb34;
extern int *DAT_0022bb38;
extern float DAT_0022bb3c;
extern undefined4 DAT_0022bb40;
extern char s_Laser_0022bb50[];

// USA 0022B768 <- EU 0022B768 (Ghidra, non-matching)
// GLOBAL DAT_0022bb24 int *
// GLOBAL DAT_0022bb28 float
// GLOBAL DAT_0022bb2c undefined4
// GLOBAL DAT_0022bb30 float
// GLOBAL DAT_0022bb34 undefined4 *
// GLOBAL DAT_0022bb38 int *
// GLOBAL DAT_0022bb3c float
// GLOBAL DAT_0022bb40 undefined4
// GLOBAL UNK_0022bb44 undefined4
// GLOBAL UNK_0022bb48 uint *
// GLOBAL UNK_0022bb4c int *
// GLOBAL UNK_0022bb58 int
// GLOBAL s_Laser_0022bb50 string

void func_0022B768(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  float fparam_0;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define fStack_2f8 (*(float *)(albw_frame + 0x8))
  #define fStack_2f4 (*(float *)(albw_frame + 0xc))
  #define local_2f0 (*(float * *)(albw_frame + 0x10))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2e8 (*(float *)(albw_frame + 0x18))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2dc (*(float *)(albw_frame + 0x24))
  #define local_2d8 (*(float *)(albw_frame + 0x28))
  #define local_2d4 (*(float * *)(albw_frame + 0x2c))
  #define local_2d0 (*(float * *)(albw_frame + 0x30))
  #define local_2cc (*(float *)(albw_frame + 0x34))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_2c0 (*(float *)(albw_frame + 0x40))
  #define local_2bc (*(float *)(albw_frame + 0x44))
  #define uStack_2b8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2b0 (*(float * *)(albw_frame + 0x50))
  #define uStack_2ac (*(undefined4 *)(albw_frame + 0x54))
  #define local_2a8 (*(float *)(albw_frame + 0x58))
  #define local_2a4 (*(float *)(albw_frame + 0x5c))
  #define uStack_2a0 (*(undefined4 *)(albw_frame + 0x60))
  #define fStack_294 (*(float *)(albw_frame + 0x6c))
  #define fStack_290 (*(float *)(albw_frame + 0x70))
  #define fStack_28c (*(float *)(albw_frame + 0x74))
  #define fStack_288 (*(float *)(albw_frame + 0x78))
  #define uStack_284 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_280 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x2c8))
  piVar1 = DAT_0022bb24;
  pfVar6 = (float *)(param_1 + 0xc6c);
  pfVar4 = *(float **)(*DAT_0022bb24 + 0x1c);
  *pfVar6 = *pfVar4;
  *(float *)(param_1 + 0xc70) = pfVar4[1];
  *(float *)(param_1 + 0xc74) = pfVar4[2];
  bVar3 = func_00556E64(*piVar1);
  uVar8 = CONCAT44(DAT_0022bb28,DAT_0022bb2c);
  if (!bVar3) {
    local_2a8 = *(float *)(param_1 + 0xc6c);
    uStack_2a0 = *(undefined4 *)(param_1 + 0xc74);
    local_2a4 = *(float *)(param_1 + 0xc70) + DAT_0022bb28;
    local_2c0 = *(float *)(param_1 + 0xc6c);
    uStack_2b8 = *(undefined4 *)(param_1 + 0xc74);
    local_2bc = *(float *)(param_1 + 0xc70) - DAT_0022bb30;
    local_2b4 = *DAT_0022bb34;
    local_2b0 = (float *)DAT_0022bb34[1];
    uStack_2ac = DAT_0022bb34[2];
    local_2ec = 0;
    local_2e0 = 0xffff;
    local_2e8 = 0.0;
    local_2e4 = 0;
    local_2d8 = 0.0;
    local_2cc = ALBW_AS_F32(DAT_0022bb2c);
    local_2d0 = &local_2a8;
    local_2d4 = &local_2c0;
    local_2c8 = CONCAT22((*(undefined2 *)((char *)&local_2c8 + 2)),0x100);
    local_2dc = 1.82169e-43;
    local_2f0 = (float *)&local_2b4;
    iVar5 = func_004A8030(*DAT_0022bb38,(int *)&local_2f0,0xff);
    if (iVar5 != 0) {
      *(float *)(param_1 + 0xc70) = local_2bc + ALBW_AS_F32(local_2b0) + DAT_0022bb3c;
    }
  }
  *(undefined4 *)(param_1 + 0x3e4) = DAT_0022bb40;
  *(int *)(param_1 + 0x3dc) = (int)uVar8;
  *(int *)(param_1 + 0x3e0) = (int)uVar8;
  func_004D7F70((float *)(param_1 + 0x3dc),*(int *)(param_1 + 1000) + 0x80000000);
  uVar9 = func_0058AB74(param_1);
  if ((int)uVar9 == 3) {
    func_004FABDC(param_1,3,2,0);
  }
  else {
    func_004FABDC(param_1,3,8,0);
  }
  uVar2 = uRam0022bb44;
  *(undefined4 *)(param_1 + 0xa74) = 0xf;
  *(undefined4 *)(param_1 + 0xa78) = uVar2;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  if (*piVar1 != 0) {
    local_2d8 = 0.0;
    local_2d4 = (float *)0x0;
    local_2dc = 0.0;
    local_2b0 = (float *)0x0;
    uStack_2ac = 0;
    uStack_38 = 0;
    func_002DFF7C((undefined4 *)(&fStack_2f8));
    fStack_2f8 = ALBW_AS_F32(func_0019B04C(*puRam0022bb48));
    local_2a8 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_2a8 + 2)),*(undefined2 *)(param_1 + 0x54)));
    fStack_2f4 = *pfVar6;
    local_2f0 = *(float **)(param_1 + 0xc70);
    local_2ec = *(undefined4 *)(param_1 + 0xc74);
    local_2d8 = *(float *)(param_1 + 1000);
    local_2a4 = ALBW_AS_F32(CONCAT22((*(undefined2 *)((char *)&local_2a4 + 2)),0xffff));
    uStack_2ac = *(undefined4 *)(param_1 + 0x2cc);
    func_004C43E0(*piRam0022bb4c,(int *)&fStack_2f8);
  }
  pfVar4 = (float *)(param_1 + 0xcf8);
  if (*(int *)(param_1 + 0xcf8) != 0) {
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    *(undefined4 *)(param_1 + 0xcfc) = 0;
  }
  if (*(int *)(param_1 + 0x344) == 0) {
    *(undefined4 *)(param_1 + 0xcfc) = 0;
  }
  else {
    func_004A1B9C((int *)&local_2e8,*(int *)(param_1 + 0x344),(uint *)s_Laser_0022bb50);
    *pfVar4 = local_2e8;
    *(undefined4 *)(param_1 + 0xcfc) = local_2e4;
  }
  func_00115C70(&local_2dc,pfVar6,(float *)(param_1 + 0x95c));
  fStack_2f8 = local_2dc;
  fStack_2f4 = local_2d8;
  local_2f0 = local_2d4;
  func_00115DC8(&fStack_2f8);
  fparam_0 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
  if ((*pfVar4 != 0.0) && (*(int *)((int)ALBW_AS_U32(*pfVar4) + 0x1c) == *(int *)(param_1 + 0xcfc))) {
    fStack_28c = ALBW_AS_F32(uVar8);
    fVar7 = fStack_2f8 * fStack_28c + fStack_2f4 * fparam_0 + ALBW_AS_F32(local_2f0) * fStack_28c;
    if (fVar7 <= fStack_28c) {
      fVar7 = -fVar7;
    }
    fStack_294 = fStack_28c;
    fStack_290 = fparam_0;
    if (iRam0022bb58 < (int)ALBW_AS_U32(fVar7)) {
      fStack_294 = fparam_0;
      fStack_290 = fStack_28c;
    }
    func_00115E10(&fStack_288,&fStack_294,&fStack_2f8);
    local_2e8 = fStack_288;
    local_2e4 = uStack_284;
    local_2e0 = uStack_280;
    func_00115DC8(&local_2e8);
    func_00115E10(&fStack_288,&fStack_2f8,&local_2e8);
    local_2a8 = fStack_288;
    local_2a4 = ALBW_AS_F32(uStack_284);
    uStack_2a0 = uStack_280;
    func_00115DC8(&local_2a8);
    local_2d8 = local_2e8;
    local_2c8 = local_2e4;
    uStack_2b8 = local_2e0;
    local_2d4 = (float *)CF_FBITS(local_2a8);
    uStack_2c4 = ALBW_AS_U32(local_2a4);
    local_2b4 = uStack_2a0;
    local_2d0 = (float *)CF_FBITS(fStack_2f8);
    local_2c0 = fStack_2f4;
    local_2b0 = local_2f0;
    local_2cc = *(float *)(param_1 + 0x95c);
    local_2bc = *(float *)(param_1 + 0x960);
    uStack_2ac = *(undefined4 *)(param_1 + 0x964);
    func_004A2E80((int)ALBW_AS_U32(*pfVar4),&local_2d8,fparam_0);
  }
  return;
}

