#include "ghidra_types.h"

extern int func_00142474(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0058e338;
extern int *DAT_0058e33c;

// USA 0058E2D0 <- EU 0058E2A8 (Ghidra, non-matching)
// GLOBAL DAT_0058e338 int *
// GLOBAL DAT_0058e33c int *

bool func_0058E2D0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) == 0) &&
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x200)) {
    iVar2 = func_0052FBA0(*DAT_0058e338 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((iVar2 == 0) || (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_0058e33c)) {
      bVar1 = func_00142474(param_1 + -0x40c,param_2);
      return bVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + -0x135) = 1;
  }
  return false;
}

