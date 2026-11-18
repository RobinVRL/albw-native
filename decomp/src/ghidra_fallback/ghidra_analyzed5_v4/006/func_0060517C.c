#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00243F68(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060517c;

// USA 0060517C <- EU 00605154 (Ghidra, non-matching)
// GLOBAL DAT_0060517c undefined4

undefined4 func_0060517C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060517c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00243F68(puVar1,param_1);
  }
  return 0;
}

