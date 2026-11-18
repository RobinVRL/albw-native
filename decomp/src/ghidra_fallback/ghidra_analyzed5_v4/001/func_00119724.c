#include "ghidra_types.h"

extern undefined *DAT_00119738;
extern int DAT_0011973c;

// USA 00119724 <- EU 00119724 (Ghidra, non-matching)
// GLOBAL DAT_00119738 undefined *
// GLOBAL DAT_0011973c int

int func_00119724(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011973c;
  pcVar1 = DAT_00119738;
  iVar3 = DAT_0011973c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

