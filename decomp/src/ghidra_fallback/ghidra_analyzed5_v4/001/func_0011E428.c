#include "ghidra_types.h"

extern undefined *DAT_0011e43c;
extern int DAT_0011e440;

// USA 0011E428 <- EU 0011E428 (Ghidra, non-matching)
// GLOBAL DAT_0011e43c undefined *
// GLOBAL DAT_0011e440 int

int func_0011E428(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e440;
  pcVar1 = DAT_0011e43c;
  iVar3 = DAT_0011e440 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

