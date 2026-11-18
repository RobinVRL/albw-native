#include "ghidra_types.h"

extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern undefined4 DAT_002fcbd8;
extern undefined4 DAT_002fcbdc;

// USA 002FCBCC <- EU 002FCBA8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_002fcbd8 undefined4
// GLOBAL DAT_002fcbdc undefined4

undefined4 *
func_002FCBCC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_001663BC(param_1,DAT_002fcbd8,param_3,param_4,param_5);
  *puVar1 = DAT_002fcbdc;
  puVar1[0x42] = 0;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  *(undefined1 *)((int)puVar1 + 0x119) = 0;
  return puVar1;
}

