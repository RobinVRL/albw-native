#include "ghidra_types.h"

extern undefined *DAT_00119db0;
extern int DAT_00119db4;

// USA 00119D9C <- EU 00119D9C (Ghidra, non-matching)
// GLOBAL DAT_00119db0 undefined *
// GLOBAL DAT_00119db4 int

int func_00119D9C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119db4;
  pcVar1 = DAT_00119db0;
  iVar3 = DAT_00119db4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

