#include "ghidra_types.h"

extern undefined *DAT_00119eac;
extern int DAT_00119eb0;

// USA 00119E98 <- EU 00119E98 (Ghidra, non-matching)
// GLOBAL DAT_00119eac undefined *
// GLOBAL DAT_00119eb0 int

int func_00119E98(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119eb0;
  pcVar1 = DAT_00119eac;
  iVar3 = DAT_00119eb0 + 0x28;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

