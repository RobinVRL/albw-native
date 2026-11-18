#include "ghidra_types.h"

extern int func_004A1520();
extern undefined4 DAT_0048ba00;
extern int *DAT_0048ba04;

// USA 0048B9D0 <- EU 0048B9A8 (Ghidra, non-matching)
// GLOBAL DAT_0048ba00 undefined4
// GLOBAL DAT_0048ba04 int *

undefined4 func_0048B9D0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_0048ba04;
  *param_1 = DAT_0048ba00;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    piVar2 = *(int **)(iVar3 + 0x34);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    *piVar1 = 0;
  }
  func_004A1520(param_1);
  return (undefined4)param_1;
}

