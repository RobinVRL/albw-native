#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);

// USA 00688AB0 <- EU 00688A88 (Ghidra, non-matching)

undefined4 * func_00688AB0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1 + 5;
  param_1[4] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0;
    iVar3 = 0x1f;
    param_1[3] = puVar1;
    do {
      iVar3 = iVar3 + -1;
      puVar1[iVar2] = puVar1 + iVar2 + 3;
      iVar2 = iVar2 + 3;
    } while (iVar3 != 0);
    param_1[0x62] = 0;
    param_1[4] = puVar1;
    func_0010B3EC(param_1,0x20,(int)(param_1 + 0x65));
  }
  return param_1;
}

