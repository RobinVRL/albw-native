#include "ghidra_types.h"

extern undefined *DAT_001190fc;
extern int DAT_00119100;

// USA 001190E8 <- EU 001190E8 (Ghidra, non-matching)
// GLOBAL DAT_001190fc undefined *
// GLOBAL DAT_00119100 int

int func_001190E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119100;
  pcVar1 = DAT_001190fc;
  iVar3 = DAT_00119100 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

