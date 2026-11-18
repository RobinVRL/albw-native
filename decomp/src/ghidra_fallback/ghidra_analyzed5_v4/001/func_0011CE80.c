#include "ghidra_types.h"

extern undefined *DAT_0011ce94;
extern int DAT_0011ce98;

// USA 0011CE80 <- EU 0011CE80 (Ghidra, non-matching)
// GLOBAL DAT_0011ce94 undefined *
// GLOBAL DAT_0011ce98 int

int func_0011CE80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ce98;
  pcVar1 = DAT_0011ce94;
  iVar3 = DAT_0011ce98 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

