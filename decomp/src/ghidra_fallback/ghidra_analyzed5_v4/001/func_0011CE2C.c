#include "ghidra_types.h"

extern undefined *DAT_0011ce40;
extern int DAT_0011ce44;

// USA 0011CE2C <- EU 0011CE2C (Ghidra, non-matching)
// GLOBAL DAT_0011ce40 undefined *
// GLOBAL DAT_0011ce44 int

int func_0011CE2C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ce44;
  pcVar1 = DAT_0011ce40;
  iVar3 = DAT_0011ce44 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

