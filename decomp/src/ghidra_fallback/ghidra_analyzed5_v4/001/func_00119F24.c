#include "ghidra_types.h"

extern undefined *DAT_00119f38;
extern int DAT_00119f3c;

// USA 00119F24 <- EU 00119F24 (Ghidra, non-matching)
// GLOBAL DAT_00119f38 undefined *
// GLOBAL DAT_00119f3c int

int func_00119F24(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119f3c;
  pcVar1 = DAT_00119f38;
  iVar3 = DAT_00119f3c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

