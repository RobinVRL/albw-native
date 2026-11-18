#include "ghidra_types.h"

extern undefined *DAT_0011db0c;
extern int DAT_0011db10;

// USA 0011DAF8 <- EU 0011DAF8 (Ghidra, non-matching)
// GLOBAL DAT_0011db0c undefined *
// GLOBAL DAT_0011db10 int

int func_0011DAF8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011db10;
  pcVar1 = DAT_0011db0c;
  iVar3 = DAT_0011db10 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

