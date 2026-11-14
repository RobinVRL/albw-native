/* compilefix: USA 004E19C8 (EU 004E19A0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [3]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_004e1ad7[];
extern char s_cf_004e1ad8[];
extern char s_cf_004e1ae8[];
#include "compilefix.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B84C(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00539200(int param_1);
extern float DAT_004e1ab4;
extern int DAT_004e1ab8;
extern int DAT_004e1acc;
extern float DAT_004e1ad0;
extern undefined DAT_004e1ad4;
extern char s_333_SE_EN_AW_SHOT_004e1ae8[];
extern char s_SE_Arrow_FLY_004e1abc[];
extern undefined4 _DAT_004e1ad4;

// USA 004E19C8 <- EU 004E19A0 (Ghidra, non-matching)
// GLOBAL DAT_004e1ab4 float
// GLOBAL DAT_004e1ab8 int
// GLOBAL DAT_004e1acc int
// GLOBAL DAT_004e1ad0 float
// GLOBAL DAT_004e1ad4 undefined
// GLOBAL s_cf_004e1ae8 string
// GLOBAL s_cf_004e1ad7 string
// GLOBAL s_SE_Arrow_FLY_004e1abc string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004E19C8(int *param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  float in_s1;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  #define local_20 (*(int *)(albw_frame + 0x70))
  #define local_1c (*(char * *)(albw_frame + 0x74))
  sVar1 = (short)param_1[0xb];
  if (sVar1 == 0 || sVar1 == 4) {
    func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],DAT_004e1ab4);
    param_1[0xf8] = DAT_004e1ab8;
  }
  func_0010A464(auStack_88);
  iVar2 = DAT_004e1acc;
  local_24 = s_SE_Arrow_FLY_004e1abc;
  local_28 = DAT_004e1acc;
  func_00150A84(param_1,&local_28,(int)auStack_88);
  bVar3 = func_00539200((int)auStack_88);
  if ((bVar3 && sVar1 != 0) && sVar1 != 4) {
    if (sVar1 == 1) {
      fVar4 = DAT_004e1ad0;
      func_0025B860((int)auStack_88,0,ALBW_AS_F32((*(undefined4 *)((char *)&s_333_SE_EN_AW_SHOT_004e1ae8 + 0))),in_s1);
      func_0025B84C((int)auStack_88,fVar4);
      local_1c = s_333_SE_EN_AW_SHOT_004e1ae8 + 4;
      local_20 = iVar2;
      func_00150A84(param_1,&local_20,0);
    }
    else {
      fVar4 = DAT_004e1ad0;
      func_0025B860((int)auStack_88,0,ALBW_AS_F32(_DAT_004e1ad4),in_s1);
      func_0025B84C((int)auStack_88,fVar4);
      local_1c = s_cf_004e1ad8;
      local_20 = iVar2;
      func_00150A84(param_1,&local_20,0);
    }
  }
  return func_0025B874(auStack_88);
}

