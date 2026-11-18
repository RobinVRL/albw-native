#include "ghidra_types.h"

extern undefined *DAT_0011b95c;
extern int DAT_0011b960;

// USA 0011B948 <- EU 0011B948 (Ghidra, non-matching)
// GLOBAL DAT_0011b95c undefined *
// GLOBAL DAT_0011b960 int

int func_0011B948(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b960;
  pcVar1 = DAT_0011b95c;
  iVar3 = DAT_0011b960 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

