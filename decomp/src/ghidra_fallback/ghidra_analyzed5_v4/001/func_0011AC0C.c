#include "ghidra_types.h"

extern undefined *DAT_0011ac20;
extern int DAT_0011ac24;

// USA 0011AC0C <- EU 0011AC0C (Ghidra, non-matching)
// GLOBAL DAT_0011ac20 undefined *
// GLOBAL DAT_0011ac24 int

int func_0011AC0C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ac24;
  pcVar1 = DAT_0011ac20;
  iVar3 = DAT_0011ac24 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

