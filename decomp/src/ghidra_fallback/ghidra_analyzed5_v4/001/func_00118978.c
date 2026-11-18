#include "ghidra_types.h"

extern undefined *DAT_0011898c;
extern int DAT_00118990;

// USA 00118978 <- EU 00118978 (Ghidra, non-matching)
// GLOBAL DAT_0011898c undefined *
// GLOBAL DAT_00118990 int

int func_00118978(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118990;
  pcVar1 = DAT_0011898c;
  iVar3 = DAT_00118990 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

