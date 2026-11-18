#include "ghidra_types.h"

extern undefined *DAT_0011c350;
extern int DAT_0011c354;

// USA 0011C33C <- EU 0011C33C (Ghidra, non-matching)
// GLOBAL DAT_0011c350 undefined *
// GLOBAL DAT_0011c354 int

int func_0011C33C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c354;
  pcVar1 = DAT_0011c350;
  iVar3 = DAT_0011c354 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

