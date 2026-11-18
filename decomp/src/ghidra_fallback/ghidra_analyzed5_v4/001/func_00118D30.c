#include "ghidra_types.h"

extern undefined *DAT_00118d44;
extern int DAT_00118d48;

// USA 00118D30 <- EU 00118D30 (Ghidra, non-matching)
// GLOBAL DAT_00118d44 undefined *
// GLOBAL DAT_00118d48 int

int func_00118D30(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118d48;
  pcVar1 = DAT_00118d44;
  iVar3 = DAT_00118d48 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

