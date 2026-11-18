#include "ghidra_types.h"

extern undefined *DAT_0011e27c;
extern int DAT_0011e280;

// USA 0011E268 <- EU 0011E268 (Ghidra, non-matching)
// GLOBAL DAT_0011e27c undefined *
// GLOBAL DAT_0011e280 int

int func_0011E268(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e280;
  pcVar1 = DAT_0011e27c;
  iVar3 = DAT_0011e280 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

