#include "ghidra_types.h"

extern undefined *DAT_00119f8c;
extern int DAT_00119f90;

// USA 00119F78 <- EU 00119F78 (Ghidra, non-matching)
// GLOBAL DAT_00119f8c undefined *
// GLOBAL DAT_00119f90 int

int func_00119F78(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00119f90;
  pcVar1 = DAT_00119f8c;
  iVar3 = DAT_00119f90 + 8;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}

