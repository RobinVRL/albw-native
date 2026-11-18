#include "ghidra_types.h"

extern undefined *DAT_001179dc;
extern int DAT_001179e0;

// USA 001179C8 <- EU 001179C8 (Ghidra, non-matching)
// GLOBAL DAT_001179dc undefined *
// GLOBAL DAT_001179e0 int

int func_001179C8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001179e0;
  pcVar1 = DAT_001179dc;
  iVar3 = DAT_001179e0 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

