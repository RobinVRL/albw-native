#include "ghidra_types.h"

extern undefined *DAT_00119038;
extern int DAT_0011903c;

// USA 00119024 <- EU 00119024 (Ghidra, non-matching)
// GLOBAL DAT_00119038 undefined *
// GLOBAL DAT_0011903c int

int func_00119024(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011903c;
  pcVar1 = DAT_00119038;
  iVar3 = DAT_0011903c + 0x100;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

