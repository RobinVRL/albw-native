#include "ghidra_types.h"

extern undefined *DAT_00117f1c;
extern int DAT_00117f20;

// USA 00117F08 <- EU 00117F08 (Ghidra, non-matching)
// GLOBAL DAT_00117f1c undefined *
// GLOBAL DAT_00117f20 int

int func_00117F08(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117f20;
  pcVar1 = DAT_00117f1c;
  iVar3 = DAT_00117f20 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

