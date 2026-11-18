#include "ghidra_types.h"

extern int func_00664B0C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00307fcc;
extern int *DAT_00307fd0;

// USA 00307F2C <- EU 00307F08 (Ghidra, non-matching)
// GLOBAL DAT_00307fcc float
// GLOBAL DAT_00307fd0 int *

void func_00307F2C(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x560) == '\x05') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x450) + 0x14), *(char *)(iVar1 + 0x1c) == '\0')) {
    if (*(float *)(iVar1 + 0x10) < DAT_00307fcc) {
      if (DAT_00307fcc < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    if (((*(int *)(*DAT_00307fd0 + 0x44) != 0) &&
        (*(int *)(*DAT_00307fd0 + 0x44) == param_1 + 0x458)) && (*(char *)(param_1 + 0x550) == '\0')
       ) {
      if (*(int *)(param_1 + 0x564) == 0x5a) {
        func_00664B0C((undefined4 *)(param_1 + 0x40c),3);
      }
      else {
        *(int *)(param_1 + 0x564) = *(int *)(param_1 + 0x564) + 1;
      }
    }
  }
  return;
}

