#include "ghidra_types.h"

extern undefined *DAT_0011a964;
extern int DAT_0011a968;

// USA 0011A950 <- EU 0011A950 (Ghidra, non-matching)
// GLOBAL DAT_0011a964 undefined *
// GLOBAL DAT_0011a968 int

int func_0011A950(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011a968;
  pcVar1 = DAT_0011a964;
  iVar3 = DAT_0011a968 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

