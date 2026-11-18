#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00514b00;
extern int *DAT_00514b04;

// USA 00514AA0 <- EU 00514A78 (Ghidra, non-matching)
// GLOBAL DAT_00514b00 int *
// GLOBAL DAT_00514b04 int *

undefined4 func_00514AA0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x548) == '\0') {
    if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x11')) {
      *(undefined1 *)(param_1 + 0x514) = 1;
      return 1;
    }
  }
  else if (((*(char *)(param_1 + 0x548) == '\x05') &&
           (iVar1 = func_0052FBA0(*DAT_00514b00 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar1 != 0))
          && (iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_00514b04)) {
    return 1;
  }
  return 0;
}

