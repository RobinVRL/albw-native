#include "ghidra_types.h"

extern undefined *DAT_0011ddac;
extern int DAT_0011ddb0;

// USA 0011DD98 <- EU 0011DD98 (Ghidra, non-matching)
// GLOBAL DAT_0011ddac undefined *
// GLOBAL DAT_0011ddb0 int

int func_0011DD98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011ddb0;
  pcVar1 = DAT_0011ddac;
  iVar3 = DAT_0011ddb0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

