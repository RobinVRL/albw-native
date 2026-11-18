#include "ghidra_types.h"

extern int func_004929B8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_004a99cc;
extern int *DAT_004a99d0;

// USA 004A99AC <- EU 004A9984 (Ghidra, non-matching)
// GLOBAL DAT_004a99cc undefined4
// GLOBAL DAT_004a99d0 int *

undefined4 * func_004A99AC(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_004a99d0;
  *param_1 = DAT_004a99cc;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    func_004929B8((undefined4 *)(*piVar1 + 0xbf50));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

