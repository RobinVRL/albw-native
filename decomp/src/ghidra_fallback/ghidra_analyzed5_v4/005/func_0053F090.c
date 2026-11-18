#include "ghidra_types.h"

extern int func_00255C38(int param_1);
extern int func_00537AD4(int param_1);
extern int func_00537C14(int param_1,int param_2);
extern int *DAT_0053f138;

// USA 0053F090 <- EU 0053F068 (Ghidra, non-matching)
// GLOBAL DAT_0053f138 int *

undefined4 func_0053F090(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(char *)(*DAT_0053f138 + 0x18) == '\a' || *(char *)(*DAT_0053f138 + 0x18) == '%') {
    iVar2 = func_00255C38((int)*(char *)(*(int *)(iVar1 + 0x10) + 0x6b1));
    if ((4 < iVar2 - 0x12U) ||
       (iVar2 = func_00537C14(*(int *)(iVar1 + 0x10) + 0x40c,iVar2), iVar2 != 5)) {
      iVar2 = func_00255C38((int)*(char *)(*(int *)(iVar1 + 0x10) + 0x6a5));
      if (4 < iVar2 - 0x12U) {
        return 0;
      }
      iVar1 = func_00537C14(*(int *)(iVar1 + 0x10) + 0x40c,iVar2);
      if (iVar1 != 5) {
        return 0;
      }
    }
  }
  else {
    iVar1 = func_00537AD4(*(int *)(iVar1 + 0x10) + 0x40c);
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}

