#include "ghidra_types.h"

extern int func_00255C38(int param_1);
extern int func_00537AD4(int param_1);
extern int func_00537C14(int param_1,int param_2);
extern int *DAT_0053f138;

// USA 0053F098 <- EU 0053F070 (Ghidra, non-matching)
// GLOBAL DAT_0053f138 int *

undefined4 func_0053F098(int param_1)

{
  int iVar1;
  
  if (*(char *)(*DAT_0053f138 + 0x18) == '\a' || *(char *)(*DAT_0053f138 + 0x18) == '%') {
    iVar1 = func_00255C38((int)*(char *)(*(int *)(param_1 + 0x10) + 0x6b1));
    if ((4 < iVar1 - 0x12U) ||
       (iVar1 = func_00537C14(*(int *)(param_1 + 0x10) + 0x40c,iVar1), iVar1 != 5)) {
      iVar1 = func_00255C38((int)*(char *)(*(int *)(param_1 + 0x10) + 0x6a5));
      if (4 < iVar1 - 0x12U) {
        return 0;
      }
      iVar1 = func_00537C14(*(int *)(param_1 + 0x10) + 0x40c,iVar1);
      if (iVar1 != 5) {
        return 0;
      }
    }
  }
  else {
    iVar1 = func_00537AD4(*(int *)(param_1 + 0x10) + 0x40c);
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}

