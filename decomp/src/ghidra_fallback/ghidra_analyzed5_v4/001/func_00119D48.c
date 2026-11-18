#include "ghidra_types.h"

extern undefined *DAT_00119d5c;
extern int DAT_00119d60;

// USA 00119D48 <- EU 00119D48 (Ghidra, non-matching)
// GLOBAL DAT_00119d5c undefined *
// GLOBAL DAT_00119d60 int

int func_00119D48(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119d60;
  pcVar1 = DAT_00119d5c;
  iVar3 = DAT_00119d60 + 0xa0;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

