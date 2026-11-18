#include "ghidra_types.h"

extern undefined *DAT_0011a92c;
extern int DAT_0011a930;

// USA 0011A918 <- EU 0011A918 (Ghidra, non-matching)
// GLOBAL DAT_0011a92c undefined *
// GLOBAL DAT_0011a930 int

int func_0011A918(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a930;
  pcVar1 = DAT_0011a92c;
  iVar3 = DAT_0011a930 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

