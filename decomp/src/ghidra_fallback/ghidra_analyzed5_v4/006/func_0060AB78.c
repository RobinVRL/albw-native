#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001779DC(undefined4 *param_1,uint *param_2);
extern int DAT_0060ab84;

// USA 0060AB78 <- EU 0060AB50 (Ghidra, non-matching)
// GLOBAL DAT_0060ab84 int

void func_0060AB78(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x510);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_001779DC(puVar1,param_1);
    iVar3 = DAT_0060ab84 + 0x54;
    *piVar2 = DAT_0060ab84;
    piVar2[200] = iVar3;
  }
  return;
}

