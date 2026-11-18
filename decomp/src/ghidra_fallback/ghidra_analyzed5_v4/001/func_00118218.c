#include "ghidra_types.h"

extern undefined *DAT_0011822c;
extern int DAT_00118230;

// USA 00118218 <- EU 00118218 (Ghidra, non-matching)
// GLOBAL DAT_0011822c undefined *
// GLOBAL DAT_00118230 int

int func_00118218(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118230;
  pcVar1 = DAT_0011822c;
  iVar3 = DAT_00118230 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

