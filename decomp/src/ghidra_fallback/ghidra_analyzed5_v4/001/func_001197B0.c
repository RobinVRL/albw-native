#include "ghidra_types.h"

extern undefined *DAT_001197c4;
extern int DAT_001197c8;

// USA 001197B0 <- EU 001197B0 (Ghidra, non-matching)
// GLOBAL DAT_001197c4 undefined *
// GLOBAL DAT_001197c8 int

int func_001197B0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001197c8;
  pcVar1 = DAT_001197c4;
  iVar3 = DAT_001197c8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

