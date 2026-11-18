#include "ghidra_types.h"

extern undefined *DAT_0011dfa4;
extern int DAT_0011dfa8;

// USA 0011DF90 <- EU 0011DF90 (Ghidra, non-matching)
// GLOBAL DAT_0011dfa4 undefined *
// GLOBAL DAT_0011dfa8 int

int func_0011DF90(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dfa8;
  pcVar1 = DAT_0011dfa4;
  iVar3 = DAT_0011dfa8 + 0x70;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

