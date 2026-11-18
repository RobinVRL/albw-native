#include "ghidra_types.h"

extern undefined *DAT_00118130;
extern int DAT_00118134;

// USA 0011811C <- EU 0011811C (Ghidra, non-matching)
// GLOBAL DAT_00118130 undefined *
// GLOBAL DAT_00118134 int

int func_0011811C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118134;
  pcVar1 = DAT_00118130;
  iVar3 = DAT_00118134 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

