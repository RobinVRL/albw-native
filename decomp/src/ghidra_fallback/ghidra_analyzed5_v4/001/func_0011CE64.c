#include "ghidra_types.h"

extern undefined *DAT_0011ce78;
extern int DAT_0011ce7c;

// USA 0011CE64 <- EU 0011CE64 (Ghidra, non-matching)
// GLOBAL DAT_0011ce78 undefined *
// GLOBAL DAT_0011ce7c int

int func_0011CE64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ce7c;
  pcVar1 = DAT_0011ce78;
  iVar3 = DAT_0011ce7c + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

