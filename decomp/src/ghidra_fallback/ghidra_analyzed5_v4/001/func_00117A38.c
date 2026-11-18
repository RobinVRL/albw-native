#include "ghidra_types.h"

extern undefined *DAT_00117a4c;
extern int DAT_00117a50;

// USA 00117A38 <- EU 00117A38 (Ghidra, non-matching)
// GLOBAL DAT_00117a4c undefined *
// GLOBAL DAT_00117a50 int

int func_00117A38(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117a50;
  pcVar1 = DAT_00117a4c;
  iVar3 = DAT_00117a50 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

