#include "ghidra_types.h"

extern undefined *DAT_001194ec;
extern int DAT_001194f0;

// USA 001194D8 <- EU 001194D8 (Ghidra, non-matching)
// GLOBAL DAT_001194ec undefined *
// GLOBAL DAT_001194f0 int

int func_001194D8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_001194f0;
  pcVar1 = DAT_001194ec;
  iVar3 = DAT_001194f0 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

