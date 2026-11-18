#include "ghidra_types.h"

extern undefined *DAT_00119930;
extern int DAT_00119934;

// USA 0011991C <- EU 0011991C (Ghidra, non-matching)
// GLOBAL DAT_00119930 undefined *
// GLOBAL DAT_00119934 int

int func_0011991C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119934;
  pcVar1 = DAT_00119930;
  iVar3 = DAT_00119934 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

