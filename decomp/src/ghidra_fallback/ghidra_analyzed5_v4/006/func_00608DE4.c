#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003734F8(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int DAT_00608e10;
extern int DAT_00608e14;
extern undefined4 *DAT_00608e18;

// USA 00608DE4 <- EU 00608DBC (Ghidra, non-matching)
// GLOBAL DAT_00608e10 int
// GLOBAL DAT_00608e14 int
// GLOBAL DAT_00608e18 undefined4 *

int * func_00608DE4(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(0xa00);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_003734F8(puVar2,param_1);
    iVar1 = DAT_00608e14;
    iVar4 = DAT_00608e10 + 200;
    *piVar3 = DAT_00608e10;
    piVar3[200] = iVar4;
    puVar2 = DAT_00608e18;
    *(undefined2 *)(iVar1 + (int)piVar3) = 8;
    func_004C03B8((int)piVar3,puVar2);
  }
  return piVar3;
}

