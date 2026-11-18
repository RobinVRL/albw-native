#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_002df7dc;
extern undefined4 DAT_002df7e0;
extern undefined4 DAT_002df7e4;

// USA 002DF790 <- EU 002DF76C (Ghidra, non-matching)
// GLOBAL DAT_002df7dc int *
// GLOBAL DAT_002df7e0 undefined4
// GLOBAL DAT_002df7e4 undefined4

int func_002DF790(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_002df7dc;
  if (*DAT_002df7dc == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0x18,param_1,4);
    puVar4 = (undefined4 *)0x0;
    if (puVar3 + 1 != (undefined4 *)0x0) {
      puVar4 = func_0010DA7C(puVar3 + 1,param_1,3);
      *puVar4 = DAT_002df7e0;
    }
    piVar1[1] = (int)puVar4;
    uVar2 = DAT_002df7e4;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[5] = 0;
      *puVar3 = uVar2;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}

