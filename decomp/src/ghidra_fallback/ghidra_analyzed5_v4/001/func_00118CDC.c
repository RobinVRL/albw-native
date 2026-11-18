#include "ghidra_types.h"

extern undefined *DAT_00118cf0;
extern int DAT_00118cf4;

// USA 00118CDC <- EU 00118CDC (Ghidra, non-matching)
// GLOBAL DAT_00118cf0 undefined *
// GLOBAL DAT_00118cf4 int

int func_00118CDC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118cf4;
  pcVar1 = DAT_00118cf0;
  iVar3 = DAT_00118cf4 + 0x30;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

