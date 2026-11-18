#include "ghidra_types.h"

extern undefined *DAT_0011e164;
extern int DAT_0011e168;

// USA 0011E150 <- EU 0011E150 (Ghidra, non-matching)
// GLOBAL DAT_0011e164 undefined *
// GLOBAL DAT_0011e168 int

int func_0011E150(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e168;
  pcVar1 = DAT_0011e164;
  iVar3 = DAT_0011e168 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

