#include "ghidra_types.h"

extern undefined *DAT_0011b064;
extern int DAT_0011b068;

// USA 0011B050 <- EU 0011B050 (Ghidra, non-matching)
// GLOBAL DAT_0011b064 undefined *
// GLOBAL DAT_0011b068 int

int func_0011B050(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b068;
  pcVar1 = DAT_0011b064;
  iVar3 = DAT_0011b068 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

