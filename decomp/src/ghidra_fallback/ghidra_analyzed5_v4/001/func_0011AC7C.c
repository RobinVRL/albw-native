#include "ghidra_types.h"

extern undefined *DAT_0011ac90;
extern int DAT_0011ac94;

// USA 0011AC7C <- EU 0011AC7C (Ghidra, non-matching)
// GLOBAL DAT_0011ac90 undefined *
// GLOBAL DAT_0011ac94 int

int func_0011AC7C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ac94;
  pcVar1 = DAT_0011ac90;
  iVar3 = DAT_0011ac94 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

