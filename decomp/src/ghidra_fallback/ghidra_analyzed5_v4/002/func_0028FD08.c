#include "ghidra_types.h"

extern int func_00255C38(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int func_00537AD4(int param_1);
extern int func_00537C14(int param_1,int param_2);
extern int *DAT_0028fe24;

// USA 0028FD08 <- EU 0028FD30 (Ghidra, non-matching)
// GLOBAL DAT_0028fe24 int *

bool func_0028FD08(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = func_0052E8A0(*(int *)(param_1 + 0x10));
  if ((bVar1) && (*(short *)(param_1 + 0x42) == 0x99)) {
    if (*(char *)(*DAT_0028fe24 + 0x18) == '\a' || *(char *)(*DAT_0028fe24 + 0x18) == '%') {
      iVar2 = func_00255C38((int)*(char *)(*(int *)(param_1 + 0x10) + 0x6b1));
      if (((iVar2 - 0x12U < 5) &&
          (iVar2 = func_00537C14(*(int *)(param_1 + 0x10) + 0x40c,iVar2), iVar2 == 5)) ||
         ((iVar2 = func_00255C38((int)*(char *)(*(int *)(param_1 + 0x10) + 0x6a5)),
          iVar2 - 0x12U < 5 &&
          (iVar2 = func_00537C14(*(int *)(param_1 + 0x10) + 0x40c,iVar2), iVar2 == 5))))
      goto LAB_0028fe0c;
    }
    else {
      iVar2 = func_00537AD4(*(int *)(param_1 + 0x10) + 0x40c);
      if (0 < iVar2) {
LAB_0028fe0c:
        iVar2 = func_002D55D0(*(int *)(param_1 + 0x48),0x9a);
        return iVar2 != 0;
      }
    }
  }
  return false;
}

