#include "ghidra_types.h"

extern undefined *DAT_0011ac04;
extern int DAT_0011ac08;

// USA 0011ABF0 <- EU 0011ABF0 (Ghidra, non-matching)
// GLOBAL DAT_0011ac04 undefined *
// GLOBAL DAT_0011ac08 int

int func_0011ABF0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ac08;
  pcVar1 = DAT_0011ac04;
  iVar3 = DAT_0011ac08 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

