#include "ghidra_types.h"

extern undefined *DAT_0011b240;
extern int DAT_0011b244;

// USA 0011B22C <- EU 0011B22C (Ghidra, non-matching)
// GLOBAL DAT_0011b240 undefined *
// GLOBAL DAT_0011b244 int

int func_0011B22C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b244;
  pcVar1 = DAT_0011b240;
  iVar3 = DAT_0011b244 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

