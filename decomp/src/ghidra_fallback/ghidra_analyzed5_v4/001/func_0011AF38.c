#include "ghidra_types.h"

extern undefined *DAT_0011af4c;
extern int DAT_0011af50;

// USA 0011AF38 <- EU 0011AF38 (Ghidra, non-matching)
// GLOBAL DAT_0011af4c undefined *
// GLOBAL DAT_0011af50 int

int func_0011AF38(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011af50;
  pcVar1 = DAT_0011af4c;
  iVar3 = DAT_0011af50 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

