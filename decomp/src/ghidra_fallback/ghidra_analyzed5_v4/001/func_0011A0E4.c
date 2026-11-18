#include "ghidra_types.h"

extern undefined *DAT_0011a0f8;
extern int DAT_0011a0fc;

// USA 0011A0E4 <- EU 0011A0E4 (Ghidra, non-matching)
// GLOBAL DAT_0011a0f8 undefined *
// GLOBAL DAT_0011a0fc int

int func_0011A0E4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a0fc;
  pcVar1 = DAT_0011a0f8;
  iVar3 = DAT_0011a0fc + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

