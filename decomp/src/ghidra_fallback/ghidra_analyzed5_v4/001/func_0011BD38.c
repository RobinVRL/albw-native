#include "ghidra_types.h"

extern undefined *DAT_0011bd4c;
extern int DAT_0011bd50;

// USA 0011BD38 <- EU 0011BD38 (Ghidra, non-matching)
// GLOBAL DAT_0011bd4c undefined *
// GLOBAL DAT_0011bd50 int

int func_0011BD38(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bd50;
  pcVar1 = DAT_0011bd4c;
  iVar3 = DAT_0011bd50 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

