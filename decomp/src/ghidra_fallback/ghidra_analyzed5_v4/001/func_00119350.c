#include "ghidra_types.h"

extern undefined *DAT_00119364;
extern int DAT_00119368;

// USA 00119350 <- EU 00119350 (Ghidra, non-matching)
// GLOBAL DAT_00119364 undefined *
// GLOBAL DAT_00119368 int

int func_00119350(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119368;
  pcVar1 = DAT_00119364;
  iVar3 = DAT_00119368 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

