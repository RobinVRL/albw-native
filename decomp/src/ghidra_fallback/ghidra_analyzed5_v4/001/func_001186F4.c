#include "ghidra_types.h"

extern undefined *DAT_00118708;
extern int DAT_0011870c;

// USA 001186F4 <- EU 001186F4 (Ghidra, non-matching)
// GLOBAL DAT_00118708 undefined *
// GLOBAL DAT_0011870c int

int func_001186F4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011870c;
  pcVar1 = DAT_00118708;
  iVar3 = DAT_0011870c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

