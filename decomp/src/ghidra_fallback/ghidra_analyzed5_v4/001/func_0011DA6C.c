#include "ghidra_types.h"

extern undefined *DAT_0011da80;
extern int DAT_0011da84;

// USA 0011DA6C <- EU 0011DA6C (Ghidra, non-matching)
// GLOBAL DAT_0011da80 undefined *
// GLOBAL DAT_0011da84 int

int func_0011DA6C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011da84;
  pcVar1 = DAT_0011da80;
  iVar3 = DAT_0011da84 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

