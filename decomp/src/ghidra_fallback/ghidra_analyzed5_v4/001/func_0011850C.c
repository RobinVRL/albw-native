#include "ghidra_types.h"

extern undefined *DAT_00118520;
extern int DAT_00118524;

// USA 0011850C <- EU 0011850C (Ghidra, non-matching)
// GLOBAL DAT_00118520 undefined *
// GLOBAL DAT_00118524 int

int func_0011850C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118524;
  pcVar1 = DAT_00118520;
  iVar3 = DAT_00118524 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

