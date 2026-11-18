#include "ghidra_types.h"

extern undefined *DAT_001189a8;
extern int DAT_001189ac;

// USA 00118994 <- EU 00118994 (Ghidra, non-matching)
// GLOBAL DAT_001189a8 undefined *
// GLOBAL DAT_001189ac int

int func_00118994(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001189ac;
  pcVar1 = DAT_001189a8;
  iVar3 = DAT_001189ac + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

