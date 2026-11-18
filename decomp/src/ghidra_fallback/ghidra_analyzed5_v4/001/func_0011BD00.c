#include "ghidra_types.h"

extern undefined *DAT_0011bd14;
extern int DAT_0011bd18;

// USA 0011BD00 <- EU 0011BD00 (Ghidra, non-matching)
// GLOBAL DAT_0011bd14 undefined *
// GLOBAL DAT_0011bd18 int

int func_0011BD00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bd18;
  pcVar1 = DAT_0011bd14;
  iVar3 = DAT_0011bd18 + 0x308;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

