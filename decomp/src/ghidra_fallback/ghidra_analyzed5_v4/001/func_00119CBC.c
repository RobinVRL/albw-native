#include "ghidra_types.h"

extern undefined *DAT_00119cd0;
extern int DAT_00119cd4;

// USA 00119CBC <- EU 00119CBC (Ghidra, non-matching)
// GLOBAL DAT_00119cd0 undefined *
// GLOBAL DAT_00119cd4 int

int func_00119CBC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119cd4;
  pcVar1 = DAT_00119cd0;
  iVar3 = DAT_00119cd4 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

