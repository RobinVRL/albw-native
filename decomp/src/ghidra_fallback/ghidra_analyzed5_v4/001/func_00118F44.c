#include "ghidra_types.h"

extern undefined *DAT_00118f58;
extern int DAT_00118f5c;

// USA 00118F44 <- EU 00118F44 (Ghidra, non-matching)
// GLOBAL DAT_00118f58 undefined *
// GLOBAL DAT_00118f5c int

int func_00118F44(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118f5c;
  pcVar1 = DAT_00118f58;
  iVar3 = DAT_00118f5c + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

