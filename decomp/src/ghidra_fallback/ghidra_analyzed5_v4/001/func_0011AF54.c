#include "ghidra_types.h"

extern undefined *DAT_0011af68;
extern int DAT_0011af6c;

// USA 0011AF54 <- EU 0011AF54 (Ghidra, non-matching)
// GLOBAL DAT_0011af68 undefined *
// GLOBAL DAT_0011af6c int

int func_0011AF54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011af6c;
  pcVar1 = DAT_0011af68;
  iVar3 = DAT_0011af6c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

