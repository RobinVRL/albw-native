#include "ghidra_types.h"

extern undefined *DAT_00117d5c;
extern int DAT_00117d60;

// USA 00117D48 <- EU 00117D48 (Ghidra, non-matching)
// GLOBAL DAT_00117d5c undefined *
// GLOBAL DAT_00117d60 int

int func_00117D48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d60;
  pcVar1 = DAT_00117d5c;
  iVar3 = DAT_00117d60 + 0x84;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

