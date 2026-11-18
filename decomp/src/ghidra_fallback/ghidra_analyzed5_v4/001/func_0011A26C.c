#include "ghidra_types.h"

extern undefined *DAT_0011a280;
extern int DAT_0011a284;

// USA 0011A26C <- EU 0011A26C (Ghidra, non-matching)
// GLOBAL DAT_0011a280 undefined *
// GLOBAL DAT_0011a284 int

int func_0011A26C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a284;
  pcVar1 = DAT_0011a280;
  iVar3 = DAT_0011a284 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

