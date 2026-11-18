#include "ghidra_types.h"

extern undefined *DAT_0011b10c;
extern int DAT_0011b110;

// USA 0011B0F8 <- EU 0011B0F8 (Ghidra, non-matching)
// GLOBAL DAT_0011b10c undefined *
// GLOBAL DAT_0011b110 int

int func_0011B0F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b110;
  pcVar1 = DAT_0011b10c;
  iVar3 = DAT_0011b110 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

