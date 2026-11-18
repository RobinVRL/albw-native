#include "ghidra_types.h"

extern undefined *DAT_0011a53c;
extern int DAT_0011a540;

// USA 0011A528 <- EU 0011A528 (Ghidra, non-matching)
// GLOBAL DAT_0011a53c undefined *
// GLOBAL DAT_0011a540 int

int func_0011A528(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a540;
  pcVar1 = DAT_0011a53c;
  iVar3 = DAT_0011a540 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

