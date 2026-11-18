#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_00300c9c;
extern undefined *DAT_00300ca0;

// USA 00300C6C <- EU 00300C48 (Ghidra, non-matching)
// GLOBAL DAT_00300c9c undefined4
// GLOBAL DAT_00300ca0 undefined *

undefined4 * func_00300C6C(undefined4 *param_1)

{
  undefined *puVar1;
  
  puVar1 = DAT_00300ca0;
  *param_1 = DAT_00300c9c;
  func_00100950((int)(param_1 + 0x86),puVar1,0x4c,2);
  func_00100950((int)(param_1 + 0x4d),DAT_00300ca0,0x4c,3);
  func_00100950((int)(param_1 + 0x14),DAT_00300ca0,0x4c,3);
  return param_1;
}

