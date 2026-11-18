#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00351f94;

// USA 00351F6C <- EU 00351F48 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_00351f94 undefined4

undefined4 *
func_00351F6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = func_0010DA7C(param_1,0,3);
  *puVar1 = DAT_00351f94;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  puVar1[6] = param_5;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return puVar1;
}

