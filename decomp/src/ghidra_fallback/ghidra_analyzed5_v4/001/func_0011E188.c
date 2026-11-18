#include "ghidra_types.h"

extern undefined *DAT_0011e19c;
extern int DAT_0011e1a0;

// USA 0011E188 <- EU 0011E188 (Ghidra, non-matching)
// GLOBAL DAT_0011e19c undefined *
// GLOBAL DAT_0011e1a0 int

int func_0011E188(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e1a0;
  pcVar1 = DAT_0011e19c;
  iVar3 = DAT_0011e1a0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

