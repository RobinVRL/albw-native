#include "ghidra_types.h"

extern undefined *DAT_00118f74;
extern int DAT_00118f78;

// USA 00118F60 <- EU 00118F60 (Ghidra, non-matching)
// GLOBAL DAT_00118f74 undefined *
// GLOBAL DAT_00118f78 int

int func_00118F60(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118f78;
  pcVar1 = DAT_00118f74;
  iVar3 = DAT_00118f78 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

