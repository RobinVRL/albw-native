#include "ghidra_types.h"

extern undefined *DAT_00119428;
extern int DAT_0011942c;

// USA 00119414 <- EU 00119414 (Ghidra, non-matching)
// GLOBAL DAT_00119428 undefined *
// GLOBAL DAT_0011942c int

int func_00119414(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011942c;
  pcVar1 = DAT_00119428;
  iVar3 = DAT_0011942c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

