#include "ghidra_types.h"

extern undefined *DAT_00119118;
extern int DAT_0011911c;

// USA 00119104 <- EU 00119104 (Ghidra, non-matching)
// GLOBAL DAT_00119118 undefined *
// GLOBAL DAT_0011911c int

int func_00119104(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0011911c;
  pcVar1 = DAT_00119118;
  iVar3 = DAT_0011911c + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

