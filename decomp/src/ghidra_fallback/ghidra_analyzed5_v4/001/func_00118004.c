#include "ghidra_types.h"

extern undefined *DAT_00118018;
extern int DAT_0011801c;

// USA 00118004 <- EU 00118004 (Ghidra, non-matching)
// GLOBAL DAT_00118018 undefined *
// GLOBAL DAT_0011801c int

int func_00118004(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011801c;
  pcVar1 = DAT_00118018;
  iVar3 = DAT_0011801c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

