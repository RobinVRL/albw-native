#include "ghidra_types.h"

extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern undefined4 DAT_00400724;

// USA 0040071C <- EU 004006FC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00400724 undefined4

undefined4 * func_0040071C(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = func_00400254(param_1,param_2,param_4);
  *puVar1 = DAT_00400724;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  return puVar1;
}

