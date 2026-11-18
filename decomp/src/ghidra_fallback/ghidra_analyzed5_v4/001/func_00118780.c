#include "ghidra_types.h"

extern undefined *DAT_00118794;
extern int DAT_00118798;

// USA 00118780 <- EU 00118780 (Ghidra, non-matching)
// GLOBAL DAT_00118794 undefined *
// GLOBAL DAT_00118798 int

int func_00118780(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118798;
  pcVar1 = DAT_00118794;
  iVar3 = DAT_00118798 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

