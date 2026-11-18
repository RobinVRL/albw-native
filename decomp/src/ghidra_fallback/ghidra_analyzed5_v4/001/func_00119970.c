#include "ghidra_types.h"

extern undefined *DAT_00119984;
extern int DAT_00119988;

// USA 00119970 <- EU 00119970 (Ghidra, non-matching)
// GLOBAL DAT_00119984 undefined *
// GLOBAL DAT_00119988 int

int func_00119970(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119988;
  pcVar1 = DAT_00119984;
  iVar3 = DAT_00119988 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

