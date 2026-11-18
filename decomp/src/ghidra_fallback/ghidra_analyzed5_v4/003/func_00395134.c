#include "ghidra_types.h"

extern int DAT_00395160;
extern int DAT_00395164;

// USA 00395134 <- EU 00395110 (Ghidra, non-matching)
// GLOBAL DAT_00395160 int
// GLOBAL DAT_00395164 int

undefined4 func_00395134(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(char *)(DAT_00395160 + iVar1) == '\v') || (*(char *)(DAT_00395164 + iVar1) == '\v')) &&
     ((*(char *)(DAT_00395160 + iVar1) == '\r' || (*(char *)(iVar1 + 0x1489) == '\r')))) {
    return 1;
  }
  return 0;
}

