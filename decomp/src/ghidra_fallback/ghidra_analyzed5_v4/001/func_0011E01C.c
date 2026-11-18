#include "ghidra_types.h"

extern undefined *DAT_0011e030;
extern int DAT_0011e034;

// USA 0011E01C <- EU 0011E01C (Ghidra, non-matching)
// GLOBAL DAT_0011e030 undefined *
// GLOBAL DAT_0011e034 int

int func_0011E01C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e034;
  pcVar1 = DAT_0011e030;
  iVar3 = DAT_0011e034 + 0x30;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

