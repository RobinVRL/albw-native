#include "ghidra_types.h"

extern undefined *DAT_0011a050;
extern int DAT_0011a054;

// USA 0011A03C <- EU 0011A03C (Ghidra, non-matching)
// GLOBAL DAT_0011a050 undefined *
// GLOBAL DAT_0011a054 int

int func_0011A03C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a054;
  pcVar1 = DAT_0011a050;
  iVar3 = DAT_0011a054 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

