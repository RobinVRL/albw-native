#include "ghidra_types.h"

extern undefined *DAT_0011ba90;
extern int DAT_0011ba94;

// USA 0011BA7C <- EU 0011BA7C (Ghidra, non-matching)
// GLOBAL DAT_0011ba90 undefined *
// GLOBAL DAT_0011ba94 int

int func_0011BA7C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ba94;
  pcVar1 = DAT_0011ba90;
  iVar3 = DAT_0011ba94 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

