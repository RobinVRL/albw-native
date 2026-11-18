#include "ghidra_types.h"

extern undefined *DAT_0011c660;
extern int DAT_0011c664;

// USA 0011C64C <- EU 0011C64C (Ghidra, non-matching)
// GLOBAL DAT_0011c660 undefined *
// GLOBAL DAT_0011c664 int

int func_0011C64C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c664;
  pcVar1 = DAT_0011c660;
  iVar3 = DAT_0011c664 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

