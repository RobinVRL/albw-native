#include "ghidra_types.h"

extern undefined *DAT_00119e58;
extern int DAT_00119e5c;

// USA 00119E44 <- EU 00119E44 (Ghidra, non-matching)
// GLOBAL DAT_00119e58 undefined *
// GLOBAL DAT_00119e5c int

int func_00119E44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119e5c;
  pcVar1 = DAT_00119e58;
  iVar3 = DAT_00119e5c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

