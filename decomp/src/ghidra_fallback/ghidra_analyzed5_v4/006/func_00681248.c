#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0047353C(undefined4 *param_1);
extern undefined4 *DAT_0068127c;

// USA 00681248 <- EU 00681220 (Ghidra, non-matching)
// GLOBAL DAT_0068127c undefined4 *

int * func_00681248(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar1 = DAT_0068127c;
  if (param_1 == (int *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_0068127c,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x164,param_1,4);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_0047353C(puVar2);
  }
  if (iVar4 != 1) {
    func_0010983C(*puVar1,iVar4);
  }
  return piVar3;
}

