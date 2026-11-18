#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00473070(undefined4 *param_1);
extern undefined4 *DAT_0068121c;

// USA 006811E8 <- EU 006811C0 (Ghidra, non-matching)
// GLOBAL DAT_0068121c undefined4 *

int * func_006811E8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = DAT_0068121c;
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_0068121c,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x154,param_1,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00473070(puVar2);
  }
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return piVar3;
}

