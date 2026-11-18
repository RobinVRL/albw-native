#include "ghidra_types.h"

extern undefined *DAT_0011c580;
extern int DAT_0011c584;

// USA 0011C56C <- EU 0011C56C (Ghidra, non-matching)
// GLOBAL DAT_0011c580 undefined *
// GLOBAL DAT_0011c584 int

int func_0011C56C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011c584;
  pcVar1 = DAT_0011c580;
  iVar3 = DAT_0011c584 + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

