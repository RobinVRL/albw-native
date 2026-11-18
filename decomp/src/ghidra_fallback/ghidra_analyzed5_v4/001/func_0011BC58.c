#include "ghidra_types.h"

extern undefined *DAT_0011bc6c;
extern int DAT_0011bc70;

// USA 0011BC58 <- EU 0011BC58 (Ghidra, non-matching)
// GLOBAL DAT_0011bc6c undefined *
// GLOBAL DAT_0011bc70 int

int func_0011BC58(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bc70;
  pcVar1 = DAT_0011bc6c;
  iVar3 = DAT_0011bc70 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

