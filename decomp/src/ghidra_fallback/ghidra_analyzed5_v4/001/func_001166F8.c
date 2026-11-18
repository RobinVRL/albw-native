#include "ghidra_types.h"

extern undefined *DAT_0011670c;
extern int DAT_00116710;

// USA 001166F8 <- EU 001166F8 (Ghidra, non-matching)
// GLOBAL DAT_0011670c undefined *
// GLOBAL DAT_00116710 int

int func_001166F8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116710;
  pcVar1 = DAT_0011670c;
  iVar3 = DAT_00116710 + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

