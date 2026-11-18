#include "ghidra_types.h"

extern undefined *DAT_00119578;
extern int DAT_0011957c;

// USA 00119564 <- EU 00119564 (Ghidra, non-matching)
// GLOBAL DAT_00119578 undefined *
// GLOBAL DAT_0011957c int

int func_00119564(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011957c;
  pcVar1 = DAT_00119578;
  iVar3 = DAT_0011957c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

