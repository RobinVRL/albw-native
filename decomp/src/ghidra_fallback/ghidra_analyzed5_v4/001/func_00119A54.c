#include "ghidra_types.h"

extern undefined *DAT_00119a68;
extern int DAT_00119a6c;

// USA 00119A54 <- EU 00119A54 (Ghidra, non-matching)
// GLOBAL DAT_00119a68 undefined *
// GLOBAL DAT_00119a6c int

int func_00119A54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119a6c;
  pcVar1 = DAT_00119a68;
  iVar3 = DAT_00119a6c + 0xd0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

