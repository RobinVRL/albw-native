#include "ghidra_types.h"

extern undefined *DAT_00116fb0;
extern int DAT_00116fb4;

// USA 00116F9C <- EU 00116F9C (Ghidra, non-matching)
// GLOBAL DAT_00116fb0 undefined *
// GLOBAL DAT_00116fb4 int

int func_00116F9C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116fb4;
  pcVar1 = DAT_00116fb0;
  iVar3 = DAT_00116fb4 + 0x50;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

