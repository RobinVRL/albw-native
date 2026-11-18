#include "ghidra_types.h"

extern undefined *DAT_0011986c;
extern int DAT_00119870;

// USA 00119858 <- EU 00119858 (Ghidra, non-matching)
// GLOBAL DAT_0011986c undefined *
// GLOBAL DAT_00119870 int

int func_00119858(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119870;
  pcVar1 = DAT_0011986c;
  iVar3 = DAT_00119870 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

