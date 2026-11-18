#include "ghidra_types.h"

extern undefined *DAT_00119af4;
extern int DAT_00119af8;

// USA 00119AE0 <- EU 00119AE0 (Ghidra, non-matching)
// GLOBAL DAT_00119af4 undefined *
// GLOBAL DAT_00119af8 int

int func_00119AE0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119af8;
  pcVar1 = DAT_00119af4;
  iVar3 = DAT_00119af8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

