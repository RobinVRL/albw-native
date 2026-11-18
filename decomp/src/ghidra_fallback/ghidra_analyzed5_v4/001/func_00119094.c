#include "ghidra_types.h"

extern undefined *DAT_001190a8;
extern int DAT_001190ac;

// USA 00119094 <- EU 00119094 (Ghidra, non-matching)
// GLOBAL DAT_001190a8 undefined *
// GLOBAL DAT_001190ac int

int func_00119094(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001190ac;
  pcVar1 = DAT_001190a8;
  iVar3 = DAT_001190ac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

