#include "ghidra_types.h"

extern undefined *DAT_0011c270;
extern int DAT_0011c274;

// USA 0011C25C <- EU 0011C25C (Ghidra, non-matching)
// GLOBAL DAT_0011c270 undefined *
// GLOBAL DAT_0011c274 int

int func_0011C25C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c274;
  pcVar1 = DAT_0011c270;
  iVar3 = DAT_0011c274 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

