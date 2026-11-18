#include "ghidra_types.h"

extern undefined *DAT_00119a10;
extern int DAT_00119a14;

// USA 001199FC <- EU 001199FC (Ghidra, non-matching)
// GLOBAL DAT_00119a10 undefined *
// GLOBAL DAT_00119a14 int

int func_001199FC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119a14;
  pcVar1 = DAT_00119a10;
  iVar3 = DAT_00119a14 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

