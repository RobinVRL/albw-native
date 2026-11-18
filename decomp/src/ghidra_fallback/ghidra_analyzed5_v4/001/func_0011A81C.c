#include "ghidra_types.h"

extern undefined *DAT_0011a830;
extern int DAT_0011a834;

// USA 0011A81C <- EU 0011A81C (Ghidra, non-matching)
// GLOBAL DAT_0011a830 undefined *
// GLOBAL DAT_0011a834 int

int func_0011A81C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a834;
  pcVar1 = DAT_0011a830;
  iVar3 = DAT_0011a834 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

