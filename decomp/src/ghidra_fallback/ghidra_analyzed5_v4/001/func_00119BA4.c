#include "ghidra_types.h"

extern undefined *DAT_00119bb8;
extern int DAT_00119bbc;

// USA 00119BA4 <- EU 00119BA4 (Ghidra, non-matching)
// GLOBAL DAT_00119bb8 undefined *
// GLOBAL DAT_00119bbc int

int func_00119BA4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119bbc;
  pcVar1 = DAT_00119bb8;
  iVar3 = DAT_00119bbc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

