#include "ghidra_types.h"

extern undefined *DAT_0011c900;
extern int DAT_0011c904;

// USA 0011C8EC <- EU 0011C8EC (Ghidra, non-matching)
// GLOBAL DAT_0011c900 undefined *
// GLOBAL DAT_0011c904 int

int func_0011C8EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c904;
  pcVar1 = DAT_0011c900;
  iVar3 = DAT_0011c904 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

