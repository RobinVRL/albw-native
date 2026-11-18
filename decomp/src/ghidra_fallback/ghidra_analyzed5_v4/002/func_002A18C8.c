// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556E64(int param_1);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002a190c;

// USA 002A18C8 <- EU 002A18A4 (Ghidra, non-matching)
// GLOBAL DAT_002a190c int *

void func_002A18C8(int param_1)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  if ((*DAT_002a190c != 0) && (bVar1 = func_00556E64(*DAT_002a190c), !bVar1)) {
    if (*(uint *)(param_1 + 0x910) < *(uint *)(param_1 + 0x914)) {
      *(uint *)(param_1 + 0x910) = *(uint *)(param_1 + 0x910) + 1;
    }
    else {
      func_00661FE4((undefined4 *)(param_1 + 0x938),1);
    }
  }
  return;
}

