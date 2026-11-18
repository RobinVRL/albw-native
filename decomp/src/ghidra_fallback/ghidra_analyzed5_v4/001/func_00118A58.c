#include "ghidra_types.h"

extern undefined *DAT_00118a6c;
extern int DAT_00118a70;

// USA 00118A58 <- EU 00118A58 (Ghidra, non-matching)
// GLOBAL DAT_00118a6c undefined *
// GLOBAL DAT_00118a70 int

int func_00118A58(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118a70;
  pcVar1 = DAT_00118a6c;
  iVar3 = DAT_00118a70 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

