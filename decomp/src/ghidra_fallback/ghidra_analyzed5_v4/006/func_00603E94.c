#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001768A4(undefined4 *param_1,uint *param_2);
extern int DAT_00603ea0;

// USA 00603E94 <- EU 00603E6C (Ghidra, non-matching)
// GLOBAL DAT_00603ea0 int

void func_00603E94(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x550);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_001768A4(puVar1,param_1);
    iVar3 = DAT_00603ea0 + 0x90;
    *piVar2 = DAT_00603ea0;
    piVar2[200] = iVar3;
  }
  return;
}

