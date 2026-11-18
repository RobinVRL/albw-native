#include "ghidra_types.h"

extern undefined *DAT_00118b4c;
extern int DAT_00118b50;

// USA 00118B38 <- EU 00118B38 (Ghidra, non-matching)
// GLOBAL DAT_00118b4c undefined *
// GLOBAL DAT_00118b50 int

int func_00118B38(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118b50;
  pcVar1 = DAT_00118b4c;
  iVar3 = DAT_00118b50 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

