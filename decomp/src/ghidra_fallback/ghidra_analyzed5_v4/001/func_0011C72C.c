#include "ghidra_types.h"

extern undefined *DAT_0011c740;
extern int DAT_0011c744;

// USA 0011C72C <- EU 0011C72C (Ghidra, non-matching)
// GLOBAL DAT_0011c740 undefined *
// GLOBAL DAT_0011c744 int

int func_0011C72C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c744;
  pcVar1 = DAT_0011c740;
  iVar3 = DAT_0011c744 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

