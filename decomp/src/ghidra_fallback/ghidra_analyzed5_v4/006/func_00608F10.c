#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00315E64(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00608f24;
extern int DAT_00608f28;

// USA 00608F10 <- EU 00608EE8 (Ghidra, non-matching)
// GLOBAL DAT_00608f24 undefined4
// GLOBAL DAT_00608f28 int

void func_00608F10(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00608f24);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00315E64(puVar2,param_1);
    iVar1 = DAT_00608f28;
    iVar4 = DAT_00608f28 + 0x58;
    *piVar3 = DAT_00608f28;
    piVar3[200] = iVar4;
    piVar3[0x103] = iVar1 + 0xbc;
  }
  return;
}

