#include "ghidra_types.h"

extern undefined *DAT_00118a18;
extern int DAT_00118a1c;

// USA 00118A04 <- EU 00118A04 (Ghidra, non-matching)
// GLOBAL DAT_00118a18 undefined *
// GLOBAL DAT_00118a1c int

int func_00118A04(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118a1c;
  pcVar1 = DAT_00118a18;
  iVar3 = DAT_00118a1c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

