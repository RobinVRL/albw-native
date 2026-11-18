#include "ghidra_types.h"

extern undefined *DAT_0011be64;
extern int DAT_0011be68;

// USA 0011BE50 <- EU 0011BE50 (Ghidra, non-matching)
// GLOBAL DAT_0011be64 undefined *
// GLOBAL DAT_0011be68 int

int func_0011BE50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011be68;
  pcVar1 = DAT_0011be64;
  iVar3 = DAT_0011be68 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

