#include "ghidra_types.h"

extern undefined *DAT_0011db44;
extern int DAT_0011db48;

// USA 0011DB30 <- EU 0011DB30 (Ghidra, non-matching)
// GLOBAL DAT_0011db44 undefined *
// GLOBAL DAT_0011db48 int

int func_0011DB30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011db48;
  pcVar1 = DAT_0011db44;
  iVar3 = DAT_0011db48 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

