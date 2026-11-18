#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002830F8(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00605fc8;
extern int DAT_00605fcc;
extern undefined4 *DAT_00605fd0;

// USA 00605FA8 <- EU 00605F80 (Ghidra, non-matching)
// GLOBAL DAT_00605fc8 undefined4
// GLOBAL DAT_00605fcc int
// GLOBAL DAT_00605fd0 undefined4 *

int * func_00605FA8(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00605fc8);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_002830F8(puVar2,param_1);
    iVar1 = DAT_00605fcc;
    piVar3[200] = DAT_00605fcc + 0xbc;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_00605fd0);
  }
  return piVar3;
}

