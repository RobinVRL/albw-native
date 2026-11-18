#include "ghidra_types.h"

extern undefined *DAT_00119524;
extern int DAT_00119528;

// USA 00119510 <- EU 00119510 (Ghidra, non-matching)
// GLOBAL DAT_00119524 undefined *
// GLOBAL DAT_00119528 int

int func_00119510(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119528;
  pcVar1 = DAT_00119524;
  iVar3 = DAT_00119528 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

