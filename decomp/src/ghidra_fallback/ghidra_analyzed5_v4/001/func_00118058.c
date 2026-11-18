#include "ghidra_types.h"

extern undefined *DAT_0011806c;
extern int DAT_00118070;

// USA 00118058 <- EU 00118058 (Ghidra, non-matching)
// GLOBAL DAT_0011806c undefined *
// GLOBAL DAT_00118070 int

int func_00118058(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118070;
  pcVar1 = DAT_0011806c;
  iVar3 = DAT_00118070 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

