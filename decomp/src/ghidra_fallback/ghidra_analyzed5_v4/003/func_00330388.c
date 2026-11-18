#include "ghidra_types.h"

extern int func_004A0AA8(int param_1);
extern int func_00580CE4(int param_1);
extern int *DAT_003303ac;

// USA 00330388 <- EU 00330364 (Ghidra, non-matching)
// GLOBAL DAT_003303ac int *

undefined4 func_00330388(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(char *)(iVar1 + 0x1f0) != '\0') && (*(char *)(*DAT_003303ac + 0x22) != '\0')) {
    func_00580CE4(iVar1 + 0x1d8);
    return func_004A0AA8(iVar1 + 0x10);
  }
  return 0;
}

