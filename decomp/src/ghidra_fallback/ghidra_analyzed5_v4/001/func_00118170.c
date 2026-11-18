#include "ghidra_types.h"

extern undefined *DAT_00118184;
extern int DAT_00118188;

// USA 00118170 <- EU 00118170 (Ghidra, non-matching)
// GLOBAL DAT_00118184 undefined *
// GLOBAL DAT_00118188 int

int func_00118170(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118188;
  pcVar1 = DAT_00118184;
  iVar3 = DAT_00118188 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

