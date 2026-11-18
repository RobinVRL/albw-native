#include "ghidra_types.h"

extern undefined *DAT_00119230;
extern int DAT_00119234;

// USA 0011921C <- EU 0011921C (Ghidra, non-matching)
// GLOBAL DAT_00119230 undefined *
// GLOBAL DAT_00119234 int

int func_0011921C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119234;
  pcVar1 = DAT_00119230;
  iVar3 = DAT_00119234 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

