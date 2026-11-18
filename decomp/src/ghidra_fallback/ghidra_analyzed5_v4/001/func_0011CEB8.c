#include "ghidra_types.h"

extern undefined *DAT_0011cecc;
extern int DAT_0011ced0;

// USA 0011CEB8 <- EU 0011CEB8 (Ghidra, non-matching)
// GLOBAL DAT_0011cecc undefined *
// GLOBAL DAT_0011ced0 int

int func_0011CEB8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ced0;
  pcVar1 = DAT_0011cecc;
  iVar3 = DAT_0011ced0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

