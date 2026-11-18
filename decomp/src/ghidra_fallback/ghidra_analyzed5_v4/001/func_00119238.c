#include "ghidra_types.h"

extern undefined *DAT_0011924c;
extern int DAT_00119250;

// USA 00119238 <- EU 00119238 (Ghidra, non-matching)
// GLOBAL DAT_0011924c undefined *
// GLOBAL DAT_00119250 int

int func_00119238(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119250;
  pcVar1 = DAT_0011924c;
  iVar3 = DAT_00119250 + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

