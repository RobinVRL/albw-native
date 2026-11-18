#include "ghidra_types.h"

extern undefined *DAT_0011d118;
extern int DAT_0011d11c;

// USA 0011D104 <- EU 0011D104 (Ghidra, non-matching)
// GLOBAL DAT_0011d118 undefined *
// GLOBAL DAT_0011d11c int

int func_0011D104(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d11c;
  pcVar1 = DAT_0011d118;
  iVar3 = DAT_0011d11c + 0x58;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

