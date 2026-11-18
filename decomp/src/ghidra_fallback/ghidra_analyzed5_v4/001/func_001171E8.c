#include "ghidra_types.h"

extern undefined *DAT_001171fc;
extern int DAT_00117200;

// USA 001171E8 <- EU 001171E8 (Ghidra, non-matching)
// GLOBAL DAT_001171fc undefined *
// GLOBAL DAT_00117200 int

int func_001171E8(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117200;
  pcVar1 = DAT_001171fc;
  iVar3 = DAT_00117200 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

