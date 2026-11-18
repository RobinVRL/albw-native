#include "ghidra_types.h"

extern undefined *DAT_00119834;
extern int DAT_00119838;

// USA 00119820 <- EU 00119820 (Ghidra, non-matching)
// GLOBAL DAT_00119834 undefined *
// GLOBAL DAT_00119838 int

int func_00119820(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119838;
  pcVar1 = DAT_00119834;
  iVar3 = DAT_00119838 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

