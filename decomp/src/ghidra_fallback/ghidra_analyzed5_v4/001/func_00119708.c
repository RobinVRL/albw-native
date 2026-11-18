#include "ghidra_types.h"

extern undefined *DAT_0011971c;
extern int DAT_00119720;

// USA 00119708 <- EU 00119708 (Ghidra, non-matching)
// GLOBAL DAT_0011971c undefined *
// GLOBAL DAT_00119720 int

int func_00119708(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119720;
  pcVar1 = DAT_0011971c;
  iVar3 = DAT_00119720 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

