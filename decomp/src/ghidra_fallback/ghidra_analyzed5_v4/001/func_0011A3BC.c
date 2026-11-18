#include "ghidra_types.h"

extern undefined *DAT_0011a3d0;
extern int DAT_0011a3d4;

// USA 0011A3BC <- EU 0011A3BC (Ghidra, non-matching)
// GLOBAL DAT_0011a3d0 undefined *
// GLOBAL DAT_0011a3d4 int

int func_0011A3BC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a3d4;
  pcVar1 = DAT_0011a3d0;
  iVar3 = DAT_0011a3d4 + 0x114;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

