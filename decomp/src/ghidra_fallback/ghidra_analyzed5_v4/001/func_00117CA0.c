#include "ghidra_types.h"

extern undefined *DAT_00117cb4;
extern int DAT_00117cb8;

// USA 00117CA0 <- EU 00117CA0 (Ghidra, non-matching)
// GLOBAL DAT_00117cb4 undefined *
// GLOBAL DAT_00117cb8 int

int func_00117CA0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117cb8;
  pcVar1 = DAT_00117cb4;
  iVar3 = DAT_00117cb8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

