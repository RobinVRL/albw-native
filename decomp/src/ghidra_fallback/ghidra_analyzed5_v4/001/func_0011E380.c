#include "ghidra_types.h"

extern undefined *DAT_0011e394;
extern int DAT_0011e398;

// USA 0011E380 <- EU 0011E380 (Ghidra, non-matching)
// GLOBAL DAT_0011e394 undefined *
// GLOBAL DAT_0011e398 int

int func_0011E380(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011e398;
  pcVar1 = DAT_0011e394;
  iVar3 = DAT_0011e398 + 0x48;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

