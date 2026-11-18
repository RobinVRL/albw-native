#include "ghidra_types.h"

extern undefined *DAT_0011bc34;
extern int DAT_0011bc38;

// USA 0011BC20 <- EU 0011BC20 (Ghidra, non-matching)
// GLOBAL DAT_0011bc34 undefined *
// GLOBAL DAT_0011bc38 int

int func_0011BC20(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bc38;
  pcVar1 = DAT_0011bc34;
  iVar3 = DAT_0011bc38 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

