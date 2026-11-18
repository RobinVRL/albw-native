#include "ghidra_types.h"

extern undefined *DAT_0011c938;
extern int DAT_0011c93c;

// USA 0011C924 <- EU 0011C924 (Ghidra, non-matching)
// GLOBAL DAT_0011c938 undefined *
// GLOBAL DAT_0011c93c int

int func_0011C924(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c93c;
  pcVar1 = DAT_0011c938;
  iVar3 = DAT_0011c93c + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

