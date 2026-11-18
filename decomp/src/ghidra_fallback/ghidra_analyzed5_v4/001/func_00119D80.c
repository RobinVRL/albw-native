#include "ghidra_types.h"

extern undefined *DAT_00119d94;
extern int DAT_00119d98;

// USA 00119D80 <- EU 00119D80 (Ghidra, non-matching)
// GLOBAL DAT_00119d94 undefined *
// GLOBAL DAT_00119d98 int

int func_00119D80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119d98;
  pcVar1 = DAT_00119d94;
  iVar3 = DAT_00119d98 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

