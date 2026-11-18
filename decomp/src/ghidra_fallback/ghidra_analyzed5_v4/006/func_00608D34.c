#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00372A1C(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00608d54;
extern int DAT_00608d58;
extern undefined4 *DAT_00608d5c;

// USA 00608D34 <- EU 00608D0C (Ghidra, non-matching)
// GLOBAL DAT_00608d54 undefined4
// GLOBAL DAT_00608d58 int
// GLOBAL DAT_00608d5c undefined4 *

int * func_00608D34(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00608d54);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00372A1C(puVar2,param_1);
    iVar1 = DAT_00608d58;
    piVar3[200] = DAT_00608d58 + 0xb8;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_00608d5c);
  }
  return piVar3;
}

