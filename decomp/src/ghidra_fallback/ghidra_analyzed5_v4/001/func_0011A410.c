#include "ghidra_types.h"

extern undefined *DAT_0011a424;
extern int DAT_0011a428;

// USA 0011A410 <- EU 0011A410 (Ghidra, non-matching)
// GLOBAL DAT_0011a424 undefined *
// GLOBAL DAT_0011a428 int

int func_0011A410(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a428;
  pcVar1 = DAT_0011a424;
  iVar3 = DAT_0011a428 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

