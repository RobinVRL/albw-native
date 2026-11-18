#include "ghidra_types.h"

extern undefined *DAT_00118eb0;
extern int DAT_00118eb4;

// USA 00118E9C <- EU 00118E9C (Ghidra, non-matching)
// GLOBAL DAT_00118eb0 undefined *
// GLOBAL DAT_00118eb4 int

int func_00118E9C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118eb4;
  pcVar1 = DAT_00118eb0;
  iVar3 = DAT_00118eb4 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

