#include "ghidra_types.h"

extern undefined *DAT_00117138;
extern int DAT_0011713c;

// USA 00117124 <- EU 00117124 (Ghidra, non-matching)
// GLOBAL DAT_00117138 undefined *
// GLOBAL DAT_0011713c int

int func_00117124(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011713c;
  pcVar1 = DAT_00117138;
  iVar3 = DAT_0011713c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

