#include "ghidra_types.h"

extern undefined *DAT_0011994c;
extern int DAT_00119950;

// USA 00119938 <- EU 00119938 (Ghidra, non-matching)
// GLOBAL DAT_0011994c undefined *
// GLOBAL DAT_00119950 int

int func_00119938(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119950;
  pcVar1 = DAT_0011994c;
  iVar3 = DAT_00119950 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

