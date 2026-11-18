#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00287a60;

// USA 002879C8 <- EU 002879F0 (Ghidra, non-matching)
// GLOBAL DAT_00287a60 int *

undefined4 func_002879C8(int param_1,int param_2)

{
  int iVar1;
  
  if ((((*(char *)(param_1 + 0x415) == '\0') &&
       (iVar1 = func_0052FBA0(*DAT_00287a60 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar1 != 0)) &&
      (*(int *)(param_2 + 0x2c) != 0)) &&
     ((*(char *)(*(int *)(param_2 + 0x2c) + 3) == '\x01' &&
      (*(undefined1 *)(param_1 + 0x415) = 1, *(char *)(param_1 + 0x424) != '\0')))) {
    *(undefined1 *)(param_1 + 0x425) = 1;
  }
  return 0;
}

