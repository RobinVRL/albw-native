#include "ghidra_types.h"

extern undefined *DAT_00118b14;
extern int DAT_00118b18;

// USA 00118B00 <- EU 00118B00 (Ghidra, non-matching)
// GLOBAL DAT_00118b14 undefined *
// GLOBAL DAT_00118b18 int

int func_00118B00(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118b18;
  pcVar1 = DAT_00118b14;
  iVar3 = DAT_00118b18 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

