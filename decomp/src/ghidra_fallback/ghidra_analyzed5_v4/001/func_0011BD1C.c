#include "ghidra_types.h"

extern undefined *DAT_0011bd30;
extern int DAT_0011bd34;

// USA 0011BD1C <- EU 0011BD1C (Ghidra, non-matching)
// GLOBAL DAT_0011bd30 undefined *
// GLOBAL DAT_0011bd34 int

int func_0011BD1C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bd34;
  pcVar1 = DAT_0011bd30;
  iVar3 = DAT_0011bd34 + 0xa0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

