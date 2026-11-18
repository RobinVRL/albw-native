#include "ghidra_types.h"

extern undefined *DAT_0011e404;
extern int DAT_0011e408;

// USA 0011E3F0 <- EU 0011E3F0 (Ghidra, non-matching)
// GLOBAL DAT_0011e404 undefined *
// GLOBAL DAT_0011e408 int

int func_0011E3F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e408;
  pcVar1 = DAT_0011e404;
  iVar3 = DAT_0011e408 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

