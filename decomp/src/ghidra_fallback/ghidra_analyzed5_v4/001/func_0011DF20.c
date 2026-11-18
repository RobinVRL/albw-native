#include "ghidra_types.h"

extern undefined *DAT_0011df34;
extern int DAT_0011df38;

// USA 0011DF20 <- EU 0011DF20 (Ghidra, non-matching)
// GLOBAL DAT_0011df34 undefined *
// GLOBAL DAT_0011df38 int

int func_0011DF20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011df38;
  pcVar1 = DAT_0011df34;
  iVar3 = DAT_0011df38 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

