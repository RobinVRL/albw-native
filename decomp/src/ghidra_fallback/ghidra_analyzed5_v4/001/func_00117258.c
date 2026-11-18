#include "ghidra_types.h"

extern undefined *DAT_0011726c;
extern int DAT_00117270;

// USA 00117258 <- EU 00117258 (Ghidra, non-matching)
// GLOBAL DAT_0011726c undefined *
// GLOBAL DAT_00117270 int

int func_00117258(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117270;
  pcVar1 = DAT_0011726c;
  iVar3 = DAT_00117270 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

