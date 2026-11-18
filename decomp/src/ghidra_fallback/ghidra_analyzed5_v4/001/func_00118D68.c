#include "ghidra_types.h"

extern undefined *DAT_00118d7c;
extern int DAT_00118d80;

// USA 00118D68 <- EU 00118D68 (Ghidra, non-matching)
// GLOBAL DAT_00118d7c undefined *
// GLOBAL DAT_00118d80 int

int func_00118D68(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d80;
  pcVar1 = DAT_00118d7c;
  iVar3 = DAT_00118d80 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

