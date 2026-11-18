#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00261468(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608a68;
extern int DAT_00608a6c;

// USA 00608A5C <- EU 00608A34 (Ghidra, non-matching)
// GLOBAL DAT_00608a68 undefined4
// GLOBAL DAT_00608a6c int

void func_00608A5C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608a68);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00261468(puVar1,param_1);
    iVar3 = DAT_00608a6c + 0x58;
    *piVar2 = DAT_00608a6c;
    piVar2[200] = iVar3;
  }
  return;
}

