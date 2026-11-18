#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern undefined4 DAT_00428ae8;

// USA 00428AC0 <- EU 00428AA0 (Ghidra, non-matching)
// GLOBAL DAT_00428ae8 undefined4

undefined4 * func_00428AC0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x78);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0017A520(puVar2,0x400,(int *)0x0,0);
  }
  uVar1 = DAT_00428ae8;
  *param_1 = puVar3;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}

