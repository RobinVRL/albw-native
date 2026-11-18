#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_003310e4;

// USA 003310B8 <- EU 00331094 (Ghidra, non-matching)
// GLOBAL DAT_003310e4 int

int * func_003310B8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_003310e4;
  piVar1[200] = DAT_003310e4 + 0x54;
  piVar1[0x103] = 0;
  *piVar1 = iVar2;
  iVar2 = func_0054D964((int)piVar1,0);
  piVar1[0x104] = iVar2;
  puVar3 = (undefined4 *)func_0010BAB4(0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_004EDC9C(puVar3);
  }
  piVar1[0x105] = (int)puVar4;
  return piVar1;
}

