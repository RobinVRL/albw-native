#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0049116C(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0023327c;
extern int *DAT_00233280;
extern int DAT_00233284;
extern undefined *DAT_00233288;

// USA 00233214 <- EU 00233214 (Ghidra, non-matching)
// GLOBAL DAT_0023327c undefined4
// GLOBAL DAT_00233280 int *
// GLOBAL DAT_00233284 int
// GLOBAL DAT_00233288 undefined *

undefined4 * func_00233214(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_00233280;
  *param_1 = DAT_0023327c;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    func_0049116C((undefined4 *)(iVar3 + 0xb8e8));
    func_0049116C((undefined4 *)(iVar3 + 0xb8cc));
    func_00100950(iVar3 + 0x10,DAT_00233288,DAT_00233284,2);
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

