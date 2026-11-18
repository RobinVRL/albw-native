#include "ghidra_types.h"

extern undefined *DAT_0011c190;
extern int DAT_0011c194;

// USA 0011C17C <- EU 0011C17C (Ghidra, non-matching)
// GLOBAL DAT_0011c190 undefined *
// GLOBAL DAT_0011c194 int

int func_0011C17C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c194;
  pcVar1 = DAT_0011c190;
  iVar3 = DAT_0011c194 + 0x60;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

