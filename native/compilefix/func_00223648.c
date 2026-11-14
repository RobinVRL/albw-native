/* compilefix: USA 00223648 (EU 00223648), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002238bc[];
extern char s_cf_002238db[];
extern char s_cf_002238dc[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00222CDC(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521018(int param_1);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065E630(undefined4 *param_1,undefined1 param_2);
extern float fRam002238b4;
extern undefined4 uRam002238b8;
extern float DAT_002238ac;
extern float DAT_002238b0;
extern float DAT_002238d0;
extern float DAT_002238d4;
extern undefined DAT_002238d8;
extern uint DAT_002238f0;
extern undefined4 DAT_002238f4;
extern undefined4 _DAT_002238d8;

// USA 00223648 <- EU 00223648 (Ghidra, non-matching)
// GLOBAL DAT_002238ac float
// GLOBAL DAT_002238b0 float
// GLOBAL DAT_002238d0 float
// GLOBAL DAT_002238d4 float
// GLOBAL DAT_002238d8 undefined
// GLOBAL DAT_002238f0 uint
// GLOBAL DAT_002238f4 undefined4
// GLOBAL UNK_002238b4 float
// GLOBAL UNK_002238b8 undefined4
// GLOBAL s_cf_002238db string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00223648(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define pcStack_24 (*(char * *)(albw_frame + 0x1c))
  fVar1 = DAT_002238b0;
  iVar4 = *(int *)(param_1 + 0x91c);
  if (iVar4 == 0) {
    fVar6 = DAT_002238ac;
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x91c) = *(int *)(param_1 + 0x91c) + 1;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      func_004FABDC(param_1,2,0,0);
      fVar5 = fRam002238b4;
      func_00115C70(&fStack_38,(float *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0));
      pcStack_34 = (char *)CF_FBITS(fVar6);
      func_00115DC8(&fStack_38);
      uVar2 = uRam002238b8;
      *(float *)(param_1 + 0x928) = fStack_38 * fVar5;
      *(float *)(param_1 + 0x930) = fStack_30 * fVar5;
      *(float *)(param_1 + 0x92c) = fVar6;
      *(undefined4 *)(param_1 + 0x3e0) = uVar2;
      *(float *)(param_1 + 0x3dc) = fStack_38 * fVar5;
      *(float *)(param_1 + 0x3e4) = fStack_30 * fVar5;
      pcStack_24 = (char *)((int)s_cf_002238bc);
      fStack_28 = fVar1;
      return func_00150A84((int *)param_1,(int *)&fStack_28,0);
    }
  }
  else {
    if (iVar4 == 1) {
      fVar6 = DAT_002238ac;
      bVar3 = func_00521018(param_1);
      if ((bVar3) &&
         (fVar5 = *(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x910) +
                  *(float *)(param_1 + 0x3e0) * *(float *)(param_1 + 0x914) +
                  *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x918), fVar5 < fVar6)) {
        func_00115DAC((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x910),
                      (float *)(param_1 + 0x3dc),fVar5 * DAT_002238d0);
        fVar5 = DAT_002238d4;
        if (*(float *)(param_1 + 0x3e0) < fVar6) {
          *(float *)(param_1 + 0x3e0) = DAT_002238d4;
        }
        *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * fVar5;
        *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x3e4) * fVar5;
      }
      *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - ALBW_AS_F32(_DAT_002238d8);
      bVar3 = func_00521078(param_1);
      if (!bVar3) {
        if (DAT_002238f0 < *(uint *)(param_1 + 0x3e0)) {
          *(undefined4 *)(param_1 + 0x3e0) = DAT_002238f4;
        }
        return 0;
      }
      *(int *)(param_1 + 0x91c) = *(int *)(param_1 + 0x91c) + 1;
      *(float *)(param_1 + 0x3dc) = fVar6;
      *(float *)(param_1 + 0x3e0) = fVar6;
      *(float *)(param_1 + 0x3e4) = fVar6;
      func_004FABDC(param_1,3,0,0);
      pcStack_34 = s_cf_002238dc;
      fStack_38 = fVar1;
      return func_00150A84((int *)param_1,(int *)&fStack_38,0);
    }
    if ((iVar4 == 2) && (iVar4 = func_0058A8F0(param_1), iVar4 != 0)) {
      iVar4 = *(int *)(param_1 + 0x920) + -1;
      *(int *)(param_1 + 0x920) = iVar4;
      if (0 < iVar4) {
        return func_00222CDC(param_1);
      }
      func_0065E630((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return 0;
}

