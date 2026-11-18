#include "ghidra_types.h"

extern undefined *DAT_0011c52c;
extern int DAT_0011c530;

// USA 0011C518 <- EU 0011C518 (Ghidra, non-matching)
// GLOBAL DAT_0011c52c undefined *
// GLOBAL DAT_0011c530 int

int func_0011C518(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c530;
  pcVar1 = DAT_0011c52c;
  iVar3 = DAT_0011c530 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

