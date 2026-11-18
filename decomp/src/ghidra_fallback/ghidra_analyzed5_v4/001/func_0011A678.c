#include "ghidra_types.h"

extern undefined *DAT_0011a68c;
extern int DAT_0011a690;

// USA 0011A678 <- EU 0011A678 (Ghidra, non-matching)
// GLOBAL DAT_0011a68c undefined *
// GLOBAL DAT_0011a690 int

int func_0011A678(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a690;
  pcVar1 = DAT_0011a68c;
  iVar3 = DAT_0011a690 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

