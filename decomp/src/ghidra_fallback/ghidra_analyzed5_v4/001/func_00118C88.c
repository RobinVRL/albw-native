#include "ghidra_types.h"

extern undefined *DAT_00118c9c;
extern int DAT_00118ca0;

// USA 00118C88 <- EU 00118C88 (Ghidra, non-matching)
// GLOBAL DAT_00118c9c undefined *
// GLOBAL DAT_00118ca0 int

int func_00118C88(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118ca0;
  pcVar1 = DAT_00118c9c;
  iVar3 = DAT_00118ca0 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

