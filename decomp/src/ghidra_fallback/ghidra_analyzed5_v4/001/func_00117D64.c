#include "ghidra_types.h"

extern undefined *DAT_00117d78;
extern int DAT_00117d7c;

// USA 00117D64 <- EU 00117D64 (Ghidra, non-matching)
// GLOBAL DAT_00117d78 undefined *
// GLOBAL DAT_00117d7c int

int func_00117D64(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117d7c;
  pcVar1 = DAT_00117d78;
  iVar3 = DAT_00117d7c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

