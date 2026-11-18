#include "ghidra_types.h"

extern undefined *DAT_0011adfc;
extern int DAT_0011ae00;

// USA 0011ADE8 <- EU 0011ADE8 (Ghidra, non-matching)
// GLOBAL DAT_0011adfc undefined *
// GLOBAL DAT_0011ae00 int

int func_0011ADE8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ae00;
  pcVar1 = DAT_0011adfc;
  iVar3 = DAT_0011ae00 + 0x1d0;
  do {
    iVar3 = iVar3 + -0x10;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

