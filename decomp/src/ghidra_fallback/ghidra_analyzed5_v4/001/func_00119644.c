#include "ghidra_types.h"

extern undefined *DAT_00119658;
extern int DAT_0011965c;

// USA 00119644 <- EU 00119644 (Ghidra, non-matching)
// GLOBAL DAT_00119658 undefined *
// GLOBAL DAT_0011965c int

int func_00119644(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011965c;
  pcVar1 = DAT_00119658;
  iVar3 = DAT_0011965c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

