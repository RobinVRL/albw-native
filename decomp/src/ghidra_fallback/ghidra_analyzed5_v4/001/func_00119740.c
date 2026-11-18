#include "ghidra_types.h"

extern undefined *DAT_00119754;
extern int DAT_00119758;

// USA 00119740 <- EU 00119740 (Ghidra, non-matching)
// GLOBAL DAT_00119754 undefined *
// GLOBAL DAT_00119758 int

int func_00119740(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119758;
  pcVar1 = DAT_00119754;
  iVar3 = DAT_00119758 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

