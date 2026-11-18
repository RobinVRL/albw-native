#include "ghidra_types.h"

extern undefined *DAT_0011ca6c;
extern int DAT_0011ca70;

// USA 0011CA58 <- EU 0011CA58 (Ghidra, non-matching)
// GLOBAL DAT_0011ca6c undefined *
// GLOBAL DAT_0011ca70 int

int func_0011CA58(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ca70;
  pcVar1 = DAT_0011ca6c;
  iVar3 = DAT_0011ca70 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

