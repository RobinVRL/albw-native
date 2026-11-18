#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern undefined4 DAT_002915bc;

// USA 00291518 <- EU 00291540 (Ghidra, non-matching)
// GLOBAL DAT_002915bc undefined4

undefined4 func_00291518(int param_1,undefined4 param_2,float fparam_0)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((*(short *)(iVar1 + 0x42) == 0x45) &&
     (puVar2 = (undefined4 *)func_002D55D0(*(int *)(iVar1 + 0x48),0x17), puVar2 != (undefined4 *)0x0
     )) {
    *puVar2 = param_2;
    puVar2[1] = ALBW_AS_U32(fparam_0);
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    *(undefined1 *)((int)puVar2 + 10) = 1;
    *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0xfc) = DAT_002915bc;
    return 1;
  }
  return 0;
}

