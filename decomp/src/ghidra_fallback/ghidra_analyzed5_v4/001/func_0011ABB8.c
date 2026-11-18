#include "ghidra_types.h"

extern undefined *DAT_0011abcc;
extern int DAT_0011abd0;

// USA 0011ABB8 <- EU 0011ABB8 (Ghidra, non-matching)
// GLOBAL DAT_0011abcc undefined *
// GLOBAL DAT_0011abd0 int

int func_0011ABB8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011abd0;
  pcVar1 = DAT_0011abcc;
  iVar3 = DAT_0011abd0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

