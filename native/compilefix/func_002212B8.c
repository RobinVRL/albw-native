/* compilefix: USA 002212B8 (EU 002212B8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: returning 'void' from a function with incompatible result type 'undefined4' (aka 'unsigned int')
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */

// USA 002212B8 <- EU 002212B8 (Ghidra, non-matching)

undefined4 func_002212B8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0xa38) * 0x30;
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(iVar1 + 0x2c);
  if (*(uint *)(param_1 + 0xa6c) <= *(uint *)(param_1 + 0xa68)) {
    func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0xd));
        return 0;
  }
  *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  return 0;
}

