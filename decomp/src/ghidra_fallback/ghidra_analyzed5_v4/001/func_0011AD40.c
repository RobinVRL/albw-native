#include "ghidra_types.h"

extern undefined *DAT_0011ad54;
extern int DAT_0011ad58;

// USA 0011AD40 <- EU 0011AD40 (Ghidra, non-matching)
// GLOBAL DAT_0011ad54 undefined *
// GLOBAL DAT_0011ad58 int

int func_0011AD40(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ad58;
  pcVar1 = DAT_0011ad54;
  iVar3 = DAT_0011ad58 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

