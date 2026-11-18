#include "ghidra_types.h"

extern undefined *DAT_00119968;
extern int DAT_0011996c;

// USA 00119954 <- EU 00119954 (Ghidra, non-matching)
// GLOBAL DAT_00119968 undefined *
// GLOBAL DAT_0011996c int

int func_00119954(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011996c;
  pcVar1 = DAT_00119968;
  iVar3 = DAT_0011996c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

