#include "ghidra_types.h"

extern undefined *DAT_0011c890;
extern int DAT_0011c894;

// USA 0011C87C <- EU 0011C87C (Ghidra, non-matching)
// GLOBAL DAT_0011c890 undefined *
// GLOBAL DAT_0011c894 int

int func_0011C87C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c894;
  pcVar1 = DAT_0011c890;
  iVar3 = DAT_0011c894 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

