#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0050DD68(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060b38c;

// USA 0060B38C <- EU 0060B364 (Ghidra, non-matching)
// GLOBAL DAT_0060b38c undefined4

undefined4 func_0060B38C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060b38c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0050DD68(puVar1,param_1);
  }
  return 0;
}

