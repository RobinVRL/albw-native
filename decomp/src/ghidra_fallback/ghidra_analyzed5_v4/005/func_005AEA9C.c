#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_005aea88;
extern int DAT_005aea8c;

// USA 005AEA9C <- EU 005AEA74 (Ghidra, non-matching)
// GLOBAL DAT_005aea88 undefined *
// GLOBAL DAT_005aea8c int

undefined4 func_005AEA9C(void)

{
  return func_00100118(DAT_005aea8c,DAT_005aea88,0x10,8);
}

