#include "ghidra_types.h"

extern undefined *DAT_0011845c;
extern int DAT_00118460;

// USA 00118448 <- EU 00118448 (Ghidra, non-matching)
// GLOBAL DAT_0011845c undefined *
// GLOBAL DAT_00118460 int

int func_00118448(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118460;
  pcVar1 = DAT_0011845c;
  iVar3 = DAT_00118460 + 0xe0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

