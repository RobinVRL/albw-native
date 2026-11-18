#include "ghidra_types.h"

extern undefined *DAT_00119bf0;
extern int DAT_00119bf4;

// USA 00119BDC <- EU 00119BDC (Ghidra, non-matching)
// GLOBAL DAT_00119bf0 undefined *
// GLOBAL DAT_00119bf4 int

int func_00119BDC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119bf4;
  pcVar1 = DAT_00119bf0;
  iVar3 = DAT_00119bf4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

