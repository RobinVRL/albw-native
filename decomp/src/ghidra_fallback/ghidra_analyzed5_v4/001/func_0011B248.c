#include "ghidra_types.h"

extern undefined *DAT_0011b25c;
extern int DAT_0011b260;

// USA 0011B248 <- EU 0011B248 (Ghidra, non-matching)
// GLOBAL DAT_0011b25c undefined *
// GLOBAL DAT_0011b260 int

int func_0011B248(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b260;
  pcVar1 = DAT_0011b25c;
  iVar3 = DAT_0011b260 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

