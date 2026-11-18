#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0043A908(undefined4 *param_1);
extern undefined4 *DAT_00680bdc;

// USA 00680BA8 <- EU 00680B80 (Ghidra, non-matching)
// GLOBAL DAT_00680bdc undefined4 *

int * func_00680BA8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = DAT_00680bdc;
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_00680bdc,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x1bc,param_1,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_0043A908(puVar2);
  }
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return piVar3;
}

