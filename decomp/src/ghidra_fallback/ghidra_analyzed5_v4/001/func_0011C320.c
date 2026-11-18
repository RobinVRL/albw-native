#include "ghidra_types.h"

extern undefined *DAT_0011c334;
extern int DAT_0011c338;

// USA 0011C320 <- EU 0011C320 (Ghidra, non-matching)
// GLOBAL DAT_0011c334 undefined *
// GLOBAL DAT_0011c338 int

int func_0011C320(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c338;
  pcVar1 = DAT_0011c334;
  iVar3 = DAT_0011c338 + 0x54;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

