#include "ghidra_types.h"

extern undefined *DAT_0011a14c;
extern int DAT_0011a150;

// USA 0011A138 <- EU 0011A138 (Ghidra, non-matching)
// GLOBAL DAT_0011a14c undefined *
// GLOBAL DAT_0011a150 int

int func_0011A138(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a150;
  pcVar1 = DAT_0011a14c;
  iVar3 = DAT_0011a150 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

