#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00205310(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060478c;

// USA 0060478C <- EU 00604764 (Ghidra, non-matching)
// GLOBAL DAT_0060478c undefined4

undefined4 func_0060478C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060478c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00205310(puVar1,param_1);
  }
  return 0;
}

