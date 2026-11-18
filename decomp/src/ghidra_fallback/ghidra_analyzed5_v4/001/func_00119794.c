#include "ghidra_types.h"

extern undefined *DAT_001197a8;
extern int DAT_001197ac;

// USA 00119794 <- EU 00119794 (Ghidra, non-matching)
// GLOBAL DAT_001197a8 undefined *
// GLOBAL DAT_001197ac int

int func_00119794(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001197ac;
  pcVar1 = DAT_001197a8;
  iVar3 = DAT_001197ac + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

