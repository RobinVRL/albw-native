#include "ghidra_types.h"

extern undefined *DAT_0011b160;
extern int DAT_0011b164;

// USA 0011B14C <- EU 0011B14C (Ghidra, non-matching)
// GLOBAL DAT_0011b160 undefined *
// GLOBAL DAT_0011b164 int

int func_0011B14C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b164;
  pcVar1 = DAT_0011b160;
  iVar3 = DAT_0011b164 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

