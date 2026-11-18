#include "ghidra_types.h"

extern undefined *DAT_00118f3c;
extern int DAT_00118f40;

// USA 00118F28 <- EU 00118F28 (Ghidra, non-matching)
// GLOBAL DAT_00118f3c undefined *
// GLOBAL DAT_00118f40 int

int func_00118F28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118f40;
  pcVar1 = DAT_00118f3c;
  iVar3 = DAT_00118f40 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

