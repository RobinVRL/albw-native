#include "ghidra_types.h"

extern undefined *DAT_0011afbc;
extern int DAT_0011afc0;

// USA 0011AFA8 <- EU 0011AFA8 (Ghidra, non-matching)
// GLOBAL DAT_0011afbc undefined *
// GLOBAL DAT_0011afc0 int

int func_0011AFA8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011afc0;
  pcVar1 = DAT_0011afbc;
  iVar3 = DAT_0011afc0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

