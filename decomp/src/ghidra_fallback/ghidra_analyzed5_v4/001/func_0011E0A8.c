#include "ghidra_types.h"

extern undefined *DAT_0011e0bc;
extern int DAT_0011e0c0;

// USA 0011E0A8 <- EU 0011E0A8 (Ghidra, non-matching)
// GLOBAL DAT_0011e0bc undefined *
// GLOBAL DAT_0011e0c0 int

int func_0011E0A8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e0c0;
  pcVar1 = DAT_0011e0bc;
  iVar3 = DAT_0011e0c0 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

