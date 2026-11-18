#include "ghidra_types.h"

extern undefined *DAT_0011db28;
extern int DAT_0011db2c;

// USA 0011DB14 <- EU 0011DB14 (Ghidra, non-matching)
// GLOBAL DAT_0011db28 undefined *
// GLOBAL DAT_0011db2c int

int func_0011DB14(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011db2c;
  pcVar1 = DAT_0011db28;
  iVar3 = DAT_0011db2c + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

