/* compilefix: USA 00220550 (EU 00220550), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: returning 'void' from a function with incompatible result type 'undefined4' (aka 'unsigned int')
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */
extern float DAT_002205a8;
extern float DAT_002205ac;

// USA 00220550 <- EU 00220550 (Ghidra, non-matching)
// GLOBAL DAT_002205a8 float
// GLOBAL DAT_002205ac float

undefined4 func_00220550(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_002205ac;
  iVar1 = func_005211F4(param_1,DAT_002205ac,DAT_002205a8);
  if (iVar1 == 0) {
    func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0xf));
        return 0;
  }
  if (*(char *)(param_1 + 0x8c5) != '\a') {
    return func_004FC07C(param_1,5,0xc,0);
  }
  return func_004FABDC(param_1,5,0xc,0);
}

