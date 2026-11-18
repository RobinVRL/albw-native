#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0022F198(undefined4 *param_1,uint *param_2);
extern int DAT_0060a47c;

// USA 0060A470 <- EU 0060A448 (Ghidra, non-matching)
// GLOBAL DAT_0060a47c int

void func_0060A470(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xaa0);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0022F198(puVar1,param_1);
    iVar3 = DAT_0060a47c + 0x84;
    *piVar2 = DAT_0060a47c;
    piVar2[200] = iVar3;
  }
  return;
}

