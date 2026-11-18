#include "ghidra_types.h"

extern undefined *DAT_00116920;
extern int DAT_00116924;

// USA 0011690C <- EU 0011690C (Ghidra, non-matching)
// GLOBAL DAT_00116920 undefined *
// GLOBAL DAT_00116924 int

int func_0011690C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116924;
  pcVar1 = DAT_00116920;
  iVar3 = DAT_00116924 + 0x58;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

