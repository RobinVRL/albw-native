#include "ghidra_types.h"

extern undefined *DAT_0011c820;
extern int DAT_0011c824;

// USA 0011C80C <- EU 0011C80C (Ghidra, non-matching)
// GLOBAL DAT_0011c820 undefined *
// GLOBAL DAT_0011c824 int

int func_0011C80C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c824;
  pcVar1 = DAT_0011c820;
  iVar3 = DAT_0011c824 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

