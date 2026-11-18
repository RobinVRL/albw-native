#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00327C50(int param_1);

// USA 00327BC0 <- EU 00327B9C (Ghidra, non-matching)

undefined4 func_00327BC0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x2c) == 1) {
    puVar1 = (undefined4 *)func_0010BAB4(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 **)(param_1 + 0x424) = puVar1;
    iVar2 = func_0010CEE0(0x3800,(int *)0x0,4);
    if (iVar2 != 0) {
      puVar1[2] = iVar2;
      puVar1[1] = 0x80;
      *puVar1 = 0;
    }
    return func_00327C50(param_1);
  }
  return 0;
}

