#include "ghidra_types.h"

extern undefined *DAT_0011e04c;
extern int DAT_0011e050;

// USA 0011E038 <- EU 0011E038 (Ghidra, non-matching)
// GLOBAL DAT_0011e04c undefined *
// GLOBAL DAT_0011e050 int

int func_0011E038(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e050;
  pcVar1 = DAT_0011e04c;
  iVar3 = DAT_0011e050 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

