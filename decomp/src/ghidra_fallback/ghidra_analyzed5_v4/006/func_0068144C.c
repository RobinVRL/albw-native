#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00486CB4(undefined4 *param_1,int param_2);
extern undefined4 *DAT_00681480;

// USA 0068144C <- EU 00681424 (Ghidra, non-matching)
// GLOBAL DAT_00681480 undefined4 *

int * func_0068144C(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = DAT_00681480;
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_00681480,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0xe4,param_1,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00486CB4(puVar2,0);
  }
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return piVar3;
}

