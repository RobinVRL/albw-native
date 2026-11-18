#include "ghidra_types.h"

extern undefined *DAT_00117b64;
extern int DAT_00117b68;

// USA 00117B50 <- EU 00117B50 (Ghidra, non-matching)
// GLOBAL DAT_00117b64 undefined *
// GLOBAL DAT_00117b68 int

int func_00117B50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117b68;
  pcVar1 = DAT_00117b64;
  iVar3 = DAT_00117b68 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

