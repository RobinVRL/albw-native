#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00261468(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006074a8;
extern int DAT_006074ac;

// USA 0060749C <- EU 00607474 (Ghidra, non-matching)
// GLOBAL DAT_006074a8 undefined4
// GLOBAL DAT_006074ac int

void func_0060749C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006074a8);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00261468(puVar1,param_1);
    iVar3 = DAT_006074ac + 0x58;
    *piVar2 = DAT_006074ac;
    piVar2[200] = iVar3;
  }
  return;
}

