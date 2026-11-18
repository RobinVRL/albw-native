#include "ghidra_types.h"

extern undefined *DAT_00119d08;
extern int DAT_00119d0c;

// USA 00119CF4 <- EU 00119CF4 (Ghidra, non-matching)
// GLOBAL DAT_00119d08 undefined *
// GLOBAL DAT_00119d0c int

int func_00119CF4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119d0c;
  pcVar1 = DAT_00119d08;
  iVar3 = DAT_00119d0c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

