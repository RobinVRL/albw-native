// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0028C740(int param_1,int param_2);
extern int func_002D5D3C(void *param_1);
extern undefined4 DAT_00256834;

// USA 002567E4 <- EU 0025680C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00256834 undefined4

undefined4 * func_002567E4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00256834;
  func_0028C740(param_1[0x13],0);
  puVar1 = func_002D5D3C(param_1);
  return puVar1;
}

