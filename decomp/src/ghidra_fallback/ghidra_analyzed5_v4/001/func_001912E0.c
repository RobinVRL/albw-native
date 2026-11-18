#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006597CC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0019136c;
extern int *DAT_00191370;
extern int *DAT_00191374;
extern int *DAT_00191378;
extern int *DAT_0019137c;

// USA 001912E0 <- EU 001912E0 (Ghidra, non-matching)
// GLOBAL DAT_0019136c int *
// GLOBAL DAT_00191370 int *
// GLOBAL DAT_00191374 int *
// GLOBAL DAT_00191378 int *
// GLOBAL DAT_0019137c int *

undefined4 func_001912E0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0052FBA0(*DAT_0019136c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((iVar1 != 0) &&
     ((((iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_00191370 || (iVar1 == *DAT_00191374)) ||
       (iVar1 == *DAT_00191378)) || (iVar1 == *DAT_0019137c)))) {
    return 0;
  }
  func_006597CC((undefined4 *)(param_1 + 0x4f8),5);
  return 1;
}

