/* compilefix: USA 0021F4A8 (EU 0021F4A8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: returning 'void' from a function with incompatible result type 'undefined4' (aka 'unsigned int')
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */
extern int DAT_0021f560;

// USA 0021F4A8 <- EU 0021F4A8 (Ghidra, non-matching)
// GLOBAL DAT_0021f560 int

undefined4 func_0021F4A8(int param_1)

{
  char cVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_0021f560 + param_1)) {
      if (*(char *)(param_1 + 0xb02) != '\0') {
LAB_0021f4e8:
        func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0xf));
        return 0;
      }
      if (*(char *)(param_1 + 0x8e4) == '\0') {
        cVar1 = *(char *)(param_1 + 0x8c5);
        if (cVar1 == '\x05') goto LAB_0021f4e8;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x8c5);
        if (*(char *)(param_1 + 0x8e4) != '\x02') {
          func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(cVar1));
        return 0;
        }
        if ((cVar1 == '\x05' || cVar1 == '\x06') || (cVar1 == '\a' || cVar1 == '\b')) {
          func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(9));
        return 0;
        }
      }
      func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(cVar1));
        return 0;
    }
    func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0x18));
  }
  return 0;
}

