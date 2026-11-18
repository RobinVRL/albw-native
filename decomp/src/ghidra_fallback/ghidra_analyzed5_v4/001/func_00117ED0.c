#include "ghidra_types.h"

extern undefined *DAT_00117ee4;
extern int DAT_00117ee8;

// USA 00117ED0 <- EU 00117ED0 (Ghidra, non-matching)
// GLOBAL DAT_00117ee4 undefined *
// GLOBAL DAT_00117ee8 int

int func_00117ED0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117ee8;
  pcVar1 = DAT_00117ee4;
  iVar3 = DAT_00117ee8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

