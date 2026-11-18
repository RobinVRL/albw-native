#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00306CE0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604e94;
extern int DAT_00604e98;

// USA 00604E88 <- EU 00604E60 (Ghidra, non-matching)
// GLOBAL DAT_00604e94 undefined4
// GLOBAL DAT_00604e98 int

void func_00604E88(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604e94);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00306CE0(puVar1,param_1);
    iVar3 = DAT_00604e98 + 0x54;
    *piVar2 = DAT_00604e98;
    piVar2[200] = iVar3;
  }
  return;
}

