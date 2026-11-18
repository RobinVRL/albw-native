#include "ghidra_types.h"

extern undefined *DAT_0011d968;
extern int DAT_0011d96c;

// USA 0011D954 <- EU 0011D954 (Ghidra, non-matching)
// GLOBAL DAT_0011d968 undefined *
// GLOBAL DAT_0011d96c int

int func_0011D954(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d96c;
  pcVar1 = DAT_0011d968;
  iVar3 = DAT_0011d96c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

