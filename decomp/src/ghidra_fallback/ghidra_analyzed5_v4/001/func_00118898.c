#include "ghidra_types.h"

extern undefined *DAT_001188ac;
extern int DAT_001188b0;

// USA 00118898 <- EU 00118898 (Ghidra, non-matching)
// GLOBAL DAT_001188ac undefined *
// GLOBAL DAT_001188b0 int

int func_00118898(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001188b0;
  pcVar1 = DAT_001188ac;
  iVar3 = DAT_001188b0 + 0x58;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

