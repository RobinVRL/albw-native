#include "ghidra_types.h"

extern undefined *DAT_00117cec;
extern int DAT_00117cf0;

// USA 00117CD8 <- EU 00117CD8 (Ghidra, non-matching)
// GLOBAL DAT_00117cec undefined *
// GLOBAL DAT_00117cf0 int

int func_00117CD8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117cf0;
  pcVar1 = DAT_00117cec;
  iVar3 = DAT_00117cf0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

