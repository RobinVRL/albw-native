#include "ghidra_types.h"

extern undefined *DAT_00118c2c;
extern int DAT_00118c30;

// USA 00118C18 <- EU 00118C18 (Ghidra, non-matching)
// GLOBAL DAT_00118c2c undefined *
// GLOBAL DAT_00118c30 int

int func_00118C18(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118c30;
  pcVar1 = DAT_00118c2c;
  iVar3 = DAT_00118c30 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

