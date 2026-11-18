#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern undefined4 DAT_002915bc;

// USA 00291520 <- EU 00291548 (Ghidra, non-matching)
// GLOBAL DAT_002915bc undefined4

undefined4 func_00291520(int param_1,undefined4 param_2,float fparam_0)

{
  undefined4 *puVar1;
  
  if ((*(short *)(param_1 + 0x42) == 0x45) &&
     (puVar1 = (undefined4 *)func_002D55D0(*(int *)(param_1 + 0x48),0x17),
     puVar1 != (undefined4 *)0x0)) {
    *puVar1 = param_2;
    puVar1[1] = ALBW_AS_U32(fparam_0);
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 0;
    *(undefined1 *)((int)puVar1 + 10) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xfc) = DAT_002915bc;
    return 1;
  }
  return 0;
}

