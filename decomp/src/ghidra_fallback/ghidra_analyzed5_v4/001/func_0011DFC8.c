#include "ghidra_types.h"

extern undefined *DAT_0011dfdc;
extern int DAT_0011dfe0;

// USA 0011DFC8 <- EU 0011DFC8 (Ghidra, non-matching)
// GLOBAL DAT_0011dfdc undefined *
// GLOBAL DAT_0011dfe0 int

int func_0011DFC8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011dfe0;
  pcVar1 = DAT_0011dfdc;
  iVar3 = DAT_0011dfe0 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

