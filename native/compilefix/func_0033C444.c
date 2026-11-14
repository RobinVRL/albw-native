/* compilefix: USA 0033C444 (EU 0033C420), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0033c4af[];
extern char s_cf_0033c4b0[];
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern undefined DAT_0033c4ac;
extern int DAT_0033c4c4;
extern int *DAT_0033c4dc;
extern char s_SE_LightArrow_SET_0033c4c8[];
extern undefined4 _DAT_0033c4ac;

// USA 0033C444 <- EU 0033C420 (Ghidra, non-matching)
// GLOBAL DAT_0033c4ac undefined
// GLOBAL DAT_0033c4c4 int
// GLOBAL DAT_0033c4dc int *
// GLOBAL s_cf_0033c4af string
// GLOBAL s_SE_LightArrow_SET_0033c4c8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0033C444(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)((int)param_1 + 0x45d) = 1;
  *(undefined1 *)(param_1 + 0x117) = 0;
  iVar1 = _DAT_0033c4ac;
  param_1[0xf7] = param_1[0x119];
  iVar2 = DAT_0033c4c4;
  param_1[0xf8] = param_1[0x11a];
  param_1[0x11e] = 0x3c;
  param_1[0x11f] = iVar1;
  param_1[0x11d] = 0;
  local_c = s_cf_0033c4b0;
  local_10 = iVar2;
  func_00150A84(param_1,&local_10,0);
  local_c = s_SE_LightArrow_SET_0033c4c8;
  local_10 = iVar2;
  return func_002DF0B0(*DAT_0033c4dc,&local_10,3);
}

