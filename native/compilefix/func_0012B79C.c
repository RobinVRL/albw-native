/* compilefix: USA 0012B79C (EU 0012B79C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_T'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0012b83a[];
extern char s_cf_0012b83c[];
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_004F8184(uint param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam0012b84c;
extern float DAT_0012b830;
extern float DAT_0012b834;
extern undefined DAT_0012b838;
extern undefined4 _DAT_0012b838;

// USA 0012B79C <- EU 0012B79C (Ghidra, non-matching)
// GLOBAL DAT_0012b830 float
// GLOBAL DAT_0012b834 float
// GLOBAL DAT_0012b838 undefined
// GLOBAL UNK_0012b84c int
// GLOBAL s_cf_0012b83a string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0012B79C(int param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),DAT_0012b830);
  fVar1 = DAT_0012b834;
  *(float *)(param_1 + 0x3e0) = DAT_0012b834;
  fVar1 = func_004F8184(0x1e,ALBW_AS_F32(_DAT_0012b838),fVar1,fVar1);
  *(float *)(param_1 + 0x3e0) = fVar1;
  func_004FABDC(param_1,4,0xffffffff,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x3a4));
  iStack_10 = iRam0012b84c;
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_1 + 0x3d4);
  pcStack_c = s_cf_0012b83c;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

