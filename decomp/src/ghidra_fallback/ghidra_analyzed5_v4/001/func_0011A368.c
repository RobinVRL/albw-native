#include "ghidra_types.h"

extern undefined *DAT_0011a37c;
extern int DAT_0011a380;

// USA 0011A368 <- EU 0011A368 (Ghidra, non-matching)
// GLOBAL DAT_0011a37c undefined *
// GLOBAL DAT_0011a380 int

int func_0011A368(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a380;
  pcVar1 = DAT_0011a37c;
  iVar3 = DAT_0011a380 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

