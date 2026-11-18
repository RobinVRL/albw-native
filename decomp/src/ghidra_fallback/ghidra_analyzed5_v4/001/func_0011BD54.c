#include "ghidra_types.h"

extern undefined *DAT_0011bd68;
extern int DAT_0011bd6c;

// USA 0011BD54 <- EU 0011BD54 (Ghidra, non-matching)
// GLOBAL DAT_0011bd68 undefined *
// GLOBAL DAT_0011bd6c int

int func_0011BD54(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011bd6c;
  pcVar1 = DAT_0011bd68;
  iVar3 = DAT_0011bd6c + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

