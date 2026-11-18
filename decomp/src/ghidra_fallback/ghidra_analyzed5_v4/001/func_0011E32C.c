#include "ghidra_types.h"

extern undefined *DAT_0011e340;
extern int DAT_0011e344;

// USA 0011E32C <- EU 0011E32C (Ghidra, non-matching)
// GLOBAL DAT_0011e340 undefined *
// GLOBAL DAT_0011e344 int

int func_0011E32C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e344;
  pcVar1 = DAT_0011e340;
  iVar3 = DAT_0011e344 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

