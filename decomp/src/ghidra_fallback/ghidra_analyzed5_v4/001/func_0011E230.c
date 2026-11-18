#include "ghidra_types.h"

extern undefined *DAT_0011e244;
extern int DAT_0011e248;

// USA 0011E230 <- EU 0011E230 (Ghidra, non-matching)
// GLOBAL DAT_0011e244 undefined *
// GLOBAL DAT_0011e248 int

int func_0011E230(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e248;
  pcVar1 = DAT_0011e244;
  iVar3 = DAT_0011e248 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

