#include "ghidra_types.h"

extern undefined *DAT_00118b68;
extern int DAT_00118b6c;

// USA 00118B54 <- EU 00118B54 (Ghidra, non-matching)
// GLOBAL DAT_00118b68 undefined *
// GLOBAL DAT_00118b6c int

int func_00118B54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118b6c;
  pcVar1 = DAT_00118b68;
  iVar3 = DAT_00118b6c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

