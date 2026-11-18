#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00316CD0(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00606508;
extern int DAT_0060650c;

// USA 006064FC <- EU 006064D4 (Ghidra, non-matching)
// GLOBAL DAT_00606508 undefined4
// GLOBAL DAT_0060650c int

void func_006064FC(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606508);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_00316CD0(puVar1,param_1);
    iVar3 = DAT_0060650c + 0x5c;
    *piVar2 = DAT_0060650c;
    piVar2[200] = iVar3;
  }
  return;
}

