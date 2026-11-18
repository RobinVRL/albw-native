#include "ghidra_types.h"

extern undefined *DAT_0011d40c;
extern int DAT_0011d410;

// USA 0011D3F8 <- EU 0011D3F8 (Ghidra, non-matching)
// GLOBAL DAT_0011d40c undefined *
// GLOBAL DAT_0011d410 int

int func_0011D3F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d410;
  pcVar1 = DAT_0011d40c;
  iVar3 = DAT_0011d410 + 0x38;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

