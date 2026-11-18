#include "ghidra_types.h"

extern undefined *DAT_0011b09c;
extern int DAT_0011b0a0;

// USA 0011B088 <- EU 0011B088 (Ghidra, non-matching)
// GLOBAL DAT_0011b09c undefined *
// GLOBAL DAT_0011b0a0 int

int func_0011B088(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b0a0;
  pcVar1 = DAT_0011b09c;
  iVar3 = DAT_0011b0a0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

