#include "ghidra_types.h"

extern undefined *DAT_0011ac3c;
extern int DAT_0011ac40;

// USA 0011AC28 <- EU 0011AC28 (Ghidra, non-matching)
// GLOBAL DAT_0011ac3c undefined *
// GLOBAL DAT_0011ac40 int

int func_0011AC28(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ac40;
  pcVar1 = DAT_0011ac3c;
  iVar3 = DAT_0011ac40 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

