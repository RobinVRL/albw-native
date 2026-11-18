#include "ghidra_types.h"

extern undefined *DAT_0011e014;
extern int DAT_0011e018;

// USA 0011E000 <- EU 0011E000 (Ghidra, non-matching)
// GLOBAL DAT_0011e014 undefined *
// GLOBAL DAT_0011e018 int

int func_0011E000(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e018;
  pcVar1 = DAT_0011e014;
  iVar3 = DAT_0011e018 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

