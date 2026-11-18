#include "ghidra_types.h"

extern undefined *DAT_00119348;
extern int DAT_0011934c;

// USA 00119334 <- EU 00119334 (Ghidra, non-matching)
// GLOBAL DAT_00119348 undefined *
// GLOBAL DAT_0011934c int

int func_00119334(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011934c;
  pcVar1 = DAT_00119348;
  iVar3 = DAT_0011934c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

