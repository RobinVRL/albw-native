#include "ghidra_types.h"

extern undefined *DAT_0011aa28;
extern int DAT_0011aa2c;

// USA 0011AA14 <- EU 0011AA14 (Ghidra, non-matching)
// GLOBAL DAT_0011aa28 undefined *
// GLOBAL DAT_0011aa2c int

int func_0011AA14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aa2c;
  pcVar1 = DAT_0011aa28;
  iVar3 = DAT_0011aa2c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

