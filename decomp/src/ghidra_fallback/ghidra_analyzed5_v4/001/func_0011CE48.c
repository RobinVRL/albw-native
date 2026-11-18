#include "ghidra_types.h"

extern undefined *DAT_0011ce5c;
extern int DAT_0011ce60;

// USA 0011CE48 <- EU 0011CE48 (Ghidra, non-matching)
// GLOBAL DAT_0011ce5c undefined *
// GLOBAL DAT_0011ce60 int

int func_0011CE48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ce60;
  pcVar1 = DAT_0011ce5c;
  iVar3 = DAT_0011ce60 + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

