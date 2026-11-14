/* compilefix: USA 00490EB0 (EU 00490E88), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'LAB_00490f08'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 *  - &LAB_<ADDR> (a string in the code section Ghidra left as a code label, taken with add rX,pc,#imm) -> s_cf_<ADDR>, the same bytes ("Loop" / "%u") [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
extern char s_cf_00490f08[]; /* string in the code section (Ghidra left it as a code label) */

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_00688F10(undefined4 *param_1);

// USA 00490EB0 <- EU 00490E88 (Ghidra, non-matching)
// GLOBAL LAB_00490f08 undefined

undefined4 func_00490EB0(uint *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  func_00688F10(&local_40);
  if (param_2 == 0) {
    iVar1 = func_004994B0((int)&local_40,(undefined4)(uintptr_t)(s_cf_00490f08),*param_1,in_r3);
  }
  else {
    iVar1 = func_004994B0((int)&local_40,param_2,*param_1,in_r3);
  }
  (**(code **)(local_40 + 8))(&local_40);
  return (**(code **)(*param_3 + 8))(param_3,local_3c,iVar1);
}

