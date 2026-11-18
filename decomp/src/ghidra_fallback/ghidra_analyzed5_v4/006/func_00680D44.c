#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00486CB4(undefined4 *param_1,int param_2);
extern undefined4 *DAT_00680d90;
extern int DAT_00680d94;

// USA 00680D44 <- EU 00680D1C (Ghidra, non-matching)
// GLOBAL DAT_00680d90 undefined4 *
// GLOBAL DAT_00680d94 int

int * func_00680D44(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = DAT_00680d90;
  if (param_1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_00680d90,param_1);
  }
  puVar3 = (undefined4 *)func_0010CF28(0xe4,param_1,4);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00486CB4(puVar3,1);
    iVar2 = DAT_00680d94;
    piVar4[0xe] = DAT_00680d94 + 0xac;
    *piVar4 = iVar2;
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return piVar4;
}

