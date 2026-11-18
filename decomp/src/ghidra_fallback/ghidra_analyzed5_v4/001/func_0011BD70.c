#include "ghidra_types.h"

extern undefined *DAT_0011bd84;
extern int DAT_0011bd88;

// USA 0011BD70 <- EU 0011BD70 (Ghidra, non-matching)
// GLOBAL DAT_0011bd84 undefined *
// GLOBAL DAT_0011bd88 int

int func_0011BD70(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bd88;
  pcVar1 = DAT_0011bd84;
  iVar3 = DAT_0011bd88 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

