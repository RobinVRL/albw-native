#include "ghidra_types.h"

extern undefined *DAT_0011857c;
extern int DAT_00118580;

// USA 00118568 <- EU 00118568 (Ghidra, non-matching)
// GLOBAL DAT_0011857c undefined *
// GLOBAL DAT_00118580 int

int func_00118568(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118580;
  pcVar1 = DAT_0011857c;
  iVar3 = DAT_00118580 + 0x80;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

