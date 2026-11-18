#include "ghidra_types.h"

extern undefined *DAT_00119604;
extern int DAT_00119608;

// USA 001195F0 <- EU 001195F0 (Ghidra, non-matching)
// GLOBAL DAT_00119604 undefined *
// GLOBAL DAT_00119608 int

int func_001195F0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119608;
  pcVar1 = DAT_00119604;
  iVar3 = DAT_00119608 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

