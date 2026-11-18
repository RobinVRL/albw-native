#include "ghidra_types.h"

extern undefined *DAT_00119818;
extern int DAT_0011981c;

// USA 00119804 <- EU 00119804 (Ghidra, non-matching)
// GLOBAL DAT_00119818 undefined *
// GLOBAL DAT_0011981c int

int func_00119804(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011981c;
  pcVar1 = DAT_00119818;
  iVar3 = DAT_0011981c + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

