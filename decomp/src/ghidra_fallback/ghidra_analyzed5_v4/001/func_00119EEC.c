#include "ghidra_types.h"

extern undefined *DAT_00119f00;
extern int DAT_00119f04;

// USA 00119EEC <- EU 00119EEC (Ghidra, non-matching)
// GLOBAL DAT_00119f00 undefined *
// GLOBAL DAT_00119f04 int

int func_00119EEC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119f04;
  pcVar1 = DAT_00119f00;
  iVar3 = DAT_00119f04 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

