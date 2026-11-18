#include "ghidra_types.h"

extern undefined *DAT_0011afd8;
extern int DAT_0011afdc;

// USA 0011AFC4 <- EU 0011AFC4 (Ghidra, non-matching)
// GLOBAL DAT_0011afd8 undefined *
// GLOBAL DAT_0011afdc int

int func_0011AFC4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011afdc;
  pcVar1 = DAT_0011afd8;
  iVar3 = DAT_0011afdc + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

