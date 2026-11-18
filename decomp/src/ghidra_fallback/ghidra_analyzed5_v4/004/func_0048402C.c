#include "ghidra_types.h"

extern int func_002BEA20(int param_1);
extern int *DAT_00484068;

// USA 0048402C <- EU 00484004 (Ghidra, non-matching)
// GLOBAL DAT_00484068 int *

undefined4 func_0048402C(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x90) = 0;
  if ((*(int *)(*DAT_00484068 + 0x44) == 0) &&
     ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0)) {
    iVar1 = *(int *)(param_1 + 0x94) + -1;
    *(int *)(param_1 + 0x94) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 0x94) = 8;
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = 8;
  }
  return func_002BEA20(param_1);
}

