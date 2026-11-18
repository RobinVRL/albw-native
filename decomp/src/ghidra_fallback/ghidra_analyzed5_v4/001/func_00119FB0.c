#include "ghidra_types.h"

extern undefined *DAT_00119fc4;
extern int DAT_00119fc8;

// USA 00119FB0 <- EU 00119FB0 (Ghidra, non-matching)
// GLOBAL DAT_00119fc4 undefined *
// GLOBAL DAT_00119fc8 int

int func_00119FB0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119fc8;
  pcVar1 = DAT_00119fc4;
  iVar3 = DAT_00119fc8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

