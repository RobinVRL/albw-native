#include "ghidra_types.h"

extern undefined *DAT_0011c8ac;
extern int DAT_0011c8b0;

// USA 0011C898 <- EU 0011C898 (Ghidra, non-matching)
// GLOBAL DAT_0011c8ac undefined *
// GLOBAL DAT_0011c8b0 int

int func_0011C898(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c8b0;
  pcVar1 = DAT_0011c8ac;
  iVar3 = DAT_0011c8b0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

