#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00242ED4(undefined4 *param_1,uint *param_2);
extern int DAT_00605e48;

// USA 00605E3C <- EU 00605E14 (Ghidra, non-matching)
// GLOBAL DAT_00605e48 int

void func_00605E3C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x470);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00242ED4(puVar1,param_1);
    iVar3 = DAT_00605e48 + 0x54;
    *piVar2 = DAT_00605e48;
    piVar2[200] = iVar3;
  }
  return;
}

