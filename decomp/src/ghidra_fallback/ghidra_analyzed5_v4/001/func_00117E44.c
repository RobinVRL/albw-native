#include "ghidra_types.h"

extern undefined *DAT_00117e58;
extern int DAT_00117e5c;

// USA 00117E44 <- EU 00117E44 (Ghidra, non-matching)
// GLOBAL DAT_00117e58 undefined *
// GLOBAL DAT_00117e5c int

int func_00117E44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e5c;
  pcVar1 = DAT_00117e58;
  iVar3 = DAT_00117e5c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

