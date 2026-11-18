#include "ghidra_types.h"

extern int func_001E6AB4(int param_1);
extern int func_004EF408(int param_1,int param_2);
extern int *DAT_00184534;

// USA 001844E8 <- EU 001844E8 (Ghidra, non-matching)
// GLOBAL DAT_00184534 int *

undefined4 func_001844E8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00184534;
  if (*(char *)(param_1 + 0x9c6) == '\x02') {
    *(ushort *)(*DAT_00184534 + 0x20) = (ushort)*(byte *)(param_1 + 0x9fc);
    iVar2 = func_004EF408(*piVar1,2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x9c6) = 3;
    }
    return 0;
  }
  return func_001E6AB4(param_1);
}

