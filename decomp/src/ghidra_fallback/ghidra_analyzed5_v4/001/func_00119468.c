#include "ghidra_types.h"

extern undefined *DAT_0011947c;
extern int DAT_00119480;

// USA 00119468 <- EU 00119468 (Ghidra, non-matching)
// GLOBAL DAT_0011947c undefined *
// GLOBAL DAT_00119480 int

int func_00119468(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119480;
  pcVar1 = DAT_0011947c;
  iVar3 = DAT_00119480 + 0x10;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

