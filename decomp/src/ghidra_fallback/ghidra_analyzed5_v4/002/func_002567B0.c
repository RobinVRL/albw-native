// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_00256808;

// USA 002567B0 <- EU 002567D8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00256808 undefined4

undefined4 * func_002567B0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_00256808;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return puVar1;
}

