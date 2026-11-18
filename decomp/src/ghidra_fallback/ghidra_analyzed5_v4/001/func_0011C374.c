#include "ghidra_types.h"

extern undefined *DAT_0011c388;
extern int DAT_0011c38c;

// USA 0011C374 <- EU 0011C374 (Ghidra, non-matching)
// GLOBAL DAT_0011c388 undefined *
// GLOBAL DAT_0011c38c int

int func_0011C374(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c38c;
  pcVar1 = DAT_0011c388;
  iVar3 = DAT_0011c38c + 0x88;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

