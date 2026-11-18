#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00242ED4(undefined4 *param_1,uint *param_2);
extern int DAT_00605e80;

// USA 00605E74 <- EU 00605E4C (Ghidra, non-matching)
// GLOBAL DAT_00605e80 int

void func_00605E74(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x470);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00242ED4(puVar1,param_1);
    iVar3 = DAT_00605e80 + 0x54;
    *piVar2 = DAT_00605e80;
    piVar2[200] = iVar3;
  }
  return;
}

