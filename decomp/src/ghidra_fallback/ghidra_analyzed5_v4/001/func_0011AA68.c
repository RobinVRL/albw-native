#include "ghidra_types.h"

extern undefined *DAT_0011aa7c;
extern int DAT_0011aa80;

// USA 0011AA68 <- EU 0011AA68 (Ghidra, non-matching)
// GLOBAL DAT_0011aa7c undefined *
// GLOBAL DAT_0011aa80 int

int func_0011AA68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aa80;
  pcVar1 = DAT_0011aa7c;
  iVar3 = DAT_0011aa80 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

