#include "ghidra_types.h"

extern undefined *DAT_00117058;
extern int DAT_0011705c;

// USA 00117044 <- EU 00117044 (Ghidra, non-matching)
// GLOBAL DAT_00117058 undefined *
// GLOBAL DAT_0011705c int

int func_00117044(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011705c;
  pcVar1 = DAT_00117058;
  iVar3 = DAT_0011705c + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

