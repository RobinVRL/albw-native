#include "ghidra_types.h"

extern undefined *DAT_00118ba0;
extern int DAT_00118ba4;

// USA 00118B8C <- EU 00118B8C (Ghidra, non-matching)
// GLOBAL DAT_00118ba0 undefined *
// GLOBAL DAT_00118ba4 int

int func_00118B8C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118ba4;
  pcVar1 = DAT_00118ba0;
  iVar3 = DAT_00118ba4 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

