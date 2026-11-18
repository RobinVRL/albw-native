#include "ghidra_types.h"

extern undefined *DAT_0011e228;
extern int DAT_0011e22c;

// USA 0011E214 <- EU 0011E214 (Ghidra, non-matching)
// GLOBAL DAT_0011e228 undefined *
// GLOBAL DAT_0011e22c int

int func_0011E214(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e22c;
  pcVar1 = DAT_0011e228;
  iVar3 = DAT_0011e22c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

