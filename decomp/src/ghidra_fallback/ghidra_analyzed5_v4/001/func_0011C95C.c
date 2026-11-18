#include "ghidra_types.h"

extern undefined *DAT_0011c970;
extern int DAT_0011c974;

// USA 0011C95C <- EU 0011C95C (Ghidra, non-matching)
// GLOBAL DAT_0011c970 undefined *
// GLOBAL DAT_0011c974 int

int func_0011C95C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c974;
  pcVar1 = DAT_0011c970;
  iVar3 = DAT_0011c974 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

