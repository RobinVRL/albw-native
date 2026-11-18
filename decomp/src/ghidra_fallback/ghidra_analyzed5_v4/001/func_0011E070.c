#include "ghidra_types.h"

extern undefined *DAT_0011e084;
extern int DAT_0011e088;

// USA 0011E070 <- EU 0011E070 (Ghidra, non-matching)
// GLOBAL DAT_0011e084 undefined *
// GLOBAL DAT_0011e088 int

int func_0011E070(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e088;
  pcVar1 = DAT_0011e084;
  iVar3 = DAT_0011e088 + 0x40;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

