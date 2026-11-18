#include "ghidra_types.h"

extern undefined *DAT_0011aa44;
extern int DAT_0011aa48;

// USA 0011AA30 <- EU 0011AA30 (Ghidra, non-matching)
// GLOBAL DAT_0011aa44 undefined *
// GLOBAL DAT_0011aa48 int

int func_0011AA30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011aa48;
  pcVar1 = DAT_0011aa44;
  iVar3 = DAT_0011aa48 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

