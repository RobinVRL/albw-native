#include "ghidra_types.h"

extern undefined *DAT_0011b3ac;
extern int DAT_0011b3b0;

// USA 0011B398 <- EU 0011B398 (Ghidra, non-matching)
// GLOBAL DAT_0011b3ac undefined *
// GLOBAL DAT_0011b3b0 int

int func_0011B398(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011b3b0;
  pcVar1 = DAT_0011b3ac;
  iVar3 = DAT_0011b3b0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

