#include "ghidra_types.h"

extern undefined *DAT_00119ffc;
extern int DAT_0011a000;

// USA 00119FE8 <- EU 00119FE8 (Ghidra, non-matching)
// GLOBAL DAT_00119ffc undefined *
// GLOBAL DAT_0011a000 int

int func_00119FE8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a000;
  pcVar1 = DAT_00119ffc;
  iVar3 = DAT_0011a000 + 200;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

