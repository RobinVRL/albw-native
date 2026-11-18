#include "ghidra_types.h"

extern undefined *DAT_0011a600;
extern int DAT_0011a604;

// USA 0011A5EC <- EU 0011A5EC (Ghidra, non-matching)
// GLOBAL DAT_0011a600 undefined *
// GLOBAL DAT_0011a604 int

int func_0011A5EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a604;
  pcVar1 = DAT_0011a600;
  iVar3 = DAT_0011a604 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

