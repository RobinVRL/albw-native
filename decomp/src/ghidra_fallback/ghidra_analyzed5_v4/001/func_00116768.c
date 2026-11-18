#include "ghidra_types.h"

extern undefined *DAT_0011677c;
extern int DAT_00116780;

// USA 00116768 <- EU 00116768 (Ghidra, non-matching)
// GLOBAL DAT_0011677c undefined *
// GLOBAL DAT_00116780 int

int func_00116768(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00116780;
  pcVar1 = DAT_0011677c;
  iVar3 = DAT_00116780 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

