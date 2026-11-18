#include "ghidra_types.h"

extern undefined *DAT_00119ec8;
extern int DAT_00119ecc;

// USA 00119EB4 <- EU 00119EB4 (Ghidra, non-matching)
// GLOBAL DAT_00119ec8 undefined *
// GLOBAL DAT_00119ecc int

int func_00119EB4(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119ecc;
  pcVar1 = DAT_00119ec8;
  iVar3 = DAT_00119ecc + 0x18;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

