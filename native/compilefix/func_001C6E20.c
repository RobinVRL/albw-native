/* compilefix: USA 001C6E20 (EU 001C6E20), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001c6e83[];
extern char s_cf_001c6e84[];
#include "compilefix.h"

extern int func_001C6FA8(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_001c6e80;
extern int DAT_001c6ea4;
extern int *DAT_001c6ea8;
extern undefined4 _DAT_001c6e80;

// USA 001C6E20 <- EU 001C6E20 (Ghidra, non-matching)
// GLOBAL DAT_001c6e80 undefined
// GLOBAL DAT_001c6ea4 int
// GLOBAL DAT_001c6ea8 int *
// GLOBAL s_cf_001c6e83 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001C6E20(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar1 = _DAT_001c6e80;
  *(undefined4 *)(param_1 + 0x43c) = 0x3c;
  *(undefined4 *)(param_1 + 0x440) = uVar1;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x444) = 1;
  func_001C6FA8(param_1);
  local_c = s_cf_001c6e84;
  local_10 = DAT_001c6ea4;
  return func_00587F74(*DAT_001c6ea8,&local_10,0);
}

