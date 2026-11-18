#include "ghidra_types.h"

extern undefined *DAT_00118874;
extern int DAT_00118878;

// USA 00118860 <- EU 00118860 (Ghidra, non-matching)
// GLOBAL DAT_00118874 undefined *
// GLOBAL DAT_00118878 int

int func_00118860(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118878;
  pcVar1 = DAT_00118874;
  iVar3 = DAT_00118878 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

