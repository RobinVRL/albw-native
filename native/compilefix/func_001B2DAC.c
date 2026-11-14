/* compilefix: USA 001B2DAC (EU 001B2DAC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001b2e0c[];
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam001b2e08;
extern int iRam001b2e20;

// USA 001B2DAC <- EU 001B2DAC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL UNK_001b2e08 float
// GLOBAL UNK_001b2e20 int

undefined4 func_001B2DAC(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,9,0,0);
  func_004FB4E0(param_1,fRam001b2e08);
  iStack_10 = iRam001b2e20;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x4000;
  pcStack_c = (char *)((int)s_cf_001b2e0c);
  return func_00150A84((int *)param_1,&iStack_10,0);
}

