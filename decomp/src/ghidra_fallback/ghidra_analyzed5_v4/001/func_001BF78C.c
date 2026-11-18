#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern uint DAT_001bf7bc;

// USA 001BF78C <- EU 001BF78C (Ghidra, non-matching)
// GLOBAL DAT_001bf7bc uint

undefined4 func_001BF78C(int param_1)

{
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x414),param_1 + 0x41c,DAT_001bf7bc,0,0);
}

