#include "ghidra_types.h"

extern undefined *DAT_00118d98;
extern int DAT_00118d9c;

// USA 00118D84 <- EU 00118D84 (Ghidra, non-matching)
// GLOBAL DAT_00118d98 undefined *
// GLOBAL DAT_00118d9c int

int func_00118D84(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d9c;
  pcVar1 = DAT_00118d98;
  iVar3 = DAT_00118d9c + 0x3c;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

