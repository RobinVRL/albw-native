#include "ghidra_types.h"

extern undefined *DAT_0011e3cc;
extern int DAT_0011e3d0;

// USA 0011E3B8 <- EU 0011E3B8 (Ghidra, non-matching)
// GLOBAL DAT_0011e3cc undefined *
// GLOBAL DAT_0011e3d0 int

int func_0011E3B8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e3d0;
  pcVar1 = DAT_0011e3cc;
  iVar3 = DAT_0011e3d0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

