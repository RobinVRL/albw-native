#include "ghidra_types.h"

extern undefined *DAT_0011814c;
extern int DAT_00118150;

// USA 00118138 <- EU 00118138 (Ghidra, non-matching)
// GLOBAL DAT_0011814c undefined *
// GLOBAL DAT_00118150 int

int func_00118138(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118150;
  pcVar1 = DAT_0011814c;
  iVar3 = DAT_00118150 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

