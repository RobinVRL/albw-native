#include "ghidra_types.h"

extern undefined *DAT_0011ce24;
extern int DAT_0011ce28;

// USA 0011CE10 <- EU 0011CE10 (Ghidra, non-matching)
// GLOBAL DAT_0011ce24 undefined *
// GLOBAL DAT_0011ce28 int

int func_0011CE10(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ce28;
  pcVar1 = DAT_0011ce24;
  iVar3 = DAT_0011ce28 + 0x24;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

