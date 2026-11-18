#include "ghidra_types.h"

extern undefined *DAT_00119700;
extern int DAT_00119704;

// USA 001196EC <- EU 001196EC (Ghidra, non-matching)
// GLOBAL DAT_00119700 undefined *
// GLOBAL DAT_00119704 int

int func_001196EC(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119704;
  pcVar1 = DAT_00119700;
  iVar3 = DAT_00119704 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

