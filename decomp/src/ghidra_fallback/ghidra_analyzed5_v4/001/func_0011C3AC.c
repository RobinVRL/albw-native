#include "ghidra_types.h"

extern undefined *DAT_0011c3c0;
extern int DAT_0011c3c4;

// USA 0011C3AC <- EU 0011C3AC (Ghidra, non-matching)
// GLOBAL DAT_0011c3c0 undefined *
// GLOBAL DAT_0011c3c4 int

int func_0011C3AC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c3c4;
  pcVar1 = DAT_0011c3c0;
  iVar3 = DAT_0011c3c4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

