#include "ghidra_types.h"

extern undefined *DAT_0011ac74;
extern int DAT_0011ac78;

// USA 0011AC60 <- EU 0011AC60 (Ghidra, non-matching)
// GLOBAL DAT_0011ac74 undefined *
// GLOBAL DAT_0011ac78 int

int func_0011AC60(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ac78;
  pcVar1 = DAT_0011ac74;
  iVar3 = DAT_0011ac78 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

