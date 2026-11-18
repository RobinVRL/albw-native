#include "ghidra_types.h"

extern int func_00110CFC(undefined4 param_1,uint *param_2);
extern int func_00111074(undefined4 param_1,uint *param_2);
extern int func_00111A14(void);
extern undefined4 DAT_00100c10;
extern undefined4 DAT_00100c14;

// USA 00100BC4 <- EU 00100BC4 (Ghidra, non-matching)
// GLOBAL DAT_00100c10 undefined4
// GLOBAL DAT_00100c14 undefined4

int func_00100BC4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_00111A14();
  iVar2 = func_00111074(0,(uint *)0x0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  iVar2 = func_00110CFC(0,(uint *)0x0);
  *(int *)(iVar1 + 0xc) = iVar2;
  return iVar2;
}

