#include "ghidra_types.h"

extern int DAT_004acc5c;
extern int DAT_004acc60;
extern int DAT_004acc64;

// USA 004ACC38 <- EU 004ACC10 (Ghidra, non-matching)
// GLOBAL DAT_004acc5c int
// GLOBAL DAT_004acc60 int
// GLOBAL DAT_004acc64 int

int func_004ACC38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (((iVar1 != 0) && (iVar2 = (int)*(short *)(DAT_004acc5c + iVar1), -1 < iVar2)) &&
     (iVar2 < *(int *)(DAT_004acc60 + iVar1))) {
    return iVar1 + iVar2 * DAT_004acc64 * 4 + 0x183c;
  }
  return 0;
}

