#include "ghidra_types.h"

extern undefined *DAT_001171c4;
extern int DAT_001171c8;

// USA 001171B0 <- EU 001171B0 (Ghidra, non-matching)
// GLOBAL DAT_001171c4 undefined *
// GLOBAL DAT_001171c8 int

int func_001171B0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001171c8;
  pcVar1 = DAT_001171c4;
  iVar3 = DAT_001171c8 + 0x48;
  do {
    iVar3 = iVar3 + -0xc;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

