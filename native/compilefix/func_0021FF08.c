/* compilefix: USA 0021FF08 (EU 0021FF08), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: returning 'void' from a function with incompatible result type 'undefined4' (aka 'unsigned int')
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern int func_0058AB74(int param_1);
void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */
extern undefined4 uRam0021ffc8;

// USA 0021FF08 <- EU 0021FF08 (Ghidra, non-matching)
// GLOBAL UNK_0021ffc8 undefined4

undefined4 func_0021FF08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x8e4) == '\x01') {
    uVar3 = func_0058AB74(param_1);
    if ((int)uVar3 == 0x14) {
      iVar2 = func_0058A8F0(param_1);
      if (iVar2 != 0) {
        func_004FABDC(param_1,0x10,0,0);
        uVar1 = uRam0021ffc8;
        *(undefined4 *)(param_1 + 0xa6c) = 200;
        *(undefined4 *)(param_1 + 0xa70) = uVar1;
        *(undefined4 *)(param_1 + 0xa68) = 0;
        return 0;
      }
    }
    else {
      if (*(uint *)(param_1 + 0xa6c) <= *(uint *)(param_1 + 0xa68)) {
        func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(0xf));
        return 0;
      }
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
    }
  }
  else {
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      func_0065E398((char *)((undefined4 *)(param_1 + 0x8c0)),(uint32_t)(int)(9));
    }
  }
  return 0;
}

