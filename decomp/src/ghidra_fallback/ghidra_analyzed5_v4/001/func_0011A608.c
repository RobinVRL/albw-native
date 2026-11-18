#include "ghidra_types.h"

extern undefined *DAT_0011a61c;
extern int DAT_0011a620;

// USA 0011A608 <- EU 0011A608 (Ghidra, non-matching)
// GLOBAL DAT_0011a61c undefined *
// GLOBAL DAT_0011a620 int

int func_0011A608(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a620;
  pcVar1 = DAT_0011a61c;
  iVar3 = DAT_0011a620 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

