#include "ghidra_types.h"

extern undefined *DAT_0011669c;
extern int DAT_001166a0;

// USA 00116688 <- EU 00116688 (Ghidra, non-matching)
// GLOBAL DAT_0011669c undefined *
// GLOBAL DAT_001166a0 int

int func_00116688(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001166a0;
  pcVar1 = DAT_0011669c;
  iVar3 = DAT_001166a0 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

