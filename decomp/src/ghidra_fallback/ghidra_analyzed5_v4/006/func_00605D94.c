#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00242ED4(undefined4 *param_1,uint *param_2);
extern int DAT_00605da0;

// USA 00605D94 <- EU 00605D6C (Ghidra, non-matching)
// GLOBAL DAT_00605da0 int

void func_00605D94(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x470);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00242ED4(puVar1,param_1);
    iVar3 = DAT_00605da0 + 0x54;
    *piVar2 = DAT_00605da0;
    piVar2[200] = iVar3;
  }
  return;
}

