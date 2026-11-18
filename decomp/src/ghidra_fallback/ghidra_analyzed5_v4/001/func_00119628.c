#include "ghidra_types.h"

extern undefined *DAT_0011963c;
extern int DAT_00119640;

// USA 00119628 <- EU 00119628 (Ghidra, non-matching)
// GLOBAL DAT_0011963c undefined *
// GLOBAL DAT_00119640 int

int func_00119628(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119640;
  pcVar1 = DAT_0011963c;
  iVar3 = DAT_00119640 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

