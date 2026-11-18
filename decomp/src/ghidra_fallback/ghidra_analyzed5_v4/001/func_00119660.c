#include "ghidra_types.h"

extern undefined *DAT_00119674;
extern int DAT_00119678;

// USA 00119660 <- EU 00119660 (Ghidra, non-matching)
// GLOBAL DAT_00119674 undefined *
// GLOBAL DAT_00119678 int

int func_00119660(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119678;
  pcVar1 = DAT_00119674;
  iVar3 = DAT_00119678 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

