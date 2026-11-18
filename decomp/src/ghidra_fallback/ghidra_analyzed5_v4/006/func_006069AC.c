#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002FC4CC(undefined4 *param_1,uint *param_2);
extern int DAT_006069b8;

// USA 006069AC <- EU 00606984 (Ghidra, non-matching)
// GLOBAL DAT_006069b8 int

void func_006069AC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x910);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002FC4CC(puVar1,param_1);
    iVar3 = DAT_006069b8 + 0x84;
    *piVar2 = DAT_006069b8;
    piVar2[200] = iVar3;
  }
  return;
}

