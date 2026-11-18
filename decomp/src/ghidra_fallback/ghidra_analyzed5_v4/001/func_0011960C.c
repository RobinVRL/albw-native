#include "ghidra_types.h"

extern undefined *DAT_00119620;
extern int DAT_00119624;

// USA 0011960C <- EU 0011960C (Ghidra, non-matching)
// GLOBAL DAT_00119620 undefined *
// GLOBAL DAT_00119624 int

int func_0011960C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119624;
  pcVar1 = DAT_00119620;
  iVar3 = DAT_00119624 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

