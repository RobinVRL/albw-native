/* compilefix: USA 002558DC (EU 002558C0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: conflicting types for 'func_00255898'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - the dump printed the body at this address under another label (func_<other>, clashing with that function's extern): definition renamed to this address; body checked instruction by instruction against the EU code [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 002558DC <- EU 002558C0 [EDITED REGION: check by hand] (Ghidra, non-matching)

void func_002558DC(int param_1)

{
  func_00255710(param_1,3);
  return;
}

