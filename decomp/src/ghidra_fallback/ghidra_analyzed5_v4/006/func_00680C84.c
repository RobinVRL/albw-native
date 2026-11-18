#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004530E4(undefined4 *param_1);
extern undefined4 *DAT_00680cb8;

// USA 00680C84 <- EU 00680C5C (Ghidra, non-matching)
// GLOBAL DAT_00680cb8 undefined4 *

int func_00680C84(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_00680cb8;
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_00680cb8,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x284,param_1,4);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = func_004530E4(puVar2);
  }
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return iVar3;
}

