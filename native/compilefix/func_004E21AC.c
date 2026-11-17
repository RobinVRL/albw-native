/* compilefix: USA 004E21AC (EU 004E2184), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_004e21e8[];
#include "compilefix.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00151148(int param_1,int param_2);
extern int iRam004e21f8;
extern undefined4 uRam004e21e4;

// USA 004E21AC <- EU 004E2184 (Ghidra, non-matching)
// GLOBAL UNK_004e21e4 undefined4
// GLOBAL UNK_004e21f8 int

undefined4 func_004E21AC(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_00151148(*(int *)(param_1 + 0x458),0);
  uVar1 = uRam004e21e4;
  *(undefined4 *)(param_1 + 0x518) = 8;
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = 0;
  pcStack_c = (char *)((int)s_cf_004e21e8);
  iStack_10 = iRam004e21f8;
  return func_001509A4(param_1,&iStack_10,0);
}

