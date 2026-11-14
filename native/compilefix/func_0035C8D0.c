/* compilefix: USA 0035C8D0 (EU 0035C8AC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0035c8fa[];
extern char s_cf_0035c8fc[];
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined DAT_0035c8f8;
extern int DAT_0035c908;
extern undefined4 _DAT_0035c8f8;

// USA 0035C8D0 <- EU 0035C8AC (Ghidra, non-matching)
// GLOBAL DAT_0035c8f8 undefined
// GLOBAL DAT_0035c908 int
// GLOBAL s_cf_0035c8fa string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0035C8D0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = _DAT_0035c8f8;
  param_1[0x14c] = 0x77;
  param_1[0x14d] = iVar1;
  param_1[0x14b] = 0;
  local_c = s_cf_0035c8fc;
  local_10 = DAT_0035c908;
  return func_00150A84(param_1,&local_10,0);
}

