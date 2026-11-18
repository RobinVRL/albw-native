#include "ghidra_types.h"

extern undefined *DAT_00119b48;
extern int DAT_00119b4c;

// USA 00119B34 <- EU 00119B34 (Ghidra, non-matching)
// GLOBAL DAT_00119b48 undefined *
// GLOBAL DAT_00119b4c int

int func_00119B34(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119b4c;
  pcVar1 = DAT_00119b48;
  iVar3 = DAT_00119b4c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

