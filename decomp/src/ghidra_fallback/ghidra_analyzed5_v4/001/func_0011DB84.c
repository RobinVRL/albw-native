#include "ghidra_types.h"

extern undefined *DAT_0011db98;
extern int DAT_0011db9c;

// USA 0011DB84 <- EU 0011DB84 (Ghidra, non-matching)
// GLOBAL DAT_0011db98 undefined *
// GLOBAL DAT_0011db9c int

int func_0011DB84(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011db9c;
  pcVar1 = DAT_0011db98;
  iVar3 = DAT_0011db9c + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

