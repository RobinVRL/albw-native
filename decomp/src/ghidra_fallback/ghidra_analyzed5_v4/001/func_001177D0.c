#include "ghidra_types.h"

extern undefined *DAT_001177e4;
extern int DAT_001177e8;

// USA 001177D0 <- EU 001177D0 (Ghidra, non-matching)
// GLOBAL DAT_001177e4 undefined *
// GLOBAL DAT_001177e8 int

int func_001177D0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001177e8;
  pcVar1 = DAT_001177e4;
  iVar3 = DAT_001177e8 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

