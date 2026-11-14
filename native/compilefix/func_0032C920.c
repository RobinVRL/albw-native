/* compilefix: USA 0032C920 (EU 0032C8FC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0036DEC8(undefined1 *param_1,float *param_2,int param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_0032cb88;
extern int *DAT_0032cb8c;
extern undefined *DAT_0032cb90;

// USA 0032C920 <- EU 0032C8FC (Ghidra, non-matching)
// GLOBAL DAT_0032cb88 float
// GLOBAL DAT_0032cb8c int *
// GLOBAL DAT_0032cb90 undefined *

void func_0032C920(int param_1,float *param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 ((float *)(albw_frame + 0x8))
  #define local_84 ((float *)(albw_frame + 0x2c))
  #define local_60 ((float *)(albw_frame + 0x50))
  #define local_3c (*(float * *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define fStack_34 (*(float *)(albw_frame + 0x7c))
  piVar3 = DAT_0032cb8c;
  fVar6 = DAT_0032cb88;
  uVar10 = (ulonglong)(uint)ALBW_AS_U32(DAT_0032cb88);
  *param_2 = DAT_0032cb88;
  param_2[1] = fVar6;
  param_2[2] = fVar6;
  local_3c = *(float **)(*piVar3 + 0x1c);
  func_00100118((int)local_84,DAT_0032cb90,0xc,3);
  func_00100118((int)local_60,DAT_0032cb90,0xc,3);
  uVar8 = 0;
  do {
    uVar1 = 1 << (uVar8 & 0xff);
    pfVar9 = local_60 + uVar8 * 3;
    if ((*(uint *)(param_1 + 200) & uVar1) == 0) {
      func_0036DEC8((undefined1 *)(param_1 + 0x34),pfVar9,uVar8);
      fVar6 = *pfVar9;
      fVar7 = local_60[uVar8 * 3 + 1];
      pfVar5 = (float *)(param_1 + 4);
      if (uVar8 < 3) {
        pfVar5 = pfVar5 + uVar8 * 3;
      }
      pfVar5[2] = local_60[uVar8 * 3 + 2];
      *pfVar5 = fVar6;
      pfVar5[1] = fVar7;
      *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | uVar1;
    }
    else {
      pfVar5 = (float *)(param_1 + 4);
      if (uVar8 < 3) {
        pfVar5 = pfVar5 + uVar8 * 3;
      }
      fVar7 = pfVar5[1];
      fVar6 = pfVar5[2];
      *pfVar9 = *pfVar5;
      local_60[uVar8 * 3 + 1] = fVar7;
      local_60[uVar8 * 3 + 2] = fVar6;
    }
    func_00115C70(local_84 + uVar8 * 3,local_3c,pfVar9);
    fVar6 = ALBW_AS_F32(uVar10);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  func_00100118((int)local_a8,DAT_0032cb90,0xc,3);
  func_00115C70(local_a8,local_60 + 3,local_60);
  func_00115C70(local_a8 + 3,local_60 + 6,local_60 + 3);
  func_00115C70(local_a8 + 6,local_60,local_60 + 6);
  uVar8 = 0xffffffff;
  bVar2 = local_a8[2] * local_84[0] - local_a8[0] * local_84[2] <= fVar6;
  cVar4 = !bVar2;
  if (bVar2) {
    uVar8 = 0;
  }
  if (fVar6 < local_a8[5] * local_84[3] - local_a8[3] * local_84[5]) {
    cVar4 = cVar4 + '\x01';
  }
  else {
    uVar8 = 1;
  }
  if (fVar6 < local_a8[8] * local_84[6] - local_a8[6] * local_84[8]) {
    cVar4 = cVar4 + '\x01';
  }
  else {
    uVar8 = 2;
  }
  if (cVar4 == '\x03') {
    fVar6 = *local_3c;
    fVar7 = local_3c[1];
    param_2[2] = local_3c[2];
    *param_2 = fVar6;
    param_2[1] = fVar7;
  }
  else if ((cVar4 == '\x02') && (uVar8 < 3)) {
    pfVar9 = local_a8 + uVar8 * 3;
    func_00115DC8(pfVar9);
    local_3c = (float *)CF_FBITS(*pfVar9);
    fStack_34 = local_a8[uVar8 * 3 + 2];
    local_38 = local_a8[uVar8 * 3 + 1];
    fVar6 = local_84[uVar8 * 3] * ALBW_AS_F32(local_3c) + local_84[uVar8 * 3 + 2] * fStack_34;
    func_004D7F70((float *)&local_3c,0x40000000);
    func_00115D70(pfVar9,pfVar9,fVar6);
    func_00115C54(param_2,local_60 + uVar8 * 3,pfVar9);
    func_00115C54(param_2,param_2,(float *)&local_3c);
  }
  param_2[1] = local_60[1];
  return;
}

