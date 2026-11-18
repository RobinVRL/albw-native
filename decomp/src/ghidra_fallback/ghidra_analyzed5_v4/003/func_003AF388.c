#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003af404;

// USA 003AF388 <- EU 003AF364 (Ghidra, non-matching)
// GLOBAL DAT_003af404 int *

undefined4 func_003AF388(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x40) <= iVar1) {
      iVar1 = iVar1 - *(int *)(param_1 + 0x40);
    }
    iVar1 = func_0052FBA0(*DAT_003af404 + 0x3dbbc,*(uint *)(*(int *)(param_1 + 0x3c) + iVar1 * 4));
    if (iVar1 == 0) {
      if (0 < *(int *)(param_1 + 0x48)) {
        iVar1 = *(int *)(param_1 + 0x44) + 1;
        *(int *)(param_1 + 0x44) = iVar1;
        if (*(int *)(param_1 + 0x40) <= iVar1) {
          *(undefined4 *)(param_1 + 0x44) = 0;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      }
    }
    else if ((*(char *)(param_1 + 0xc) < '\x02') || (2 < *(int *)(param_1 + 0x48))) {
      return 0;
    }
  }
  return 1;
}

