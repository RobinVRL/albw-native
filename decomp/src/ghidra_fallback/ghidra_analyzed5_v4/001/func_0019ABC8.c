#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004A1520();
extern undefined4 DAT_0019ac18;
extern int *DAT_0019ac1c;
extern undefined *DAT_0019ac20;

// USA 0019ABC8 <- EU 0019ABC8 (Ghidra, non-matching)
// GLOBAL DAT_0019ac18 undefined4
// GLOBAL DAT_0019ac1c int *
// GLOBAL DAT_0019ac20 undefined *

undefined4 * func_0019ABC8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_0019ac1c;
  *param_1 = DAT_0019ac18;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    func_00100950(*piVar1 + 0x10,DAT_0019ac20,400,4);
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

