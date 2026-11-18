#include "ghidra_types.h"

extern undefined *DAT_0011955c;
extern int DAT_00119560;

// USA 00119548 <- EU 00119548 (Ghidra, non-matching)
// GLOBAL DAT_0011955c undefined *
// GLOBAL DAT_00119560 int

int func_00119548(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119560;
  pcVar1 = DAT_0011955c;
  iVar3 = DAT_00119560 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

