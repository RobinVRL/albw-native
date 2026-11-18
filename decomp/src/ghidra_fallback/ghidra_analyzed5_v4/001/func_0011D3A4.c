#include "ghidra_types.h"

extern undefined *DAT_0011d3b8;
extern int DAT_0011d3bc;

// USA 0011D3A4 <- EU 0011D3A4 (Ghidra, non-matching)
// GLOBAL DAT_0011d3b8 undefined *
// GLOBAL DAT_0011d3bc int

int func_0011D3A4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011d3bc;
  pcVar1 = DAT_0011d3b8;
  iVar3 = DAT_0011d3bc + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

