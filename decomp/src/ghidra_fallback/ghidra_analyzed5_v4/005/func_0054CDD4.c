#include "ghidra_types.h"

extern int func_0054CE64(int param_1,int param_2);
extern int *DAT_0054ce08;
extern int *DAT_0054ce0c;

// USA 0054CDD4 <- EU 0054CDAC (Ghidra, non-matching)
// GLOBAL DAT_0054ce08 int *
// GLOBAL DAT_0054ce0c int *

undefined4 func_0054CDD4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0054CE64(param_1,0xb);
  uVar2 = 0;
  if (uVar1 != 0) {
    if ((((uVar1 & *(uint *)(*(int *)(param_1 + 0x14) + 0x10c)) == 0) &&
        (*(char *)(*DAT_0054ce08 + 0x23) == '\0')) && (*(int *)(*DAT_0054ce0c + 0x44) == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

