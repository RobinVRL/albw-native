#include "ghidra_types.h"

extern undefined *DAT_00117234;
extern int DAT_00117238;

// USA 00117220 <- EU 00117220 (Ghidra, non-matching)
// GLOBAL DAT_00117234 undefined *
// GLOBAL DAT_00117238 int

int func_00117220(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117238;
  pcVar1 = DAT_00117234;
  iVar3 = DAT_00117238 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

