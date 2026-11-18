#include "ghidra_types.h"

extern undefined *DAT_001197fc;
extern int DAT_00119800;

// USA 001197E8 <- EU 001197E8 (Ghidra, non-matching)
// GLOBAL DAT_001197fc undefined *
// GLOBAL DAT_00119800 int

int func_001197E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119800;
  pcVar1 = DAT_001197fc;
  iVar3 = DAT_00119800 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

