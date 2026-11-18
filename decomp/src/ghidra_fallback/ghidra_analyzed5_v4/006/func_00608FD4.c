#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E0DAC(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608fe0;
extern int DAT_00608fe4;

// USA 00608FD4 <- EU 00608FAC (Ghidra, non-matching)
// GLOBAL DAT_00608fe0 undefined4
// GLOBAL DAT_00608fe4 int

void func_00608FD4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608fe0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002E0DAC(puVar1,param_1);
    iVar3 = DAT_00608fe4 + 0x58;
    *piVar2 = DAT_00608fe4;
    piVar2[200] = iVar3;
  }
  return;
}

