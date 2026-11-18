#include "ghidra_types.h"

extern undefined *DAT_00119214;
extern int DAT_00119218;

// USA 00119200 <- EU 00119200 (Ghidra, non-matching)
// GLOBAL DAT_00119214 undefined *
// GLOBAL DAT_00119218 int

int func_00119200(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119218;
  pcVar1 = DAT_00119214;
  iVar3 = DAT_00119218 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

