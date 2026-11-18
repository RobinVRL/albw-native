#include "ghidra_types.h"

extern int func_0012E484(int param_1,undefined4 param_2);
extern int DAT_0012e044;

// USA 0012E00C <- EU 0012E00C (Ghidra, non-matching)
// GLOBAL DAT_0012e044 int

undefined4 func_0012E00C(int param_1)

{
  int iVar1;
  uint in_r2;
  bool bVar2;
  
  iVar1 = *(int *)(DAT_0012e044 + param_1);
  if (iVar1 != 0) {
    bVar2 = *(char *)(iVar1 + 0xd) == '\0';
    if (bVar2) {
      in_r2 = (uint)*(byte *)(iVar1 + 0xe);
    }
    if (!bVar2 || in_r2 != 0) {
      return func_0012E484(param_1,iVar1);
    }
  }
  return 0;
}

