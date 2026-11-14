/* compilefix: USA 0021FAE8 (EU 0021FAE8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: returning 'void' from a function with incompatible result type 'undefined4' (aka 'unsigned int')
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */
extern int DAT_0021fb50;

// USA 0021FAE8 <- EU 0021FAE8 (Ghidra, non-matching)
// GLOBAL DAT_0021fb50 int

undefined4 func_0021FAE8(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xa14) - *(float *)(param_1 + 0x3d0);
  fVar2 = *(float *)(param_1 + 0xa1c) - *(float *)(param_1 + 0x3d8);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  if ((int)ALBW_AS_U32(fVar1) < DAT_0021fb50) {
    if (*(char *)(param_1 + 0xafd) == '\0') {
      func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0x12));
        return 0;
    }
    func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0x13));
  }
  return 0;
}

