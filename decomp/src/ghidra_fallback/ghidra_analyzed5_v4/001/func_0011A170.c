#include "ghidra_types.h"

extern undefined *DAT_0011a184;
extern int DAT_0011a188;

// USA 0011A170 <- EU 0011A170 (Ghidra, non-matching)
// GLOBAL DAT_0011a184 undefined *
// GLOBAL DAT_0011a188 int

int func_0011A170(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a188;
  pcVar1 = DAT_0011a184;
  iVar3 = DAT_0011a188 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

