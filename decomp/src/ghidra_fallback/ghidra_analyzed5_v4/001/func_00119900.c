#include "ghidra_types.h"

extern undefined *DAT_00119914;
extern int DAT_00119918;

// USA 00119900 <- EU 00119900 (Ghidra, non-matching)
// GLOBAL DAT_00119914 undefined *
// GLOBAL DAT_00119918 int

int func_00119900(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119918;
  pcVar1 = DAT_00119914;
  iVar3 = DAT_00119918 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

