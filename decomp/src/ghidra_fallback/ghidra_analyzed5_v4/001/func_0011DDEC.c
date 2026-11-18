#include "ghidra_types.h"

extern undefined *DAT_0011de00;
extern int DAT_0011de04;

// USA 0011DDEC <- EU 0011DDEC (Ghidra, non-matching)
// GLOBAL DAT_0011de00 undefined *
// GLOBAL DAT_0011de04 int

int func_0011DDEC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011de04;
  pcVar1 = DAT_0011de00;
  iVar3 = DAT_0011de04 + 0xc0;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

