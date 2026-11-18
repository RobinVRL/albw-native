#include "ghidra_types.h"

extern undefined *DAT_0011a30c;
extern int DAT_0011a310;

// USA 0011A2F8 <- EU 0011A2F8 (Ghidra, non-matching)
// GLOBAL DAT_0011a30c undefined *
// GLOBAL DAT_0011a310 int

int func_0011A2F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a310;
  pcVar1 = DAT_0011a30c;
  iVar3 = DAT_0011a310 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

