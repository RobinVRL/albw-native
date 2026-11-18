// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556E64(int param_1);
extern int *DAT_00327a50;

// USA 00327A4C <- EU 00327A28 (Ghidra, non-matching)
// GLOBAL DAT_00327a50 int *

void func_00327A4C(void)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = DAT_00327a50;
  bVar2 = func_00556E64(*DAT_00327a50);
  if (!bVar2) {
    *(undefined1 *)(*(int *)(*piVar1 + 0x10) + 0x6c7) = 1;
    return;
  }
  return;
}

