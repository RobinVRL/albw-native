#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0021E578(undefined4 *param_1,uint *param_2);
extern int DAT_0060b0c8;

// USA 0060B0BC <- EU 0060B094 (Ghidra, non-matching)
// GLOBAL DAT_0060b0c8 int

void func_0060B0BC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xa30);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_0021E578(puVar1,param_1);
    iVar3 = DAT_0060b0c8 + 0x84;
    *piVar2 = DAT_0060b0c8;
    piVar2[200] = iVar3;
  }
  return;
}

