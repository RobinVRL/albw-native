#include "ghidra_types.h"

extern int func_001B7980(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_0016b8d4;
extern int *DAT_0016b8d8;

// USA 0016B880 <- EU 0016B880 (Ghidra, non-matching)
// GLOBAL DAT_0016b8d4 undefined4
// GLOBAL DAT_0016b8d8 int *

undefined4 * func_0016B880(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_0016b8d8;
  *param_1 = DAT_0016b8d4;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    func_001B7980((undefined4 *)(iVar3 + 0xf34));
    func_001B7980((undefined4 *)(iVar3 + 0xefc));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

