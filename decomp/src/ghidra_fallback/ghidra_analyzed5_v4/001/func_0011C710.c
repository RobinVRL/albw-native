#include "ghidra_types.h"

extern undefined *DAT_0011c724;
extern int DAT_0011c728;

// USA 0011C710 <- EU 0011C710 (Ghidra, non-matching)
// GLOBAL DAT_0011c724 undefined *
// GLOBAL DAT_0011c728 int

int func_0011C710(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c728;
  pcVar1 = DAT_0011c724;
  iVar3 = DAT_0011c728 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

