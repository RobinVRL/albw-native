#include "ghidra_types.h"

extern undefined *DAT_001169c8;
extern int DAT_001169cc;

// USA 001169B4 <- EU 001169B4 (Ghidra, non-matching)
// GLOBAL DAT_001169c8 undefined *
// GLOBAL DAT_001169cc int

int func_001169B4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001169cc;
  pcVar1 = DAT_001169c8;
  iVar3 = DAT_001169cc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

