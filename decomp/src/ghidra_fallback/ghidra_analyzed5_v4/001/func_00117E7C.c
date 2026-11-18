#include "ghidra_types.h"

extern undefined *DAT_00117e90;
extern int DAT_00117e94;

// USA 00117E7C <- EU 00117E7C (Ghidra, non-matching)
// GLOBAL DAT_00117e90 undefined *
// GLOBAL DAT_00117e94 int

int func_00117E7C(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00117e94;
  pcVar1 = DAT_00117e90;
  iVar3 = DAT_00117e94 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

