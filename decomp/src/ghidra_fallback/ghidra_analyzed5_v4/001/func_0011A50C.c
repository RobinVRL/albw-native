#include "ghidra_types.h"

extern undefined *DAT_0011a520;
extern int DAT_0011a524;

// USA 0011A50C <- EU 0011A50C (Ghidra, non-matching)
// GLOBAL DAT_0011a520 undefined *
// GLOBAL DAT_0011a524 int

int func_0011A50C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a524;
  pcVar1 = DAT_0011a520;
  iVar3 = DAT_0011a524 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

