#include "ghidra_types.h"

extern undefined *DAT_0011875c;
extern int DAT_00118760;

// USA 00118748 <- EU 00118748 (Ghidra, non-matching)
// GLOBAL DAT_0011875c undefined *
// GLOBAL DAT_00118760 int

int func_00118748(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118760;
  pcVar1 = DAT_0011875c;
  iVar3 = DAT_00118760 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

