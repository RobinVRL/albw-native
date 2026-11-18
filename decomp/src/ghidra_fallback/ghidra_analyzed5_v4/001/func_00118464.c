#include "ghidra_types.h"

extern undefined *DAT_00118478;
extern int DAT_0011847c;

// USA 00118464 <- EU 00118464 (Ghidra, non-matching)
// GLOBAL DAT_00118478 undefined *
// GLOBAL DAT_0011847c int

int func_00118464(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011847c;
  pcVar1 = DAT_00118478;
  iVar3 = DAT_0011847c + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

