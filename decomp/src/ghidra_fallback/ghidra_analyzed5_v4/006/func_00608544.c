#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00334104(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_00608554;
extern int DAT_00608558;

// USA 00608544 <- EU 0060851C (Ghidra, non-matching)
// GLOBAL DAT_00608554 undefined4
// GLOBAL DAT_00608558 int

void func_00608544(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00608554);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00334104(puVar2,param_1,1);
    iVar1 = DAT_00608558;
    piVar3[200] = DAT_00608558 + 0x54;
    *piVar3 = iVar1;
  }
  return;
}

