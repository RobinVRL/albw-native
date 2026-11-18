#include "ghidra_types.h"

extern undefined *DAT_0011883c;
extern int DAT_00118840;

// USA 00118828 <- EU 00118828 (Ghidra, non-matching)
// GLOBAL DAT_0011883c undefined *
// GLOBAL DAT_00118840 int

int func_00118828(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118840;
  pcVar1 = DAT_0011883c;
  iVar3 = DAT_00118840 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

