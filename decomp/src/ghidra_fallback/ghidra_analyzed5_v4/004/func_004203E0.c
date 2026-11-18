#include "ghidra_types.h"

extern int func_00420EFC(void *param_1);
extern int func_0042128C(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4, undefined2 param_5,undefined2 param_6,undefined2 param_7,uint param_8, undefined1 param_9);
extern undefined4 DAT_00420410;

// USA 004203E0 <- EU 004203C0 (Ghidra, non-matching)
// GLOBAL DAT_00420410 undefined4

undefined4 * func_004203E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00420410;
  func_0042128C(param_1 + 4,0,0,8,0,0,0,0,1);
  puVar1 = func_00420EFC(param_1);
  return puVar1;
}

