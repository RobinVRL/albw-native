#include "ghidra_types.h"

extern undefined *DAT_0011a114;
extern int DAT_0011a118;

// USA 0011A100 <- EU 0011A100 (Ghidra, non-matching)
// GLOBAL DAT_0011a114 undefined *
// GLOBAL DAT_0011a118 int

int func_0011A100(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a118;
  pcVar1 = DAT_0011a114;
  iVar3 = DAT_0011a118 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

