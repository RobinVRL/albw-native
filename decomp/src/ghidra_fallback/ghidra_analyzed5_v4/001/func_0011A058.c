#include "ghidra_types.h"

extern undefined *DAT_0011a06c;
extern int DAT_0011a070;

// USA 0011A058 <- EU 0011A058 (Ghidra, non-matching)
// GLOBAL DAT_0011a06c undefined *
// GLOBAL DAT_0011a070 int

int func_0011A058(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a070;
  pcVar1 = DAT_0011a06c;
  iVar3 = DAT_0011a070 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

